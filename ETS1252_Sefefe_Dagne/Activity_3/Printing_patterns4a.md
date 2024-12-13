  ### Algorithm(pseudocode)
### 1.Start

### 2.Print the First Pattern

Print "Pattern 1: A 5x5 grid of numbers from 1 to 5"

Loop i from 1 to 5

Loop j from 1 to 5

Print j followed by a space

Print a newline

### 3.Print the Second Pattern

Print "Pattern 2: A 4x6 grid of letters from A to X"

Initialize letter to 'A'

Loop i from 0 to 3

Loop j from 0 to 5

Print letter followed by a space

Increment letter

Print a newline

### 4.Print the Third Pattern

Print "Pattern 3: A right-angled triangle of numbers"

Loop i from 1 to 5

Loop j from 1 to i

Print j followed by a space

Print a newline

### 5.End

  ### Flowchart
  ```mermaid
graph TD
    A([Start]) --> B[/Pattern 1: A 5x5 grid of numbers from 1 to 5/]
    B --> C[Loop i from 1 to 5]
    C --> D[Loop j from 1 to 5]
    D --> E[/Print j/]
    E --> F[End loop j]
    F --> G[End loop i]
    G --> H[/Print newline/]
    H --> I[/Pattern 2: A 4x6 grid of letters from A to X/]
    I --> J[Initialize letter to 'A']
    J --> K[Loop i from 0 to 3]
    K --> L[Loop j from 0 to 5]
    L --> M[/Print letter/]
    M --> N[Increment letter]
    N --> O[End loop j]
    O --> P[End loop i]
    P --> Q[/Print newline/]
    Q --> R[/Pattern 3: A right-angled triangle of numbers/]
    R --> S[Loop i from 1 to 5]
    S --> T[Loop j from 1 to i]
    T --> U[/Print j/]
    U --> V[End loop j]
    V --> W[End loop i]
    W --> X[/Print newline/]
    X --> Y([End])
