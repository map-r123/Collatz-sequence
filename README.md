# Collatz Sequence Program (C++)

## Description

This program generates the Collatz sequence for a user-provided integer greater than 1.

The Collatz sequence follows these rules:
- If the number is even, divide it by 2
- If the number is odd, multiply it by 3 and add 1
- Repeat until the number reaches 1

The program prints each step of the sequence, counts how many steps were required, and allows the user to run the program multiple times.

## How It Works

1. User enters a number greater than 1
2. The program applies the Collatz rules repeatedly
3. Each resulting number is printed
4. The program counts how many iterations were required to reach 1
5. The user is asked if they want to run the program again

## Concepts Used

- Loops (`while`, `do-while`)
- Conditional statements (`if`/`else`)
- User input/output
- Basic arithmetic
- Counters

## Future Improvements

- Input validation for numbers ≤ 1
- Track the largest value reached during the sequence
- Refactor logic into reusable functions
- Save results to a file
