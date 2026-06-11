# Array Algorithms

This document provides step-by-step solutions and pseudocode for the array problems. Use these notes to understand how the code works and how to implement each approach.

## 1. findAllDuplicate.cpp

Problem:
- Find all duplicate numbers in an array.

Steps:
1. Use a brute force method to compare every pair of elements.
2. If array is sorted, detect duplicates by checking adjacent values.
3. For the best method, use the array values as indices and mark visited elements by negation.

Pseudocode:
```
function findAllDuplicates(arr):
  duplicates = []
  for i from 0 to arr.length - 1:
    index = abs(arr[i]) - 1
    if arr[index] < 0:
      duplicates.append(index + 1)
    else:
      arr[index] = -arr[index]
  return duplicates
```

Explanation:
- `abs(arr[i]) - 1` maps value to an index.
- If the target index is already negative, the value has appeared before.
- This uses the input array itself for marking, so no extra frequency map is needed.

Complexity:
- Time: O(n)
- Space: O(1) additional space (output list excluded)

## 2. findDuplicate.cpp

Problem:
- Find the one duplicate number in an array containing numbers from 1 to n, with exactly one repeated number.

Steps:
1. Initialize `ans = 0`.
2. XOR every element of the array with `ans`.
3. XOR `ans` with every number from 1 to n-1.
4. The result is the duplicate number.

Pseudocode:
```
function findDuplicate(nums):
  ans = 0
  for num in nums:
    ans = ans XOR num
  for i from 1 to nums.length - 1:
    ans = ans XOR i
  return ans
```

Explanation:
- XOR of a number with itself is 0.
- XOR of any number with 0 is the number.
- All non-duplicate numbers cancel, leaving the duplicate.

Complexity:
- Time: O(n)
- Space: O(1)

## 3. findUnique.cpp

Problem:
- Find the unique element in an array where every other element appears exactly twice.

Steps:
1. Set `ans = 0`.
2. XOR every array element with `ans`.
3. Return `ans` after the loop.

Pseudocode:
```
function findUnique(nums):
  ans = 0
  for num in nums:
    ans = ans XOR num
  return ans
```

Explanation:
- Duplicate values cancel each other out by XOR.
- Only the unique element remains in `ans`.

Complexity:
- Time: O(n)
- Space: O(1)

## 4. intersectionOfTwo.cpp

Problem:
- Find common elements present in both arrays.

Steps (brute force):
1. For each element in the first array, compare it with every element in the second array.
2. If a match is found, add it to the result and move to the next first-array element.

Steps (optimized sorted arrays):
1. Sort both arrays if not already sorted.
2. Use two pointers `i` and `j`.
3. If `nums1[i] == nums2[j]`, add value to result and increment both pointers.
4. If `nums1[i] < nums2[j]`, increment `i`.
5. Otherwise increment `j`.

Pseudocode:
```
function intersection(nums1, nums2):
  i = 0
  j = 0
  result = []
  while i < nums1.length and j < nums2.length:
    if nums1[i] == nums2[j]:
      result.append(nums1[i])
      i += 1
      j += 1
    else if nums1[i] < nums2[j]:
      i += 1
    else:
      j += 1
  return result
```

Complexity:
- Brute force: O(n * m)
- Two-pointer optimized: O(n + m)
- Space: O(k), where k is the size of the intersection result

## 5. min_max.cpp

Problem:
- Find the minimum and maximum values in an array.

Steps:
1. Initialize `min` to a very large value and `max` to a very small value.
2. Iterate through the array once.
3. Update `min` when a smaller number is found.
4. Update `max` when a larger number is found.

Pseudocode:
```
function findMinMax(arr):
  minVal = +infinity
  maxVal = -infinity
  for value in arr:
    if value < minVal:
      minVal = value
    if value > maxVal:
      maxVal = value
  return (minVal, maxVal)
```

Complexity:
- Time: O(n)
- Space: O(1)

## 6. reverseArray.cpp

Problem:
- Reverse an array in place.

Steps:
1. Set `start = 0` and `end = size - 1`.
2. While `start < end`, swap `arr[start]` and `arr[end]`.
3. Increment `start` and decrement `end`.
4. Continue until the pointers cross.

Pseudocode:
```
function reverseArray(arr):
  start = 0
  end = arr.length - 1
  while start < end:
    swap(arr[start], arr[end])
    start += 1
    end -= 1
```

Complexity:
- Time: O(n)
- Space: O(1)

## 7. swapAlternate.cpp

Problem:
- Swap adjacent pairs of elements in an array.

Steps:
1. Iterate over the array with a step of 2.
2. For each `i`, if `i + 1` is inside the array, swap `arr[i]` and `arr[i+1]`.
3. Continue until the end of the array.

Pseudocode:
```
function swapAlternate(arr):
  for i from 0 to arr.length - 1 step 2:
    if i + 1 < arr.length:
      swap(arr[i], arr[i+1])
```

Complexity:
- Time: O(n)
- Space: O(1)

## 8. uniqueNumber.cpp

Problem:
- Find a number that occurs once while all other numbers appear twice.

Steps:
1. Initialize `ans` to 0.
2. XOR every number in the array with `ans`.
3. Return `ans`.

Pseudocode:
```
function uniqueNumber(nums):
  ans = 0
  for num in nums:
    ans = ans XOR num
  return ans
```

Complexity:
- Time: O(n)
- Space: O(1)
