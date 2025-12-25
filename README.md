# Dice Histogram (C Program)

## Name
**Bismah Farooq**

---

## Description
This program simulates rolling **two six-sided dice** a user-specified number of times.  
It calculates how often each possible sum (from **2 to 12**) occurs and displays the results as a **histogram** using asterisks (`*`).

Each asterisk represents approximately **2%** of the total number of rolls, allowing the user to visualize the probability distribution of dice sums.

---

## Features
- User-defined number of dice rolls
- Random dice rolls using `rand()`
- Frequency tracking with arrays
- Histogram visualization using asterisks
- Input validation for number of rolls
- Clear and readable console output

---

## How the Program Works
1. The program prompts the user to enter the number of dice rolls.
2. Two six-sided dice are rolled for each iteration.
3. The sum of the dice (2–12) is recorded.
4. Frequencies are converted into percentages.
5. A histogram is printed where each `*` represents 2% of total rolls.

---

## Sample Output
```text
- Dice Histogram -
Enter # of rolls: 100
 2 **
 3 ****
 4 *****
 5 ********
 6 *********
 7 ************
 8 *********
 9 *******
10 *****
11 ***
12 **
```

## Compilation and Execution 
To compile and run the program using a terminal:
```text
gcc main.c -o dice_histogram
./dice_histogram
```
