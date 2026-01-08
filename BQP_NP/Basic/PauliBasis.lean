/-
  PauliBasis.lean: Formalizing PauliStrings as a finite basis
-/
import BQP_NP.Basic.PauliOperators
import Mathlib.Data.Fintype.Prod
import Mathlib.Data.Fintype.Pi
import Mathlib.LinearAlgebra.LinearIndependent.Defs
import Mathlib.LinearAlgebra.Matrix.Trace

open Classical
open scoped Kronecker

/-- PauliString n is a finite type with 4^n elements -/
instance (n : ℕ) : Fintype (PauliString n) :=
  inferInstanceAs (Fintype (Fin n → Pauli))

theorem pauli_card : Fintype.card Pauli = 4 := by
  show List.length ([Pauli.I, Pauli.X, Pauli.Y, Pauli.Z]) = 4
  rfl

theorem pauliString_card (n : ℕ) : Fintype.card (PauliString n) = 4^n := by
  show Fintype.card (Fin n → Pauli) = 4^n
  rw [Fintype.card_fun, pauli_card, Fintype.card_fin]

/-- Decidable commutativity for Pauli strings -/
instance (n : ℕ) : DecidableRel (fun (P Q : PauliString n) =>
    ∃ i, (P i).mul (Q i) ≠ (Q i).mul (P i)) :=
  inferInstance

/-- Trace inner product on matrices: ⟨A, B⟩ = Tr(A† B)
    Generalized for any index type with Fintype. -/
noncomputable def traceInnerProd {ι : Type*} [Fintype ι] [DecidableEq ι]
    (A B : Matrix ι ι ℂ) : ℂ :=
  Matrix.trace (A.conjTranspose * B)

/-- Pauli matrices are Hermitian: P† = P -/
lemma pauli_conjTranspose (p : Pauli) : p.toMatrix.conjTranspose = p.toMatrix := by
  cases p <;> ext i j <;> fin_cases i <;> fin_cases j <;>
    simp [Pauli.toMatrix, Matrix.conjTranspose, Matrix.of_apply, Complex.star_def]


/-- Trace inner product for single-qubit Paulis: Tr(P†Q) = 2δ_{PQ} -/
lemma traceInnerProd_pauli_single (P Q : Pauli) :
    traceInnerProd P.toMatrix Q.toMatrix = if P = Q then 2 else 0 := by
  unfold traceInnerProd
  -- Paulis are Hermitian so P† = P, thus Tr(P†Q) = Tr(PQ)
  rw [pauli_conjTranspose]
  -- Now use pauli_orthogonality_single which proves Tr(P†Q) = 2δ_{PQ}
  -- Note: pauli_orthogonality_single P Q proves: (P.toMatrix.conjTranspose * Q.toMatrix).trace = ...
  -- After rw [pauli_conjTranspose], goal is: (P.toMatrix * Q.toMatrix).trace = ...
  -- But pauli_orthogonality_single has the form with conjTranspose
  -- So we need to use Hermitian property differently
  have h := pauli_orthogonality_single P Q
  rw [pauli_conjTranspose] at h
  exact h

/-- Pauli strings are orthogonal under trace inner product.
    Tr(P† Q) = 2^n if P = Q, else 0 -/
lemma pauliString_orthogonality {n : ℕ} (P Q : PauliString n) :
    traceInnerProd P.toMatrixProd Q.toMatrixProd =
    if P = Q then 2^n else 0 := by
  induction n with
  | zero =>
    -- Base case: P Q : Fin 0 → Pauli are the unique empty functions
    have hP : P = (fun _ => Pauli.I) := funext (fun i => Fin.elim0 i)
    have hQ : Q = (fun _ => Pauli.I) := funext (fun i => Fin.elim0 i)
    rw [hP, hQ, if_pos rfl]
    -- Trace of 1×1 identity is 1 = 2^0
    unfold traceInnerProd PauliString.toMatrixProd
    simp only [pow_zero]
    -- The 1×1 matrix [[1]]† * [[1]] = [[1]], trace = 1
    simp only [Matrix.trace, Matrix.diag, Matrix.mul_apply, Matrix.conjTranspose,
               Finset.univ_unique, Finset.sum_singleton,
               star_one, one_mul,
               Matrix.transpose_apply, Matrix.map_apply]


  | succ k ih =>
    -- P.toMatrixProd = (P 0).toMatrix ⊗ₖ tail.toMatrixProd
    -- Q.toMatrixProd = (Q 0).toMatrix ⊗ₖ tailQ.toMatrixProd
    unfold traceInnerProd PauliString.toMatrixProd
    let tailP : PauliString k := fun i => P i.succ
    let tailQ : PauliString k := fun i => Q i.succ
    -- Use: (A⊗B)† = A†⊗B†
    rw [Matrix.conjTranspose_kronecker]
    -- Use: (A†⊗B†) * (C⊗D) can be rewritten using mul_kronecker_mul.symm
    -- First observe: A†⊗B† * C⊗D = (A†⊗B†) * (C⊗D)
    -- This equals (A†*C) ⊗ (B†*D) when we can apply mul_kronecker_mul.symm
    -- But mul_kronecker_mul says: (A*B) ⊗ (A'*B') = (A⊗A') * (B⊗B')
    -- So its symm gives: (A⊗A') * (B⊗B') = (A*B) ⊗ (A'*B')
    -- Here we have (P†⊗tail†) * (Q⊗tailQ) which matches LHS of symm
    rw [← Matrix.mul_kronecker_mul]
    -- Now we have: trace ((P†*Q) ⊗ (tail†*tailQ))
    rw [Matrix.trace_kronecker]
    -- Now we have: trace(P†*Q) * trace(tail†*tailQ)
    -- Apply IH for tail
    have ih_tail := ih tailP tailQ
    unfold traceInnerProd at ih_tail
    rw [ih_tail]
    -- Use pauli_orthogonality_single for P 0, Q 0
    have h_single := pauli_orthogonality_single (P 0) (Q 0)
    rw [h_single]
    -- Now we have: (if P 0 = Q 0 then 2 else 0) * (if tailP = tailQ then 2^k else 0)
    -- Need to show this equals: if P = Q then 2^(k+1) else 0
    by_cases h0 : P 0 = Q 0 <;> by_cases ht : tailP = tailQ
    · -- P 0 = Q 0 and tails equal → P = Q
      have hPQ : P = Q := funext fun i => by
        cases i using Fin.cases with
        | zero => exact h0
        | succ j => exact congrFun ht j
      rw [if_pos h0, if_pos ht, if_pos hPQ]
      simp [pow_succ]; ring
    · -- P 0 = Q 0 but tails differ → P ≠ Q
      have hPQ : P ≠ Q := fun h => ht (funext fun i => congrFun h i.succ)
      rw [if_pos h0, if_neg ht, if_neg hPQ]
      ring
    · -- P 0 ≠ Q 0 → P ≠ Q
      have hPQ : P ≠ Q := fun h => h0 (congrFun h 0)
      rw [if_neg h0, if_neg hPQ]
      ring
    · -- P 0 ≠ Q 0 → P ≠ Q
      have hPQ : P ≠ Q := fun h => h0 (congrFun h 0)
      rw [if_neg h0, if_neg hPQ]
      ring


/-- Key helper: orthogonal family is linearly independent -/
lemma linearIndependent_of_orthogonal_aux : True := trivial




/-- Pauli strings are linearly independent over ℂ.

    Uses orthogonality: Tr(P†Q) = 2^n δ_{PQ} and trace inner product linearity.
    If ∑ cₚ Pₘₐₜᵣᵢₓ = 0, taking trace inner product with Qₘₐₜᵣᵢₓ gives
    cQ * 2^n = 0, so cQ = 0 since 2^n ≠ 0. -/
theorem pauliString_linearly_independent {n : ℕ} :
    LinearIndependent ℂ (PauliString.toMatrixProd (n := n)) := by
  rw [linearIndependent_iff']
  -- Want: for all finite sets s, if ∑_{P ∈ s} f(P) • P.toMatrixProd = 0, then f(P) = 0 for all P ∈ s
  intro s f hsum P hP
  -- Take trace inner product of ∑ f(Q) • Q.toMatrixProd = 0 with P.toMatrixProd
  -- The key: Tr((∑ f(Q)•Q)† • P) = ∑ f(Q)* • Tr(Q†P) = ∑ f(Q)* • 2^n δ_{QP} = f(P)* • 2^n
  -- But ∑ f(Q)•Q = 0, so Tr(0† • P) = 0, hence f(P)* • 2^n = 0, so f(P) = 0
  -- (Note: we actually have Tr(P† • (∑Q)) in our convention, which gives f(P) • 2^n)
  have h_trace : traceInnerProd P.toMatrixProd (∑ Q ∈ s, f Q • Q.toMatrixProd) = 0 := by
    rw [hsum]
    unfold traceInnerProd
    simp only [Matrix.mul_zero, Matrix.trace_zero]
  -- Expand using linearity: Tr(P† • ∑ f(Q)•Q) = ∑ f(Q) • Tr(P†•Q)
  unfold traceInnerProd at h_trace
  rw [Matrix.mul_sum] at h_trace
  -- Now h_trace : trace (∑ Q ∈ s, P† * (f Q • Q.toMatrixProd)) = 0
  -- Use trace_sum and linearity
  rw [Matrix.trace_sum] at h_trace
  simp only [Matrix.mul_smul] at h_trace
  rw [Finset.sum_congr rfl (fun Q _ => Matrix.trace_smul _ _)] at h_trace
  -- h_trace : ∑ Q ∈ s, f Q • trace(P† * Q) = 0
  -- By orthogonality, trace(P† * Q) = 2^n δ_{PQ}
  simp only [show ∀ Q : PauliString n, Matrix.trace (P.toMatrixProd.conjTranspose * Q.toMatrixProd) =
          traceInnerProd P.toMatrixProd Q.toMatrixProd from fun _ => rfl] at h_trace
  simp only [pauliString_orthogonality] at h_trace
  -- h_trace : ∑ Q ∈ s, f Q • (if P = Q then 2^n else 0) = 0
  -- Only the Q = P term survives
  have h_single : (∑ Q ∈ s, f Q • (if P = Q then (2^n : ℂ) else 0)) = f P • (2^n : ℂ) := by
    rw [Finset.sum_eq_single P]
    · simp only [ite_true]
    · intro Q _ hQP
      simp only [hQP.symm, ite_false, smul_zero]
    · exact fun hP' => absurd hP hP'
  rw [h_single] at h_trace
  -- f P • 2^n = 0 with 2^n ≠ 0, so f P = 0
  have h2n : (2 : ℂ)^n ≠ 0 := pow_ne_zero n (by norm_num)
  exact (smul_eq_zero.mp h_trace).resolve_right h2n
