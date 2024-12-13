### Algorithm(pseudocode)
### start
### 1.Initialize Variables:

Declare n1, n2, m2, n3

### 2.Pattern 1: Grid of Numbers from 1 to n1

Prompt user for n1

Loop i from 1 to n1

Loop j from 1 to n1

Print j

New line

### 3.Pattern 2: Grid of Letters from 'A'

Prompt user for n1 and m2

Initialize letter1 to 'A'

Loop i from 0 to n1 - 1

Loop j from 0 to m2 - 1

Print letter1

Increment letter1

New line

### 4.Pattern 3: Right-Angled Triangle of Numbers

Prompt user for n1

Loop i from 1 to n1

Loop j from 1 to i

Print j

New line

### 5.Pattern 4: Right-Angled Number Pattern

Prompt user for n1

Loop i from 1 to n1

Loop j from n1 to i (decrement)

Print spaces

Loop j from i to 1 (decrement)

Print j

New line

### 6.Pattern 5: Capital Letters Pattern

Prompt user for n1

Loop i from 1 to n1

Initialize letter2 to 'A'

Loop j from 1 to i

Print letter2

Increment letter2

New line

### 7.Pattern 6: Lowercase Letters Pattern

Prompt user for n1

Loop i from 1 to n1

Initialize letter3 to 'a'

Loop j from 1 to n1

Print letter3

Increment letter3

New line

### 8.Pattern 7: Hollow Rectangle

Prompt user for n2 and m2

Loop i from 1 to n2

Loop j from 1 to m2

Print "*" at borders

New line

### 9.Pattern 8: Inverted Half Pyramid

Prompt user for n3

Loop i from n3 to 1 (decrement)

Loop j from 1 to i

Print "*"

New line

### 10.Pattern 9: Hollow Inverted Half Pyramid

Prompt user for n3

Loop i from n3 to 1 (decrement)

Loop j from 1 to i

Print "*" at borders

New line

### 11.Pattern 10: Full Pyramid (Odd Stars)

Prompt user for n3

Loop i from 1 to n3

Loop j for leading spaces

Loop j for pyramid width

Print "*" in odd columns

New line

### 12.Pattern 11: Inverted Full Pyramid (Odd Stars)

Prompt user for n3

Loop i from n3 to 1 (decrement)

Loop j for leading spaces

Loop j for pyramid width

Print "*" in odd columns

New line

### 13.Pattern 12: Hollow Full Pyramid (Correct Last Row)

Prompt user for n3

Loop i from 1 to n3

Loop j for leading spaces

Loop j for pyramid width

Print "*" at borders and odd columns in last row

New line
### end
  ### flowchart
  ```mermaid
graph TD
    A([Start]) --> B[/Enter the dimension for Pattern 1 /]
    B --> C[/Pattern 1: A grid of numbers from 1 to n1/]
    C --> D[Loop i from 1 to n1]
    D --> E[Loop j from 1 to n1]
    E --> F[/Print j/]
    F --> G[End loop j]
    G --> H[End loop i]
    H --> I[/Print newline/]
    I --> J[/Enter the dimensions for Pattern 2 rows & columns/]
    J --> K[/Pattern 2: A grid of letters from A to .../]
    K --> L[Initialize letter1 to 'A']
    L --> M[Loop i from 0 to n1]
    M --> N[Loop j from 0 to m2]
    N --> O[/Print letter1/]
    O --> P[Increment letter1]
    P --> Q[End loop j]
    Q --> R[End loop i]
    R --> S[/Print newline/]
    S --> T[/Enter the dimension for Pattern 3 or triangle height/]
    T --> U[/Pattern 3: A right-angled triangle of numbers/]
    U --> V[Loop i from 1 to n1]
    V --> W[Loop j from 1 to i]
    W --> X[/Print j/]
    X --> Y[End loop j]
    Y --> Z[End loop i]
    Z --> AA[/Print newline/]
    AA --> AB[/Enter the dimension for Pattern 4/]
    AB --> AC[/Pattern 4: Numerical pattern with the right angle to the right/]
    AC --> AD[Loop i from 1 to n1]
    AD --> AE[Loop j from n1 to i]
    AE --> AF[/Print spaces/]
    AF --> AG[Loop j from i to 1]
    AG --> AH[/Print j/]
    AH --> AI[End loop j]
    AI --> AJ[End loop i]
    AJ --> AK[/Print newline/]
    AK --> AL[/Enter the dimension for Pattern 5/]
    AL --> AM[/Pattern 5: Alphabetical pattern in capital letter/]
    AM --> AN[Loop i from 1 to n1]
    AN --> AO[Initialize letter2 to 'A']
    AO --> AP[Loop j from 1 to i]
    AP --> AQ[/Print letter2/]
    AQ --> AR[Increment letter2]
    AR --> AS[End loop j]
    AS --> AT[End loop i]
    AT --> AU[/Print newline/]
    AU --> AV[/Enter the dimension for Pattern 6/]
    AV --> AW[/Pattern 6: Alphabetical pattern in lowercase letter/]
    AW --> AX[Loop i from 1 to n1]
    AX --> AY[Initialize letter3 to 'a']
    AY --> AZ[Loop j from 1 to n1]
    AZ --> BA[/Print letter3/]
    BA --> BB[Increment letter3]
    BB --> BC[End loop j]
    BC --> BD[End loop i]
    BD --> BE[/Print newline/]
    BE --> BF[/Enter the dimensions for Pattern 7 rows & columns/]
    BF --> BG[/Pattern 7: Hollow Rectangle with user-defined dimension/]
    BG --> BH[Loop i from 1 to n2]
    BH --> BI[Loop j from 1 to m2]
    BI --> BJ{Is border?}
    BJ -- Yes --> BK[/Print */]
    BJ -- No --> BL[/Print space/]
    BK --> BM[End loop j]
    BL --> BM[End loop j]
    BM --> BN[End loop i]
    BN --> BO[/Print newline/]
    BO --> BP[/Enter the dimension for Pattern 8/]
    BP --> BQ[/Pattern 8: Inverted Half Pyramid with user-defined dimension/]
    BQ --> BR[Loop i from n3 to 1]
    BR --> BS[Loop j from 1 to i]
    BS --> BT[/Print */]
    BT --> BU[End loop j]
    BU --> BV[End loop i]
    BV --> BW[/Print newline/]
    BW --> BX[/Enter the dimension for Pattern 9/]
    BX --> BY[/Pattern 9: Hollow Inverted Half Pyramid with user-defined dimension/]
    BY --> BZ[Loop i from n3 to 1]
    BZ --> CA[Loop j from 1 to i]
    CA --> CB{Is border?}
    CB -- Yes --> CC[/Print */]
    CB -- No --> CD[/Print space/]
    CC --> CE[End loop j]
    CD --> CE[End loop j]
    CE --> CF[End loop i]
    CF --> CG[/Print newline/]
    CG --> CH[/Enter the dimension for Pattern 10/]
    CH --> CI[/Pattern 10: Full Pyramid with user-defined dimension/]
    CI --> CJ[Loop i from 1 to n3]
    CJ --> CK[Loop j from 1 to n3-i]
    CK --> CL[/Print spaces/]
    CL --> CM[Loop j from 1 to 2*i-1]
    CM --> CN{Is odd column?}
    CN -- Yes --> CO[/Print */]
    CN -- No --> CP[/Print space/]
    CO --> CQ[End loop j]
    CP --> CQ[End loop j]
    CQ --> CR[End loop i]
    CR --> CS[/Print newline/]
    CS --> CT[/Enter the dimension for Pattern 11/]
    CT --> CU[/Pattern 11: Inverted Full Pyramid with user-defined dimension/]
    CU --> CV[Loop i from n3 to 1]
    CV --> CW[Loop j from 1 to n3-i]
    CW --> CX[/Print spaces/]
    CX --> CY[Loop j from 1 to 2*i-1]
    CY --> CZ{Is odd column?}
    CZ -- Yes --> DA[/Print */]
    CZ -- No --> DB[/Print space/]
    DA --> DC[End loop j]
    DB --> DC[End loop j]
    DC --> DD[End loop i]
    DD --> DE[/Print newline/]
    DE --> DF[/Enter the dimension for Pattern 12/]
    DF --> DG[/Pattern 12: Hollow Full Pyramid with user-defined dimension/]
    DG --> DH[Loop i from 1 to n3]
    DH --> DI[Loop j from 1 to n3-i]
    DI --> DJ[/Print spaces/]
    DJ --> DK[Loop j from 1 to 2*i-1]
    DK --> DL{Is border or last row?}
    DL -- Yes --> DM[/Print */]
    DL -- No --> DN[/Print space/]
    DM --> DO[End loop j]
    DN --> DO[End loop j]
    DO --> DP[End loop i]
    DP --> DQ[/Print newline/]
    DQ --> DR([End])
