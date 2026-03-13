# Unique Elements Checking Algorithm

## Objective

To write a program that checks whether all elements in a given list are unique and analyze the running time for different input sizes.

## Algorithm Description

1. Read the number of elements n.
2. Store the elements in an array.
3. Compare each element with every other element.
4. If any two elements are equal, duplicates exist.
5. If no duplicates are found, all elements are unique.

## Formula / Recurrence Relation

The algorithm compares every pair of elements.

T(n) = n(n-1)/2

## Time Complexity

Best Case  
O(n²)

Average Case  
O(n²)

Worst Case  
O(n²)

## Program Output
![Graph](/Unique/Screenhot.png)
