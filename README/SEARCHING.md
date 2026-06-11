# Searching Algorithms

This document explains the algorithms used in each searching problem file. Each section describes the main technique and complexity.

## 1. binarySearch.cpp

Problem:
- Find a target value in a sorted array.

Algorithm:
- Use binary search with `start`, `end`, and `mid` indices.
- Compare the middle element with the target.
- Move `start` or `end` to narrow the search range until the target is found or the range is empty.

Complexity:
- Time: O(log n)
- Space: O(1)

## 2. linearSearch.cpp

Problem:
- Search for a value in an unsorted array.

Algorithm:
- Scan each element one by one.
- Return true when the target is found; otherwise return false after scanning all elements.

Complexity:
- Time: O(n)
- Space: O(1)

## 3. bookAllocation.cpp

Problem:
- Allocate book pages to students so the maximum pages assigned to any student is minimized.

Algorithm:
- Use binary search on the answer space.
- For each candidate maximum page limit, check if the books can be assigned within that limit using a greedy scan.
- Adjust the search range until the minimum feasible maximum is found.

Complexity:
- Time: O(n log S), where S is the sum of pages.
- Space: O(1)

## 4. findFirstAndLastPosition.cpp

Problem:
- Find the first and last occurrence of a target in a sorted array.

Algorithm:
- Use a modified binary search to find the first occurrence by moving left after a match.
- Use a second modified binary search to find the last occurrence by moving right after a match.

Complexity:
- Time: O(log n)
- Space: O(1)

## 5. peakIndexInAMountainArray.cpp

Problem:
- Find the peak index in a mountain array.

Algorithm:
- Use binary search to compare `arr[mid]` with `arr[mid + 1]`.
- If the sequence is ascending, move right; otherwise move left.
- The final index is the peak of the mountain.

Complexity:
- Time: O(log n)
- Space: O(1)

## 6. pivotInArray.cpp

Problem:
- Find the pivot index of a rotated sorted array.

Algorithm:
- Use binary search to compare `arr[mid]` with `arr[0]`.
- If the mid element is greater than the first element, pivot is on the right; otherwise pivot is on the left.
- Continue until start equals end.

Complexity:
- Time: O(log n)
- Space: O(1)

## 7. searchInRotatedSortedArray.cpp

Problem:
- Search a target in a rotated sorted array.

Algorithm:
- Find the pivot index of the rotation.
- Decide whether the target is in the left or right sorted segment.
- Perform binary search in the appropriate segment.

Complexity:
- Time: O(log n)
- Space: O(1)

## 8. squareRootOfNumUsingBinarySearch.cpp

Problem:
- Find the square root of a number using binary search.

Algorithm:
- Use binary search to find the integer part of the square root.
- Improve precision by adjusting the result with small fractional increments.
- The binary search step finds the largest integer whose square is less than or equal to `n`.

Complexity:
- Time: O(log n + p * d), where p is precision and d is the number of refinements.
- Space: O(1)
