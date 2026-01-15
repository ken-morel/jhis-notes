# Chapter 3: Functions of several variables.

## I -  Generalities

We know that $y = f(x)$ is used to represent a function of one variable.
In this case the input is $x$ and the output is $f(x)$.

$x$ can be called independent or input variable, while $y$ is the dependent
derived or output variable, for functions of several variables.

Functions of several variables are those taking more than one input value.
e.g $f(x, y)$ or $f(x, y, z)$.

Total derivative is the derivative of a funciin dependng on only one variable
while partial derivative depends on more.

The partial derivative of a function is the derivative with respect to one of
the variables while keeping the others constant.

Partial derivative of $f(x, y, z)$ with respect to $x$ is denoted by
$\frac{∂f}{∂x}$ or $f_x$.

### Example

Find the partial derivative of the following functions with respect to $x$ and
$y$:

1. $f(x, y) = x^3 + x + y^2 + y$
2. $f(x, y) = yx^2 + xy^3$
3. $f(x, y) = x^3 + 2yx^2 + y^2 + 2x - 1$
4. $f(x, y) = 2x^2 y^2 + xe^{xy}$
  for $f_x(-1, 2)$ and $f_y(-3, -0)$

#### Solution

1. $f(x, y) = x^3 + x + y^2 + y$
   $\implies \frac{∂f}{∂x} = \frac{∂(x^3 + x + y^2 + y)}{∂x}$
   $= 3x^2 + 1 + 0 + 0 = 3x^2 + 1$
2. $f(x, y) = x^2 y + xy^3$ ... $x^2 + 3y^2 x$
3. $f(x, y) \implies \frac{∂f}{∂y} = 2x^2 + 2y$
4. $f(x, y) = 2x^2 y^2 + xe^{xy}$
   $\implies \frac{∂f}{∂x} = 4xy^2 + e^{xy}$
   at $P(-1, 2)$
   $\frac{∂f}{∂x}|_{(-1, 2)} = 4(-1)(2)^2 + e^{(-1)(2)}$
   $\frac{∂f}{∂x}|_{(-1, 2)} = -16 - e^{-2}$
4. $\frac{∂f}{∂y} = \frac{∂}{∂x}(2x^2 y^2 + xe^{xy})$
   $\implies \frac{∂f}{∂y} = 4yx^2 + x^2 e^{xy}$
   now puting the values
   $\implies \frac{∂f}{∂y}|_{(-3, 0)} = 4(0)(-3)^2 + (-3)^2 e^{(-3)(0)}$
   $\implies \frac{∂f}{∂y}|_{(-3, 0)} = 0 + 9e^0 = 9$

## Second order partial derivatives

The second order partial derivative of $f$ with respect to $x$ is
denoted as $\frac{∂^2 f}{∂x^2}$ or $f_{xx}$.


## Mixed derivatives

They are denoted $f_{xy}$, which means partial derivative with respect to $y$,
then partial with respect to $x$.

When a function satisfies $f_{xy} = f_{yx}$ it is said to satisfy [Schwarz's theorem].

### Example 2

Find the following partial derivatives: $f_{xx}$, $f_{yy}$, $f_{xy} and $f_{yx}$
for the following functions.

1. $f(x, y) = x^3 + x^2 y^2 + 2y^3 + 2x + y$
2. $f_{xx}(-1, 1); f_{yy}(-2, 2)$ for $f(x, y) = xe^{xy} + x^2 ye^y + 2x^3 y^2$

### Assignment

3. $f(x, y) = x^4 y + x^2 \\ln{x} + ye^{xy}$
4. $f(x, y) = 8x^4 + 6y^3 + 2xy$

#### Solution

1. $f_{xy} = \frac{∂}{∂x}(\frac{∂f}{∂y}) = ... = 4xy$


