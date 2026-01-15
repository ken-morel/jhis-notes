# Differential operators


A vector field, or a scalar field can be differentiated with respect to it's position
in three different ways to obtain another vector field or scalar field.

## The Nabla operator, or `del` operator, denoted


The nabla operator: $\nabla$ is defined as:

$\nabla = \frac{∂}{∂x} \vec{i} + \frac{∂}{∂x} \vec{j}$ 2D

$\nabla = \frac{∂}{∂x} \vec{i} + \frac{∂}{∂x} \vec{j} + \frac{∂}{∂x} \vec{k}$ 2D


$\nabla f = vec{grad}$

### Gradient of a scalar field

The gradient of a scalar function is defined as $\nabla f$ or $\vec{grad} f$

it is given by:

$\nabla f = \frac{∂f}{∂x} \vec{i} + \frac{∂f}{y∂} \vec{y} = \vec{grad} f$

### Divergence of a vector field

The divergence of a vector fiend is denoted by $\vec{\nabla} . \vec{f}$
It is also denoted $\vec{div} f$

We know from dot products that $\vec{A} . \vec{B} = A_x B_x + A_y B_y$

$\vec{\nabla} . \vec{F}} =

#### steps

Find the divergence of the following vetor field:
$\vec{f}(x, y) = x^2 y^2 \vec{i} - x^3 y^2 \vec{j}$

1. Identify the components of $\vec{f}(x, y)$
  - $F_x = x^2 + y^3$
  - $F_y = x^3 + y^2$
2. Apply the formula
  - $\vec{\nabla} . \vec{F} = \frac{∂F_x}{∂x} + \frac{∂F_y}{y∂}$
  - substitute the values of $F_x$ and $F_y$
3. solve:
  $= 2x y^3 - 2y x^3$


#### Example

Find the divergence of the following vetor field:

i)  $\vec{f}(x, y) = x^2 y^2 \vec{i} - x^3 y^2 \vec{j}$
  $= 2x y^3 - 2y x^3$
ii) $\vec{f}(x, y, z) = (xy - xz) \vec{i} + 3 x^2 \vec{j} + yz \vec{k}$
  $\vec{div} f = 2y - z$


### Curl of a vector field

The curl is denoted by $\vec{\nabla} \cross \vec{F}$ or $curl \vec{F}$

We still apply the same formula for nabla as we used before, except we apply
it in 3 dimensions and find the cross product with the vector components.

$\vec{\nabla} x \vec{F} = ?$

$\vec{F} = F_x \vec{i} + F_y \vec{j} + F_z \vec{k}$
$\vec{\nabla} = \frac{∂}{∂x} \vec{i} + \frac{∂}{∂y} \vec{j} + \frac{∂}{∂z} \vec{k}$

Then find the cross product of those both using matrix method.

#### Formula

![Image](./curl.jpg)

#### Steps

Find the curl of $\vec{F} (x, y, z) = x^2 \vec{i} + (2x y^2 - z)\vec{j} + z^3 k$
at the point $P(1, 0, 1)$

1. Find the $F_x$, $F_y$ and $F_z$ components.
2. Apply the formula to get $\vec{\nabla}$.
3. Find the cross product of $\nabla$ and $\vec{F}$.
4. substitute values if given.
