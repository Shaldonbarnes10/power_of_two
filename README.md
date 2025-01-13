Power of Two

Problem Description

Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two if there exists an integer x such that:



Examples

Example 1:

Input:

n = 1

Output:

true

Explanation:
.

Example 2:

Input:

n = 16

Output:

true

Explanation:
.

Example 3:

Input:

n = 3

Output:

false

Constraints



Approach

Bit Manipulation:

If a number is a power of two, it has exactly one bit set in its binary representation. For example:









Using the property:

Subtracting 1 from  flips the least significant set bit and all bits to the right of it.

Performing a bitwise AND with  results in 0 if  is a power of two.
Time Complexity

O(1): The algorithm runs in constant time since it performs only a few bitwise operations.

Space Complexity

O(1): No additional space is used.

Usage

To test this solution:

Clone this repository.

Compile the provided C++ code using any C++ compiler.

Run the code with different inputs to verify the solution.

License

This project is licensed under the MIT License. Feel free to use and modify the code as needed.

Contribution

Contributions are welcome! If you find a bug or have a suggestion for improvement, please open an issue or submit a pull request.
