  ### Algorithm(pseudocode)
  ### start
### 1.Initialize Dimensions:

n1 = 5

n2 = 7, m2 = 8

n3 = 6

### 2.Pattern 1: 5x5 Grid of Numbers

Loop i from 1 to 5

Loop j from 1 to 5

Print j

New line

### 3.Pattern 2: 4x6 Grid of Letters

Loop i from 0 to 3

Loop j from 0 to 5

Print letter

Increment letter

New line

### 4.Pattern 3: Right-Angled Triangle of Numbers

Loop i from 1 to 5

Loop j from 1 to i

Print j

New line

### 5.Pattern 4: Right-Angled Number Pattern

Loop i from 1 to n1

Loop j from n1 to i (decrement)

Print spaces

Loop j from i to 1 (decrement)

Print j

New line

### 6.Pattern 5: Capital Letters Pattern

Loop i from 1 to n1

Initialize letter

Loop j from 1 to i

Print letter

Increment letter

New line

### 7.Pattern 6: Lowercase Letters Pattern

Loop i from 1 to n1

Initialize letter

Loop j from 1 to n1

Print letter

Increment letter

New line

### 8.Pattern 7: Hollow Rectangle

Loop i from 1 to n2

Loop j from 1 to m2

Print "*" at borders

New line

### 9.Pattern 8: Inverted Half Pyramid

Loop i from n3 to 1 (decrement)

Loop j from 1 to i

Print "*"

New line

### 10.Pattern 9: Hollow Inverted Half Pyramid

Loop i from n3 to 1 (decrement)

Loop j from 1 to i

Print "*" at borders

New line

### 11.Pattern 10: Full Pyramid (Odd Stars)

Loop i from 1 to n3

Loop j for leading spaces

Loop j for pyramid width

Print "*" in odd columns

New line

### 12.Pattern 11: Inverted Full Pyramid (Odd Stars)

Loop i from n3 to 1 (decrement)

Loop j for leading spaces

Loop j for pyramid width

Print "*" in odd columns

New line

### 13.Pattern 12: Hollow Full Pyramid (Correct Last Row)

Loop i from 1 to n3

Loop j for leading spaces

Loop j for pyramid width

Print "*" at borders and odd columns in last row

New line
### end

 ### flowchart
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
    P --> Q[Print newline]
    Q --> R[/Pattern 3: A right-angled triangle of numbers/]
    R --> S[Loop i from 1 to 5]
    S --> T[Loop j from 1 to i]
    T --> U[/Print j/]
    U --> V[End loop j]
    V --> W[End loop i]
    W --> X[/Print newline/]
    X --> Y[/Pattern 4: Numerical pattern with the right angle to the right/]
    Y --> Z[Loop i from 1 to 5]
    Z --> AA[Loop j from 5 to i]
    AA --> AB[/Print spaces/]
    AB --> AC[Loop j from i to 1]
    AC --> AD[/Print j/]
    AD --> AE[End loop j]
    AE --> AF[End loop i]
    AF --> AG[/Print newline/]
    AG --> AH[/Pattern 5: Alphabetical pattern capital letter/]
    AH --> AI[Loop i from 1 to 5]
    AI --> AJ[Initialize letter to 'A']
    AJ --> AK[Loop j from 1 to i]
    AK --> AL[/Print letter/]
    AL --> AM[Increment letter]
    AM --> AN[End loop j]
    AN --> AO[End loop i]
    AO --> AP[/Print newline/]
    AP --> AQ[/Pattern 6: Alphabetical pattern lowercase letters/]
    AQ --> AR[Loop i from 1 to 5]
    AR --> AS[Initialize letter to 'a']
    AS --> AT[Loop j from 1 to 5]
    AT --> AU[/Print letter/]
    AU --> AV[Increment letter]
    AV --> AW[End loop j]
    AW --> AX[End loop i]
    AX --> AY[/Print newline/]
    AY --> AZ[/Pattern 7: Hollow Rectangle with fixed dimension 7x8/]
    AZ --> BA[Loop i from 1 to 7]
    BA --> BB[Loop j from 1 to 8]
    BB --> BC{Is border?}
    BC -- Yes --> BD[/Print */]
    BC -- No --> BE[/Print space/]
    BD --> BF[End loop j]
    BE --> BF[End loop j]
    BF --> BG[End loop i]
    BG --> BH[/Print newline/]
    BH --> BI[/Pattern 8: Inverted Half Pyramid with fixed dimension 6/]
    BI --> BJ[Loop i from 6 to 1]
    BJ --> BK[Loop j from 1 to i]
    BK --> BL[/Print */]
    BL --> BM[End loop j]
    BM --> BN[End loop i]
    BN --> BO[/Print newline/]
    BO --> BP[/Pattern 9: Hollow Inverted Half Pyramid with fixed dimension 6/]
    BP --> BQ[Loop i from 6 to 1]
    BQ --> BR[Loop j from 1 to i]
    BR --> BS{Is border?}
    BS -- Yes --> BT[/Print */]
    BS -- No --> BU[/Print space/]
    BT --> BV[End loop j]
    BU --> BV[End loop j]
    BV --> BW[End loop i]
    BW --> BX[/Print newline/]
    BX --> BY[/Pattern 10: Full Pyramid with fixed dimension 6 /]
    BY --> BZ[Loop i from 1 to 6]
    BZ --> CA[Loop j from 1 to 6-i]
    CA --> CB[/Print spaces/]
    CB --> CC[Loop j from 1 to 2*i-1]
    CC --> CD{Is odd column?}
    CD -- Yes --> CE[/Print */]
    CD -- No --> CF[/Print space/]
    CE --> CG[End loop j]
    CF --> CG[End loop j]
    CG --> CH[End loop i]
    CH --> CI[/Print newline/]
    CI --> CJ[/Pattern 11: Inverted Full Pyramid with fixed dimension 6/]
    CJ --> CK[Loop i from 6 to 1]
    CK --> CL[Loop j from 1 to 6-i]
    CL --> CM[/Print spaces/]
    CM --> CN[Loop j from 1 to 2*i-1]
    CN --> CO{Is odd column?}
    CO -- Yes --> CP[/Print */]
    CO -- No --> CQ[/Print space/]
    CP --> CR[End loop j]
    CQ --> CR[End loop j]
    CR --> CS[End loop i]
    CS --> CT[/Print newline/]
    CT --> CU[/Pattern 12: Hollow Full Pyramid with fixed dimension 6/]
    CU --> CV[Loop i from 1 to 6]
    CV --> CW[Loop j from 1 to 6-i]
    CW --> CX[/Print spaces/]
    CX --> CY[Loop j from 1 to 2*i-1]
    CY --> CZ{Is border or last row?}
    CZ -- Yes --> DA[/Print */]
    CZ -- No --> DB[/Print space/]
    DA --> DC[End loop j]
    DB --> DC[End loop j]
    DC --> DD[End loop i]
    DD --> DE[/Print newline/]
    DE --> DF([End])

