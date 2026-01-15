# Karnaugh Map(K-Map)

A k-map is a graphical method used to simplify boolean expressions.
It provides a systematic way of minimising boolean functions without
lengthy boolean algebra, they are widely used in digital electronics
to design efficient logic circuits. K-maps loog gray code ordering where
only one variabe changes between adjecent cells. This makes it easy
to identify common variables and eliminate redundant variables.

## How to obtain a boolean expression solution from K-map

- Identify the variables in the boolean function or thruth table and represent
  them in the k-map.
- Fill the k-map with 1's corresponding to the given _min terms_.
- Group adjescent 1's with powers of 2.
- For each group, identify variables which remain constant
  and eliminate changing variables.
- Write the boolean term for each group.
- Combine all terms using OR to get the final simplified expression.
