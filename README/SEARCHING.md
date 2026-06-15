# Searching Algorithms

This document provides step-by-step solutions and pseudocode for search-related problems.

## 1. binarySearch.cpp

Problem:
- Find a target value in a sorted array.

Steps:
1. Set `start = 0` and `end = size - 1`.
2. Compute `mid = start + (end - start) / 2`.
3. If `arr[mid] == target`, return `mid`.
4. If `arr[mid] < target`, move `start` to `mid + 1`.
5. Otherwise move `end` to `mid - 1`.
6. Repeat until `start > end`.

Pseudocode:
```
function binarySearch(arr, target):
  start = 0
  end = arr.length - 1
  while start <= end:
    mid = start + (end - start) // 2
    if arr[mid] == target:
      return mid
    else if arr[mid] < target:
      start = mid + 1
    else:
      end = mid - 1
  return -1
```

Complexity:
- Time: O(log n)
- Space: O(1)

## 2. linearSearch.cpp

Problem:
- Search for a value in an unsorted array.

Steps:
1. Iterate over each element from index 0 to end.
2. If the current element equals the target, return true.
3. If no element matches, return false.

Pseudocode:
```
function linearSearch(arr, target):
  for i from 0 to arr.length - 1:
    if arr[i] == target:
      return true
  return false
```

Complexity:
- Time: O(n)
- Space: O(1)

## 3. bookAllocation.cpp

Problem:
- Allocate books to `m` students so the maximum pages assigned to any student is minimized.

Steps:
1. Compute the search range from `start = 0` to `end = total pages`.
2. While `start <= end`, choose `mid` as candidate maximum pages.
3. Use a helper function to check if the books can be allocated with this limit.
4. If yes, save `mid` as an answer and try smaller values.
5. If no, increase `start`.

Pseudocode:
```
function isPossible(arr, m, maxPages):
  studentCount = 1
  currentSum = 0
  for each pages in arr:
    if pages > maxPages:
      return false
    if currentSum + pages <= maxPages:
      currentSum += pages
    else:
      studentCount += 1
      currentSum = pages
      if studentCount > m:
        return false
  return true

function bookAllocation(arr, m):
  start = 0
  end = sum(arr)
  answer = -1
  while start <= end:
    mid = start + (end - start) // 2
    if isPossible(arr, m, mid):
      answer = mid
      end = mid - 1
    else:
      start = mid + 1
  return answer
```

Complexity:
- Time: O(n log S), where S is the sum of book pages.
- Space: O(1)

## 4. findFirstAndLastPosition.cpp

Problem:
- Find the first and last occurrence of a target in a sorted array.

Steps:
1. Use binary search to find the first occurrence by moving left after a match.
2. Use binary search to find the last occurrence by moving right after a match.

Pseudocode:
```
function firstOccurrence(arr, target):
  start = 0
  end = arr.length - 1
  answer = -1
  while start <= end:
    mid = start + (end - start) // 2
    if arr[mid] == target:
      answer = mid
      end = mid - 1
    else if arr[mid] > target:
      end = mid - 1
    else:
      start = mid + 1
  return answer

function lastOccurrence(arr, target):
  start = 0
  end = arr.length - 1
  answer = -1
  while start <= end:
    mid = start + (end - start) // 2
    if arr[mid] == target:
      answer = mid
      start = mid + 1
    else if arr[mid] > target:
      end = mid - 1
    else:
      start = mid + 1
  return answer
```

Complexity:
- Time: O(log n)
- Space: O(1)

## 5. peakIndexInAMountainArray.cpp

Problem:
- Find the index of the peak element in a mountain array.

Steps:
1. Use binary search on the indices.
2. If `arr[mid] < arr[mid + 1]`, move `start` to `mid + 1`.
3. Otherwise move `end` to `mid`.
4. Continue until `start == end`.

Pseudocode:
```
function peakIndex(arr):
  start = 0
  end = arr.length - 1
  while start < end:
    mid = start + (end - start) // 2
    if arr[mid] < arr[mid + 1]:
      start = mid + 1
    else:
      end = mid
  return start
```

Complexity:
- Time: O(log n)
- Space: O(1)

## 6. pivotInArray.cpp

Problem:
- Find the pivot index where a sorted array has been rotated.

Steps:
1. Use binary search on the index range.
2. Compare `arr[mid]` with `arr[0]`.
3. If `arr[mid]` is greater than or equal to `arr[0]`, pivot is to the right.
4. Otherwise pivot is to the left.
5. Continue until `start == end`.

Pseudocode:
```
function findPivot(arr):
  start = 0
  end = arr.length - 1
  while start < end:
    mid = start + (end - start) // 2
    if arr[mid] >= arr[0]:
      start = mid + 1
    else:
      end = mid
  return start
```

Complexity:
- Time: O(log n)
- Space: O(1)

## 7. searchInRotatedSortedArray.cpp

Problem:
- Search a target in a rotated sorted array.

Steps:
1. Find the pivot index of the rotation.
2. Determine which sorted segment contains the target.
3. Use binary search in that segment.

Pseudocode:
```
function searchRotated(arr, target):
  pivot = findPivot(arr)
  if target >= arr[pivot] and target <= arr[arr.length - 1]:
    return binarySearch(arr, pivot, arr.length - 1, target)
  else:
    return binarySearch(arr, 0, pivot - 1, target)
```

Complexity:
- Time: O(log n)
- Space: O(1)

## 8. pointerPartitionProblem.cpp

Problem:
- Partition an array into `k` subarrays so that the maximum subarray sum is minimized.

Steps:
1. Compute `start = 0` and `end = sum(arr)`.
2. While `start <= end`, choose `mid` as the candidate maximum subarray sum.
3. Use a helper to check if the array can be split into at most `k` parts with each part sum <= `mid`.
4. If possible, record `mid` and try smaller values to minimize the maximum sum.
5. If not possible, increase `start`.

Pseudocode:
```
function canPartition(arr, k, maxSum):
  count = 1
  currentSum = 0
  for value in arr:
    if currentSum + value <= maxSum:
      currentSum += value
    else:
      count += 1
      if count > k or value > maxSum:
        return false
      currentSum = value
  return true

function partitionArray(arr, k):
  start = 0
  end = sum(arr)
  answer = -1
  while start <= end:
    mid = start + (end - start) // 2
    if canPartition(arr, k, mid):
      answer = mid
      end = mid - 1
    else:
      start = mid + 1
  return answer
```

Complexity:
- Time: O(n log S), where S is the sum of array values.
- Space: O(1)

## 9. aggresiveCows.cpp

Problem:
- Place `k` cows in stalls to maximize the minimum distance between any two cows.

Steps:
1. Sort stall positions.
2. Set `start = 0` and `end = max(stalls)`.
3. While `start <= end`, choose `mid` as the candidate minimum distance.
4. Use a greedy placement helper to place cows with at least `mid` spacing.
5. If placement is possible, move `start` up to try a larger minimum distance.
6. If not, move `end` down.

Pseudocode:
```
function canPlaceCows(stalls, k, minDist):
  count = 1
  lastPos = stalls[0]
  for i from 1 to stalls.length - 1:
    if stalls[i] - lastPos >= minDist:
      count += 1
      lastPos = stalls[i]
      if count == k:
        return true
  return false

function aggressiveCows(stalls, k):
  sort(stalls)
  start = 0
  end = stalls[last index]
  answer = -1
  while start <= end:
    mid = start + (end - start) // 2
    if canPlaceCows(stalls, k, mid):
      answer = mid
      start = mid + 1
    else:
      end = mid - 1
  return answer
```

Complexity:
- Time: O(n log n + n log D), where D is the value range of stall positions.
- Space: O(1)

## 10. squareRootOfNumUsingBinarySearch.cpp

Problem:
- Find the square root of a number using binary search, then improve precision.

Steps:
1. Use binary search to find the greatest integer whose square is <= n.
2. For additional decimal precision, increment the result by small fractions.

Pseudocode:
```
function integerSqrt(n):
  start = 0
  end = n
  answer = -1
  while start <= end:
    mid = start + (end - start) // 2
    square = mid * mid
    if square == n:
      return mid
    else if square < n:
      answer = mid
      start = mid + 1
    else:
      end = mid - 1
  return answer

function morePrecision(n, precision, temp):
  factor = 1.0
  ans = temp
  for i from 1 to precision:
    factor /= 10
    while ans * ans <= n:
      ans += factor
    ans -= factor
  return ans
```

Complexity:
- Time: O(log n + precision * steps)
- Space: O(1)
