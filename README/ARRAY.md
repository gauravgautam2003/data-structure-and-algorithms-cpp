# Array Algorithms

This document explains the algorithms used in each array problem file. The goal is to write clear English descriptions, highlight the approach, and show the expected complexity.

## 1. findAllDuplicate.cpp

Problem:
- Find all duplicate numbers in an array.

Algorithm:
- Brute force: compare every pair of elements with nested loops and collect duplicates.
- Optimized sorting-based method: if the array is sorted, duplicates appear as adjacent equal values.
- Best optimized method: use array index marking by negating the value at the index corresponding to each number. When a value is already negative, that number is a duplicate.

Complexity:
- Time: O(n^2) for brute force, O(n log n) for sorted adjacent comparison, O(n) for index marking.
- Space: O(1) extra space (excluding output list).

## 2. findDuplicate.cpp

Problem:
- Find the one duplicate number in an array that contains numbers from 1 to n with exactly one duplicate.

Algorithm:
- Use XOR to cancel pairs of values.
- XOR all numbers in the array first, then XOR with all values from 1 to n-1.
- All values that appear once cancel out, leaving the duplicate.

Complexity:
- Time: O(n)
- Space: O(1)

## 3. findUnique.cpp

Problem:
- Find the unique element in an array where every other element appears exactly twice.

Algorithm:
- Initialize a result variable to 0.
- XOR every element with the result.
- Since x ^ x = 0 and x ^ 0 = x, the duplicates cancel and only the unique element remains.

Complexity:
- Time: O(n)
- Space: O(1)

## 4. intersectionOfTwo.cpp

Problem:
- Compute the intersection of two arrays.

Algorithm:
- Brute force: compare each element of the first array with every element of the second array.
- Optimized two-pointer approach: when the arrays are sorted, move two pointers in parallel and add common elements when they match.

Complexity:
- Time: O(n^2) for brute force, O(n + m) for the two-pointer method when arrays are sorted.
- Space: O(k) for the intersection result.

## 5. min_max.cpp

Problem:
- Find the minimum and maximum values in an array.

Algorithm:
- Scan the array once.
- Track the current minimum and current maximum with two variables.
- Update the values while iterating each element.

Complexity:
- Time: O(n)
- Space: O(1)

## 6. reverseArray.cpp

Problem:
- Reverse the order of elements in an array.

Algorithm:
- Use two pointers: one at the beginning and one at the end.
- Swap the values and move the pointers toward the center until they meet.
- This reverses the array in place without extra storage.

Complexity:
- Time: O(n)
- Space: O(1)

## 7. swapAlternate.cpp

Problem:
- Swap adjacent elements in an array in pairs.

Algorithm:
- Iterate with a step of two.
- For each pair of indices i and i+1, swap the two elements if the second exists.
- This changes [a, b, c, d] into [b, a, d, c].

Complexity:
- Time: O(n)
- Space: O(1)

## 8. uniqueNumber.cpp

Problem:
- Find a number that occurs only once when other numbers appear multiple times.

Algorithm:
- Typically, use XOR for the case when every other number appears exactly twice.
- XOR all numbers and the final result is the value that appears only once.
- This is a constant-space linear-time method.

Complexity:
- Time: O(n)
- Space: O(1)
