# Prime Number Checking 

## Objective
To implement a program to check whether a number is prime and analyze its running time.

## Algorithm Description

1. Read integer n
2. If n < 2 → not prime
3. For i from 2 to √n
4. If n mod i = 0 → not prime
5. If no divisor found → prime

## Formula / Recurrence Relation

Prime checking uses trial division.

Number of iterations ≈ √n

T(n) = √n

## Time Complexity

Best Case:  
O(1)

Average Case:  
O(√n)

Worst Case:  
O(√n)

## Program Output
![prime numbers](/prime/Screenshot(11).png)
