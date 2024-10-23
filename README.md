# Sorting in C++
## Aim
To learn about different types of sorting in C++.

## 1. **SELECTION SORT**
## Theory
Selection Sort is a simple comparison-based sorting algorithm. It divides the list into two parts: a sorted part and an unsorted part. Initially, the sorted part is empty, and the unsorted part contains the entire list. The algorithm repeatedly selects the smallest (or largest) element from the unsorted part and swaps it with the first unsorted element, expanding the sorted part by one. This process continues until the entire list is sorted. The time complexity is O(n²), making it inefficient for large datasets, but it works well for small arrays.

## Algorithm
1. Start with the first element as the minimum.
2. Compare the current minimum with the rest of the elements.
3. Swap the minimum with the first unsorted element.
4. Repeat the process for the remaining unsorted part of the array.

## Output

![image](https://github.com/user-attachments/assets/bf9958cf-4150-454a-8700-9a7955e30734)

## 2. **INSERTION SORT**
## Theory
Insertion Sort is a simple sorting algorithm that builds the final sorted array one element at a time. It iterates over the array, and for each element, it compares it with the elements in the sorted portion of the array and inserts it in the correct position. This continues until the entire array is sorted. The algorithm works well with small data sets and is efficient for partially sorted arrays. The time complexity is O(n²) in the worst case and O(n) in the best case when the array is nearly sorted.

## Algorithm
1. Start from the second element (key) and compare it with the elements before it.
2. Shift all larger elements one position to the right.
3. Insert the key in the correct position.
4. Repeat the process for all elements.

## Output

![image](https://github.com/user-attachments/assets/13f1aa1d-866e-4bd3-8b32-005c29921265)

## 3. **BUBBLE SORT**
## Theory
Bubble Sort is a basic comparison-based sorting algorithm. It repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. This process is repeated for all elements until the list is sorted. Each pass through the array "bubbles" the largest unsorted element to its correct position. While simple, Bubble Sort is inefficient for large datasets with a time complexity of O(n²), but it is easy to implement and understand.

## Algorithm
1. Traverse the array and compare adjacent elements.
2. Swap them if they are in the wrong order.
3. Repeat the process until no swaps are needed.
## Output

![image](https://github.com/user-attachments/assets/462476d4-84c0-4ff4-b9ff-b34c2752a16f)

## Conclusion
We learnt about selection, insertion and bubble sort in C++. 
