# Problem Algorithms

This document explains the algorithms used in the numeric and bitwise problem files.

## 1. binarytodecimal.cpp

Problem:
- Convert a binary number written as digits into its decimal value.

Algorithm:
- Read the binary digits from the least significant side.
- Multiply each binary digit by `2^position` and add it to the result.
- Use repeated division by 10 to extract each digit.

Complexity:
- Time: O(log n) relative to the number of digits.
- Space: O(1)

## 2. decimaltobinary.cpp

Problem:
- Convert a decimal number to binary representation.

Algorithm:
- Repeatedly divide the decimal number by 2.
- Save the remainder for each division as a binary digit.
- Reverse the collected digits to produce the final binary string.

Complexity:
- Time: O(log n)
- Space: O(log n)

## 3. complementOfBase10Element.cpp

Problem:
- Compute the bitwise complement of an integer within its own binary length.

Algorithm:
- Build a mask of `1` bits matching the number of bits needed to represent the input.
- Use bitwise NOT on the input and then mask the result to preserve only the original bit width.

Complexity:
- Time: O(log n)
- Space: O(1)

## 4. powerOfTwo.cpp

Problem:
- Check if a number is a power of two.

Algorithm:
- Multiply 1 by 2 repeatedly until it equals or exceeds the input.
- If the value equals the input, the input is a power of two.

Complexity:
- Time: O(log n)
- Space: O(1)

## 5. powerOfThree.cpp

Problem:
- Check if a number is a power of three.

Algorithm:
- Multiply 1 by 3 repeatedly until it equals or exceeds the input.
- If the value equals the input, the input is a power of three.

Complexity:
- Time: O(log n)
- Space: O(1)

## 6. powerOfFour.cpp

Problem:
- Check if a number is a power of four.

Algorithm:
- Multiply 1 by 4 repeatedly until it equals or exceeds the input.
- If the intermediate value equals the input, return true.

Complexity:
- Time: O(log n)
- Space: O(1)

## 7. reverseInteger.cpp

Problem:
- Reverse the digits of an integer.

Algorithm:
- Extract digits using modulo 10.
- Multiply the current reversed result by 10 and add the extracted digit.
- Check overflow before each multiplication.

Complexity:
- Time: O(d), where d is number of digits.
- Space: O(1)
