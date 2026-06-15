# Sorting Algorithms

This document provides step-by-step solutions and pseudocode for the sorting problems in the `sorting` folder.

## 1. bubbleSort.cpp

Problem:
- Sort an array in ascending order using bubble sort.

Steps:
1. Loop from the first element to the second-last element.
2. For each element, compare adjacent pairs and swap them if the left element is greater than the right element.
3. After each pass, the largest unsorted element moves to the end.
4. Repeat until no swaps are needed or all elements are in sorted order.

Pseudocode:
```
function bubbleSort(arr):
  n = arr.length
  for i from 0 to n - 2:
    swapped = false
    for j from 0 to n - i - 2:
      if arr[j] > arr[j + 1]:
        swap(arr[j], arr[j + 1])
        swapped = true
    if swapped == false:
      break
```

Complexity:
- Time: O(n^2) worst-case, O(n) best-case when the array is already sorted.
- Space: O(1)

## 2. insertionSort.cpp

Problem:
- Sort an array in ascending order using insertion sort.

Steps:
1. Start from the second element and treat the left part as a sorted subarray.
2. Save the current element as `temp`.
3. Compare `temp` with elements in the sorted subarray and shift larger elements to the right.
4. Insert `temp` into the correct position.
5. Continue until the entire array is sorted.

Pseudocode:
```
function insertionSort(arr):
  n = arr.length
  for i from 1 to n - 1:
    temp = arr[i]
    j = i - 1
    while j >= 0 and arr[j] > temp:
      arr[j + 1] = arr[j]
      j = j - 1
    arr[j + 1] = temp
```

Complexity:
- Time: O(n^2) worst-case, O(n) best-case when the array is already sorted.
- Space: O(1)

## 3. selectionSort.cpp

Problem:
- Sort an array in ascending order using selection sort.

Steps:
1. For each position in the array, assume the current index is the minimum.
2. Scan the unsorted part of the array to find the true minimum element.
3. Swap the minimum element with the current position.
4. Move the boundary of the sorted subarray one step to the right.
5. Repeat until the whole array is sorted.

Pseudocode:
```
function selectionSort(arr):
  n = arr.length
  for i from 0 to n - 2:
    minIndex = i
    for j from i + 1 to n - 1:
      if arr[j] < arr[minIndex]:
        minIndex = j
    swap(arr[minIndex], arr[i])
```

Complexity:
- Time: O(n^2)
- Space: O(1)
