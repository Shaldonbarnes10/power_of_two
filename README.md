
# Power of Two

This repository contains a solution to the **Power of Two** problem, where the goal is to determine if a given integer is a power of two. The problem is solved using efficient bitwise operations in C++.

## Problem Description

Given an integer `n`, return `true` if it is a power of two. Otherwise, return `false`.

An integer `n` is a power of two if there exists an integer `x` such that:

\[
n = 2^x
\]

### Example Input and Output

| Input  | Output | Explanation            |
|--------|--------|------------------------|
| `n = 1`  | `true`  | \( 2^0 = 1 \)           |
| `n = 16` | `true`  | \( 2^4 = 16 \)          |
| `n = 3`  | `false` | 3 is not a power of two |

---

## Constraints

- \( -2^{31} \leq n \leq 2^{31} - 1 \)

---

## Solution

### Approach

The solution leverages the following properties of numbers that are powers of two:
1. A power of two has exactly one bit set in its binary representation.
2. The bitwise operation \( n \& (n - 1) = 0 \) holds true only for powers of two.

### Algorithm

1. If `n <= 0`, return `false` (negative numbers and zero are not powers of two).
2. Use the condition \( n \& (n - 1) == 0 \) to determine if `n` is a power of two.

---

## Implementation

### C++ Solution

```cpp
class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n > 0 && (n & (n - 1)) == 0;
    }
};
```

---

## Usage

### Input

Provide an integer \( n \) as input.

### Output

The function returns `true` if the input is a power of two; otherwise, it returns `false`.

---

## Test Cases

| Test Case | Expected Output |
|-----------|-----------------|
| `1`       | `true`          |
| `16`      | `true`          |
| `3`       | `false`         |
| `0`       | `false`         |
| `-2`      | `false`         |

---

## Complexity

### Time Complexity

- \( O(1) \): The bitwise operation is performed in constant time.

### Space Complexity

- \( O(1) \): No extra space is used.

---

## License

This repository is available under the MIT License.
