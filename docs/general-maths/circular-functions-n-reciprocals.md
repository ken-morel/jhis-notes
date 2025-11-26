# Circular functions and their reciprocals

Circular functions relate the angles of a right angle triangle to the ratio
of it's sides length or more generaly, the coordinate of the points on a
unit cycle. Circular functions are also called trigonometric functions.

The primary sine funcitons are:
- $sine θ$
- $cos θ$
- $tan θ$


|Circular functions|   Reciprocal     |   Abbreviation   |       Pythagorean identity           |
|:----------------:|:----------------:|:----------------:|:------------------------------------:|
|   $sin θ$        |  cosecant of θ   |   $cosec x$      |  $1 + \\cotan^2 x  = \\cosec^2 x$    |
|   $cos θ$        |   secant of θ    |   $sec θ$        |  $1 + \\tan^2 x = \\sec^2 x$         |
|   $tan θ$        | cotangent of θ   |   $cotan θ$      |  $1 + \\cotan^2 x = \\cosec^2 x$     |

## Identities

- $\\cos^2 x + \\sin^2 x = 1$
- $-1 <= \\sin x <= 1$
- $-1 <=\\cos x <= 1$

## Example

If $\\sin x = \frac{3}{5}$, let's find:

- $\\cos x$:
  $$
  \begin{align}
  \verb|We know that:| \\cos^2 x + \\sin^2 x = 1  \newline
  \rightarrow \\cos^2 x = 1 - \\sin^2 x \newline
  \rightarrow \\cos x = \sqrt{1 - \\sin^2 x} \newline
  \verb|but since| x = \frac{3}{5} \verb|then| \\cos x = \sqrt{\frac{16}{25}})\newline
  \rightarrow \\cos x = \frac{4}{5}
  \end{align}
  $$


##### Assignment

if $\\sin x = \frac{1}{2}$, find:
-  $\\cos x$
- $\\tan x$
- $\\sec x$
- $\\cosec x$

## Hyperbolic functions and their reciprocals

Hyperbolic functions are combinations of exponential $e^x$ and $e^{-x}$, they
share many analogous properties and identity with trigonometric functions, but
they are not periodic.

| Hyperbolic function              | Definition in exponential form | Reciprocal of hyperbolic function| Domain of function | Range of function |
|:--------------------------------:|:------------------------------:|:--------------------------------:|:------------------:|:-----------------:|
| Hyperbolic sine($\\sinh x$)      | $\frac{e^x - e^{-x}}{2}$     |  $\\cosech x$                    |    $\mathbb{R}$      |  $\mathbb{R}$       |
| Hyperbolic cosine($\\cosh x$)    | $\frac{e^x + e^{-x}}{2}$       | $\\sech x$                        |  $\mathbb{R}$     | $[1, +\infty[$ |
| Hyperbolic tangent($\\tanh x$)   | $\frac{e^x - e^{-x}}{e^x + e^{-x}}$  | $\frac{1, \\tanh x} = \\cotanh x $|  $\mathbb{R}$  | $]-1,1[$ |

## Excercise

if $\\cosh x = \frac{1}{3} $, find $\\sinh x, \\sech x, \\tanh x, \\sech x, \\cotanh x$

if $\\cosh x = 3$, let's find ...
$$
\begin{align}
\verb|we know that:| \newline
\\cosh^2 x - \\sinh^2 x = 1 \newline
\verb|then| \newline
\\sinh^2 x = \\cosh^2 x - 1 \newline
\implies \\sinh x = \sqrt{-1 + \\cosh^2 x}
&= \sqrt{3}
\end{align}
$$

### tanh

- $\\tanh x = \frac{\\sinh x}{\\cosh x} = \frac{\sqrt{3}}{2}$
- $\\sech x = \frac{1}{\\cosh x} = \frac{1}{2}$
- $\\cosech x = \frac{1}{\\sinh x} = \frac{1}{\sqrt{3}} = \frac{\sqrt{3}}{3}$ 

## HW N2

if $\\sinh x = \frac{3}{2}$, then find:

- $\\cosh x$
- $\\tanh x$
- $\\sech x$
- $\\cosech x$
- $\\cotanh x$
