# Median

## The median
### Median class for grouped data


The median is given by:
$median = L_m + (\frac{\frac{n}{2} - F_c}{F_m})X_c$
where:
- $L_m$: Is the lower class boundary of the the median class.
- $F_c$: The frequency of the class before the median class.
- $F_m$: The frequency of the median class
- $X_c$: The class width of the median class
  $X_c = higher class boundary - lower class boundary$


The median class is the middle class in the distribution. If the number of
classes is even, it is the the one of the middle classes with the higher
frequency.

|   Age   | # workers | class Boundaries | F_c |
|:-------:|:---------:|:----------------:|:---:|
| 20 - 24 |      2    |    19.5 - 24.5   |  2  |
| 25 - 29 |      5    |    24.5 - 29.5   |  7  |
| 30 - 34 |     12    |    29.5 - 34.5   | 19  |
|*25 - 39*|    *17*   |   *34.5 - 39.5*  |*36* |
| 40 - 44 |     14    |    39.5 - 44.5   | 50  |
| 45 - 49 |      6    |    44.5 - 49.5   | 56  |
| 50 - 54 |      3    |    49.5 - 54.5   | 59  |
| 55 - 59 |      1    |    54.5 - 59     | 60  |

The median class is `25 - 39`. And thus:

- $L_m = 34.5$
- $F_c = 19$
- $X_c = 39.5 - 34.5 = 5$

> The median is $37.74$

plot:

```julia
plot([24.5:5:54.5; 59], [2, 7, 19, 36, 50, 56, 59, 60])
```
![Plot of median](./median-exe-2.png)



## Plotting the the cfc

Use the upper class boundaries and the cumulative frequencies.

## The mode

mode = $L_m + (\frac{F_m - F_b}{(F_m + F_b)+(F_m - F_a)})C$
Where:

- $L_m$: is the lower class boundary of the modal class.
- and for the rest talk of modal class and not median class

### Example:

|   Age   |  # workers | Class boundary |
|:-------:|:----------:|:--------------:|
| 20 - 24 |      2     |  19.5 - 24.5   |
| 25 - 29 |      5     |  24.5 - 29.5   |
| 30 - 34 |     12     |  29.5 - 34.5   |
| 35 - 39 |     17     |  34.5 - 41.5   |
| 44 - 49 |     14     |  41.5 - 40     |

$L_m = 45.f$
$F_m = 17$

mode = $34.5 + [\frac{17 - 12}{(17 - 12) + (17 - 14)}]7$
$= 34.5 + (\frac{5}{5 + 3})7$
$= 34.5 + 4.37 = 38.87$

