## The waterfall model

This contains an organist steps each leading to the other.

- **Requirement gathering**
- **System analysis**
- **Coding**
- **Testing**
- **Integrate**(Implement)
- **Maintenance**

It is that schema, where every step pours into the other that we call waterfall
model.

### Advantages

- **Clear structure**: When you finish a step, you get to the other.
- **Error detection**: Easily detect possible errors
- **Easy to manage**:
- **More accurate goals**: Allows you to determine the overall project goals.
- **Reduce dev issues**: Reduces development issues.

### Advantages

- **Rigid**: It is rigid, or one-way only. If the requirements change while
  we are in the coding phase, there is no way back.
- **Excludes clients and users**: Clients and users are not mentioned and are
  not part of the model.
- **Not suitable for complex projects**

## The V-Shape model

The V-Shape model is an extension of the waterfall model. It has stems devised
into two, and causing it's V-Shape

- **Verification**: The practice and evaluating of development period, includes:
  - Business req analysis:
    Understand product requirements
  - System analysis
    System eng analyze and interpret business requirements.
  - Sw arch design
    Selecting sw structures based on identified modules, functions and relevant
    technical elements. Some strategies guiding how modules are tested together
    are planed.
  - Module design
    Divide the software into small modules
  - Coding: Dev team selects a suitable programming language based on requirements.
    Multiple reviews for coding standard.
- Validation:
  Dynamic analysis, methods and testing to be sure the product meet the user requirements
  - Unit testing
    Identify and find errors at the unit level in small individual isolated parts of
    the software.
  - Integration Testing
    Executing integration tests dev in architecture, to make sure unit parts
    can coexist and work together after being tested to work individually.
  - System testing
    Executing system tests and testing the whole system with tests from system
    development tests. Ensures that the team meets the expectations
  - Acceptation testing
    Identify non-functional issues like growth and performance.

### Advantages

- Early error detection, testing done at each stage
- Improve quality with frequent tests
- Easy to manage and well-defined steps
- Good for large or complex projects(not like [Waterfall])

### Disadvantages

- It is inflexible, making changes are difficult
- Hard cost
- Late delivery
- Not suitable for complex projects
- Assume requirements are **...**


> Why the V shape?
> The V-Shape is very simple, every left step on the model which is an
> implementation has a corresponding horizontally parallel testing step.


## The Big bang model

It requires little or no time, consumes a lot of programming and faults.

> You get up a morning and starts coding

Good for little projects which don't require any planning.

```julia
bigbang(::Effort, ::Funds, ::Time)::Software
```

## Scrum

It is a method originating from Japan.

The  scrum focuses on 3 parts:

A spring is like a process devised into steps, while increments are output after
each springs.

- Iterative process 
- Work increments each cycle is to give a better output
- Collaboration: Enforce collaboration and team work.

- **Product backlog**: An organized list with requirement needed to run the project.
- **Spring backlog**: Items from the previous for the current  spring.

### Key principles

- **Adaptability to change**: In each of the steps, the project can easily be
  modified.
- **Transparency**: It is made up of visible steps permitting to review progress
  and list of items in backlog.

### Benefits

- **Fast product delivery**: At each stage a product is made which is improved
  for the next step.

### Advantages

- Requires expensive expertise.
- No hard deadlines
- Difficult to estimate the resources

### Advantages

- Is more interactive.
- Adaptability and flexibility.
- Improves the team morale, since members are working together with frequent
  spring meetings.
- Reduces wastage of resources.
