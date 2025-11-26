# Linear independence

A set of vectors, $\{V_1, V_2, V_3, ..., V_n\}$ is said to be linearly independent
in a vector space $\mathbb{V}$ is said to be linearly independent if the only
solution to the vector equation

$C_1*V_1 + C_2 * V_2 + ... = 0$ where $C_1 = C_2 = C_3 = ... = C_n = 0$

- $C_1 = C_2 = C_3 = ... = C_n$
  The above equation is a trivial solution.
  -> if there exists any non-trivial solution(Where at lrease one of
  the C_n is non-zero), the set of vectors is _Linearly dependent_.

- If $A$ is an $n x n$ sqare matrix or that the vector space, you can use
  their determinant as a _quick test_ id est:
  $if  \\det A ≠ 0$ the vectors are linearly independent
  If $\\det A = 0$ then the vectors are linearly dependent.
  **example**:
  If the three vectors
  ```julia
  A = [a_1, a_2, a_3]
  B = [b_1, b_2, b_3]
  C = [c_1, c_2, c_3]
  ```
  The three vectors are linearly independent if the determinant of
  the matrix: `[A B C]` is not equal to 0.


## Assignment

Determine if the following are linearly dependent:
- ```julia
  1. [[2, 1] [1, -3]]
  2. [[1, 0, 1] [0, 1, 1] [1, 1, 0]]
  ```
