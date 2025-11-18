# The PPC(Production Possibility Curve)

> **Opportunity cost** is the next best opportunity forgone.

The PPC is a line/curve which shows the different possible combinations of two
products which can be prduced by a single firm/nation using all of it's
available resources at a static technology and point in time.

## Example

Given a bakery, where we have:
- **Resources**:
  - *1* Oven
  - *1* Worker
- **Products**:
  - Bread
  - Cakes

The data is given as follows:

| Breads | Cakes |
|:------:|:-----:|
| 216    | 0     |
| 180    | 48    |
| 144    | 96    |
| 108    | 144   |
| 72     | 192   |
| 36     | 240   |
| 0      | 288   |

```julia
using Plots
plt = plot(0:48:288, 216:-36:0; xlabel="Cakes", ylabel="Bread", label="PPC")
```

![Plot](./ppc-bread-cakes-1.svg)

## Points on the PPC

- **Points on the PPC**: All points on the PPC are efficient, the PPC line or
  curve represens the best and maximum ammount of product which can be made all
  resources used to their full.
- **Points in the curve**: The represent inefficient production due to idle
  resources, we can still improve on the production of both goods using
  available resources.
- **Points utside the PPC**: The PPC represents already the maximum, which
  is the limit of production, going above this line is _impossible_ to acheive
  since our resources used to the fullest make us arrive to the PPC.
  Factors pushing PPC outwards include:
  - Discovery of new resources.

## Shifts on the PPC

These are factors which may make the PPC buldge inwards or outwards
- **Outwards**:
  - Innovation, or improve in technology.
  - Improvement in quality of education.
  - Increase in population.
  - Discovery of idle resources:
    - Population(human labour).
- **Inwards**:
  - Inflation
  - National disasters

## Levels of efficiency on the curve

- **Productive**: Basically an increast in output.
- **Allocative**: When the resources allocated basically for the production
  of a particular good.
- **Pareto**: The normal scenario, at this point of efficiency _No good can be
  made better off without another good be made worse of_.

## Oportunity cost

Oportunity cost is given by:

```julia
O_C = decrease_in_consumer_good / increase_in_capital
```

### Example

| Possible condition | Capital good | Comsumer good|
|:-:|:-:|:-:|
|A|0|100|
|B|10|90|
|C|25|60|
|D|35|25|
|E|100|0|

Calculate the oportunity cost from increasing consumer goods from
10 to 25 units.

```julia
julia> O_C =  (90 - 60) / (10 - 25)
-2.0

```
