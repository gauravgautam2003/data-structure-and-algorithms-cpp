# DSA Course (CPP) — Questions + Step-by-Step Algorithms

This README organizes your practice questions/solutions with **step-by-step algorithms**.

---

## Arrays

### 1) Linear Search (`arrays/linearSearch.cpp`)
**Question:** Given an array `arr` and an element `key`, check whether `key` is present or not.

**Answer (Best Approach):** Linear Search

**Algorithm (Steps):**
1. Set `i = 0` and loop while `i < size`.
2. हर index पर check करो: `arr[i] == key`?
3. अगर match मिलता है तो `true` return करो।
4. अगर loop खत्म हो गया और match नहीं मिला तो `false` return करो।

**Time Complexity:** `O(n)`

**Space Complexity:** `O(1)`

---

### 2) Binary Search (`arrays/binarySearch.cpp`)
**Question:** Given a sorted array `arr` and an element `key`, find the index of `key`. If not found, return `-1`.

**Answer (Best Approach):** Binary Search

**Algorithm (Steps):**
1. `start = 0`, `end = size - 1` set करो।
2. जब तक `start <= end`:
   1. `mid = start + (end-start)/2` निकालो।
   2. अगर `arr[mid] == key` तो `mid` return करो।
   3. अगर `key > arr[mid]` तो `start = mid + 1` (right side) करो।
   4. वरना `end = mid - 1` (left side) करो।
3. Loop खत्म होने पर `-1` return करो।

**Time Complexity:** `O(log n)`

**Space Complexity:** `O(1)`

---

### 3) Find Maximum and Minimum (`arrays/min_max.cpp`)
**Question:** Find the maximum and minimum element in an array.

**Answer (Best Approach):** Single pass (scan the array once).

**Algorithm (Steps):**
1. `max = very small` (INT8_MIN जैसी) और `min = very large` (INT8_MAX जैसी) set करो।
2. array के हर element के लिए:
   - अगर `num[i] > max` तो `max = num[i]`।
   - अगर `num[i] < min` तो `min = num[i]`।
3. अंत में `max` और `min` print/return करो।

**Time Complexity:** `O(n)`

**Space Complexity:** `O(1)`

---

### 4) Reverse Array (`arrays/reverseArray.cpp`)
**Question:** Reverse the given array **in-place** and print it.

**Answer (Best Approach):** Two-pointer swap (start/end).

**Algorithm (Steps):**
1. `start = 0`, `end = size - 1` set करो।
2. जब तक `start <= end`:
   1. `arr[start]` और `arr[end]` swap करो।
   2. `start++` और `end--` करो।
3. Reverse array print करो।

**Time Complexity:** `O(n)`

**Space Complexity:** `O(1)`

---

### 5) Swap Alternate Elements (`arrays/swapAlternate.cpp`)
**Question:** Swap elements in alternate pairs: (0,1), (2,3), (4,5), ...

**Answer (Best Approach):** Step by 2 and swap adjacent pairs where valid.


**Algorithm (Steps):**
1. `i = 0` से `i < size` तक step `+2` के साथ loop चलाओ।
2. check: `i + 1 < size`?
3. अगर हाँ तो `swap(arr[i], arr[i+1])` करो।
4. array print करो।

**Time Complexity:** `O(n)`

**Space Complexity:** `O(1)`

---

### 6) Find Unique Number using XOR (`arrays/findUnique.cpp` / `arrays/uniqueNumber.cpp`)
**Question:** Every number appears exactly twice except one number which appears once. Find the unique number.

**Answer (Best Approach):** XOR property (duplicates cancel out).

**Algorithm (XOR based):**
1. `ans = 0` initialize करो।
2. हर element के लिए `ans = ans XOR arr[i]` करो।
3. जब duplicates दो बार आएंगे, XOR से cancel हो जाते हैं, और single वाला बचता है।
4. `ans` return करो।

**Time Complexity:** `O(n)`

**Space Complexity:** `O(1)`

---

### 7) Find Duplicate Number (`arrays/findDuplicate.cpp`)
**Question:** Given an array where exactly one number is duplicated and others appear once, find the duplicated number.

**Answer (Best Approach):** XOR approach (assuming valid constraints).

**Algorithm (XOR idea):**
1. `ans = 0` set करो।
2. array के हर element के लिए `ans = ans XOR arr[i]`।
3. फिर `1` से `size-1` तक (example logic के अनुसार) `ans = ans XOR i` करो।
4. Result `ans` duplicate की value बन जाता है।

**Time Complexity:** `O(n)`

**Space Complexity:** `O(1)`

> Note: XOR approach के लिए input constraints सही होना चाहिए (example pattern के अनुसार)।

---

### 8) Find All Duplicates (`arrays/findAllDuplicate.cpp`)
**Question:** Find all duplicate elements in the array.

**Answer (Best Approach):** Sign/Index trick (when constraints allow) — otherwise use brute force/simpler approach.

#### Approach A: Brute Force (`O(n^2)`)
**Steps:**
1. `i` loop चलाओ `0..n-1`।
2. `j` loop चलाओ `i+1..n-1`।
3. अगर `arr[i] == arr[j]` तो `arr[i]` को answer में add करो और inner loop break करो।

**Time:** `O(n^2)` | **Space:** `O(k)` (k = duplicates count)

#### Approach B: Sorting-like Adjacent Check (provided as `O(nlogn)` in code)
**Steps (code के हिसाब से):**
1. array को (ideally) sorted होना चाहिए ताकि duplicates adjacent हों।
2. `i` पर check करो अगर `arr[i] == arr[i+1]` तो add करो।

**Time:** (intended) `O(nlogn)` | **Space:** `O(k)`

#### Approach C: Sign/Index Trick (`O(n)`)
**Steps:**
1. `ans` खाली बनाओ।
2. हर element `arr[i]` के लिए:
   - `index = abs(arr[i]) - 1`
   - अगर `arr[index] < 0` तो duplicate है → `ans.push_back(index+1)`
   - वरना `arr[index] = -arr[index]` करके mark करो।
3. `ans` return करो।

**Time:** `O(n)` | **Space:** `O(k)`

---

## Problems

(This section is currently empty. As you add new questions in `problems/*.cpp`, I will also add their step-by-step algorithms here.)

