# Problem Algorithms

This document explains the step-by-step solutions and pseudocode for numeric and bitwise problems.

## 1. binarytodecimal.cpp

Problem:
- Convert a binary number represented as decimal digits (for example, 1001) into its decimal value.

Steps:
1. Start with `ans = 0` and `power = 0`.
2. While the binary number is not zero:
   - Extract the last digit with `digit = n % 10`.
   - Add `digit * (2^power)` to `ans`.
   - Divide `n` by 10 to move to the next binary digit.
   - Increment `power`.
3. Output `ans`.

Pseudocode:
```
function binaryToDecimal(n):
  ans = 0
  power = 0
  while n != 0:
    digit = n % 10
    ans = ans + digit * (2 ^ power)
    n = n // 10
    power = power + 1
  return ans
```

Complexity:
- Time: O(d) where d is number of binary digits.
- Space: O(1)

## 2. decimaltobinary.cpp

Problem:
- Convert a decimal number to binary representation.

Steps:
1. If the number is zero, output 0.
2. Repeatedly divide the number by 2.
3. Collect the remainder of each division.
4. Reverse the collected bits to get the binary representation.

Pseudocode:
```
function decimalToBinary(n):
  if n == 0:
    return "0"
  bits = []
  while n > 0:
    bits.append(n % 2)
    n = n // 2
  reverse(bits)
  return join(bits)
```

Complexity:
- Time: O(log n)
- Space: O(log n)

## 3. complementOfBase10Element.cpp

Problem:
- Compute the bitwise complement of a decimal number within its own binary length.

Steps:
1. Build a mask of the same bit width as the number.
2. Use bitwise `~` to flip the bits of the original number.
3. Apply the mask with `&` to keep only the original bit length.

Pseudocode:
```
function bitwiseComplement(n):
  if n == 0:
    return 1
  mask = 0
  temp = n
  while temp != 0:
    mask = (mask << 1) | 1
    temp = temp >> 1
  return (~n) & mask
```

Complexity:
- Time: O(log n)
- Space: O(1)

## 4. powerOfTwo.cpp

Problem:
- Check if a number is a power of two.

Steps:
1. Start with `value = 1`.
2. Repeatedly multiply `value` by 2 until it is greater than or equal to `n`.
3. If `value == n`, return true; otherwise return false.

Pseudocode:
```
function isPowerOfTwo(n):
  if n <= 0:
    return false
  value = 1
  while value < n:
    value = value * 2
  return value == n
```

Complexity:
- Time: O(log n)
- Space: O(1)

## 5. powerOfThree.cpp

Problem:
- Check if a number is a power of three.

Steps:
1. Start with `value = 1`.
2. Multiply by 3 repeatedly until `value` is greater than or equal to `n`.
3. Return true if `value == n`.

Pseudocode:
```
function isPowerOfThree(n):
  if n <= 0:
    return false
  value = 1
  while value < n:
    value = value * 3
  return value == n
```

Complexity:
- Time: O(log_3 n)
- Space: O(1)

## 6. powerOfFour.cpp

Problem:
- Check if a number is a power of four.

Steps:
1. Start with `value = 1`.
2. Multiply `value` by 4 until it is greater than or equal to `n`.
3. If `value == n`, return true.

Pseudocode:
```
function isPowerOfFour(n):
  if n <= 0:
    return false
  value = 1
  while value < n:
    value = value * 4
  return value == n
```

Complexity:
- Time: O(log_4 n)
- Space: O(1)

## 7. reverseInteger.cpp

Problem:
- Reverse the digits of an integer.

Steps:
1. Initialize `reversed = 0`.
2. While the number is not zero:
   - Extract the last digit with `digit = n % 10`.
   - Update `reversed = reversed * 10 + digit`.
   - Remove the last digit from `n` with integer division by 10.
3. Return `reversed`.

Pseudocode:
```
function reverseInteger(n):
  reversed = 0
  while n != 0:
    digit = n % 10
    reversed = reversed * 10 + digit
    n = n // 10
  return reversed
```

Complexity:
- Time: O(d), where d is number of digits
- Space: O(1)
