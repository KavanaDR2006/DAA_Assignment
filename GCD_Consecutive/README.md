# GCD using Consecutive Integer Checking Algorithm

## Objective

To implement a program that computes the Greatest Common Divisor (GCD) of two numbers using the Consecutive Integer Checking Algorithm and analyze its running time.

## Algorithm Description

1. Read two integers a and b.
2. Set t = min(a,b).
3. Check if t divides both numbers.
4. If yes, t is the GCD.
5. Otherwise decrement t by 1.
6. Repeat until a common divisor is found.

## Formula / Recurrence Relation

The algorithm checks each integer starting from min(a,b) downwards.

Worst case number of checks:

T(n) = n

## Time Complexity

Best Case  
O(1)

Average Case  
O(n)

Worst Case  
O(n)

## Program Output
![GCD](Screenshot(13).png)
