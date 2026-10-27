# Daily 10 C++ Drill Sheet: Pattern Printing & Coordinate Logic

**Target System:** `dsa-core-engine/CPP`  
**Prerequisites:** Nested Loops, Iterators, Matrix Coordinate Geometry, Spacing Offsets  
**Rule Compliance:** Anti-Cheat Enforced | Progressive Overload Scale (+1% per drill) | Raw Engineering Specs Only

---

## The Rules of Engagement

1. **Strict Time Limits:** Each drill has an unyielding countdown. Do NOT touch the AI while your timer is running.
2. **Zero Handholding:** You are given the mathematical input/output contract and raw geometric constraints. Figure out the index transformations yourself.
3. **Compilation Standard:** Use modern C++ standards (`g++ -std=c++17 pattern_printing.cpp -o pattern_printing`).
4. **Execution Protocol:** Code your solution inside [`pattern_printing.cpp`](file:///c:/Users/DELL/OneDrive/Desktop/Coding/dsa-core-engine/CPP/pattern_printing.cpp). Test with different values of $N$.

---

## 🟢 PHASE 1: Syntax & Coordinate Warmups (Drills 1–3)

### Drill 1: Solid Square Matrix
* **Time Limit:** 3 Minutes
* **Classification:** Warmup 1
* **Input:** Integer $N$ ($1 \le N \le 50$)
* **Requirement:** Print an $N \times N$ two-dimensional grid composed of asterisks separated by single spaces. Every row must terminate with a newline.
* **Sample Input:** $N = 4$
* **Sample Output:**
  ```text
  * * * *
  * * * *
  * * * *
  * * * *
  ```

---

### Drill 2: Right-Angled Incremental Triangle
* **Time Limit:** 4 Minutes
* **Classification:** Warmup 2
* **Input:** Integer $N$ ($1 \le N \le 50$)
* **Requirement:** Print a right-angled triangle spanning $N$ rows. Row $r$ (1-indexed) must display space-separated integers starting from $1$ up to $r$.
* **Sample Input:** $N = 5$
* **Sample Output:**
  ```text
  1
  1 2
  1 2 3
  1 2 3 4
  1 2 3 4 5
  ```

---

### Drill 3: Inverted Value-Fixed Triangle
* **Time Limit:** 4 Minutes
* **Classification:** Warmup 3
* **Input:** Integer $N$ ($1 \le N \le 50$)
* **Requirement:** Print an inverted right-angled triangle of height $N$. Row $k$ (where the top row corresponds to initial size $N$, decreasing to 1) must print the integer value of its remaining row-index repeated exactly that many times, separated by spaces.
* **Sample Input:** $N = 4$
* **Sample Output:**
  ```text
  4 4 4 4
  3 3 3
  2 2
  1
  ```

---

## 🟡 PHASE 2: Progressive Overload Drills (Drills 4–9)

### Drill 4: Right-Aligned Mirrored Star Triangle (+1%)
* **Time Limit:** 5 Minutes
* **Classification:** Progressive Logic 1
* **Input:** Integer $N$ ($1 \le N \le 50$)
* **Requirement:** Render a right-aligned triangle of height $N$. Column alignment is critical: row $r$ (1 to $N$) must contain precisely $N - r$ double spaces followed by $r$ asterisks separated by single spaces, ensuring the right boundary forms a clean vertical edge.
* **Sample Input:** $N = 4$
* **Sample Output:**
  ```text
        *
      * *
    * * *
  * * * *
  ```

---

### Drill 5: Alternating Binary Parity Triangle (+2%)
* **Time Limit:** 6 Minutes
* **Classification:** Progressive Logic 2
* **Input:** Integer $N$ ($1 \le N \le 50$)
* **Requirement:** Construct a right-angled triangle of height $N$. Output elements alternate between `1` and `0`. The first character of row $r$ is `1` if $r$ is odd, and `0` if $r$ is even. Adjacent values across each row must alternate parity.
* **Sample Input:** $N = 5$
* **Sample Output:**
  ```text
  1
  0 1
  1 0 1
  0 1 0 1
  1 0 1 0 1
  ```

---

### Drill 6: Floyd's Monotonic Stream (+3%)
* **Time Limit:** 7 Minutes
* **Classification:** Progressive Logic 3
* **Input:** Integer $N$ ($1 \le N \le 30$)
* **Requirement:** Output a triangle of height $N$ where a stateful accumulator increments monotonically from $1$ across every cell printed. The counter must never reset between rows.
* **Sample Input:** $N = 4$
* **Sample Output:**
  ```text
  1
  2 3
  4 5 6
  7 8 9 10
  ```

---

### Drill 7: Equilateral Symmetrical Pyramid (+4%)
* **Time Limit:** 8 Minutes
* **Classification:** Progressive Logic 4
* **Input:** Integer $N$ ($1 \le N \le 50$)
* **Requirement:** Construct a centered pyramid of height $N$. Row $r$ (1 to $N$) must have $N - r$ single leading spaces followed by an odd count of asterisks ($2r - 1$). No trailing whitespace after the final star.
* **Sample Input:** $N = 4$
* **Sample Output:**
  ```text
     *
    ***
   *****
  *******
  ```

---

### Drill 8: Centered Palindromic Sequence Pyramid (+5%)
* **Time Limit:** 10 Minutes
* **Classification:** Progressive Logic 5
* **Input:** Integer $N$ ($1 \le N \le 20$)
* **Requirement:** Print an isosceles pyramid of height $N$. Row $r$ (1 to $N$) has $(N - r) \times 2$ leading spaces. The numerical sequence must monotonically ascend from $1$ to $r$, and immediately descend back from $r - 1$ down to $1$. Elements are separated by single spaces.
* **Sample Input:** $N = 4$
* **Sample Output:**
  ```text
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
  ```

---

### Drill 9: Symmetric Butterfly Wing Gateway (+6%)
* **Time Limit:** 12 Minutes
* **Classification:** Progressive Logic 6
* **Input:** Integer $N$ ($1 \le N \le 30$)
* **Requirement:** Print a dual-winged butterfly shape spanning $2N$ total rows and $2N$ character columns (excluding space delimiters). 
  - The upper $N$ rows have widening star clusters on the flanks converging toward the center.
  - The lower $N$ rows symmetrically widen the central gap.
* **Sample Input:** $N = 4$
* **Sample Output:**
  ```text
  *             *
  * *         * *
  * * *     * * *
  * * * * * * * *
  * * * * * * * *
  * * *     * * *
  * *         * *
  *             *
  ```

---

## 🔴 PHASE 3: THE BOSS LEVEL (Drill 10)

### Drill 10: The Concentric Coordinate Compression Spiral
* **Time Limit:** 15 Minutes
* **Classification:** Boss Level (+10% Complexity Surge)
* **Input:** Integer $N$ ($1 \le N \le 25$)
* **Requirement:**
  You must output a square matrix of dimension $(2N - 1) \times (2N - 1)$.
  - The outermost perimeter ring of the matrix must consist entirely of the value $N$.
  - The next inner concentric layer must be filled with $N - 1$.
  - Layers decrease concentrically inward until the exact geographic center point $(N-1, N-1)$ is reached, which evaluates to $1$.
  - Elements in each row must be separated by single spaces.
* **Architectural Constraint:** Brute-force layered array allocations are prohibited. Derive the value directly as a mathematical function of row index $i$ and column index $j$ relative to the boundary distances.
* **Sample Input:** $N = 4$ (Matrix Dimensions: $7 \times 7$)
* **Sample Output:**
  ```text
  4 4 4 4 4 4 4
  4 3 3 3 3 3 4
  4 3 2 2 2 3 4
  4 3 2 1 2 3 4
  4 3 2 2 2 3 4
  4 3 3 3 3 3 4
  4 4 4 4 4 4 4
  ```

---

## Execution Tracker

| Drill # | Pattern Name | Difficulty | Time Limit | Status | Attempts |
| :---: | :--- | :---: | :---: | :---: | :---: |
| 1 | Solid Square Matrix | Warmup | 3 Min | ⏳ PENDING | 0 |
| 2 | Right-Angled Incremental Triangle | Warmup | 4 Min | ⏳ PENDING | 0 |
| 3 | Inverted Value-Fixed Triangle | Warmup | 4 Min | ⏳ PENDING | 0 |
| 4 | Mirrored Star Triangle | +1% | 5 Min | ⏳ PENDING | 0 |
| 5 | Alternating Binary Parity Triangle | +2% | 6 Min | ⏳ PENDING | 0 |
| 6 | Floyd's Monotonic Stream | +3% | 7 Min | ⏳ PENDING | 0 |
| 7 | Equilateral Symmetrical Pyramid | +4% | 8 Min | ⏳ PENDING | 0 |
| 8 | Centered Palindromic Pyramid | +5% | 10 Min | ⏳ PENDING | 0 |
| 9 | Symmetric Butterfly Gateway | +6% | 12 Min | ⏳ PENDING | 0 |
| 10 | Concentric Coordinate Spiral | **BOSS** | 15 Min | ⏳ PENDING | 0 |
