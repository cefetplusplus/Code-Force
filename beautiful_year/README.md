## Code Explanation
The value is received and saved in the variable 'year' (incremented with each execution of the 'while').
A vector is created to store each position of the integer 'year'. The leftmost integer value 'year' is saved in the first position of the vector 'pos[0]' (it is found by dividing the value by 1000). The next value is stored in position 'pos[1]' (it is found from the remainder of the division by 10 of the division of the value 'year' by 100)...

<br>

**Example:** <br>
year = 2010 <br>
pos[0] = year / 1000         === pos[0] = 2   <br>
pos[1] = year / 100 % 10     === pos[1] = 0   <br>
pos[2] = year / 10 % 10      === pos[2] = 1   <br>
pos[3] = year % 10           === pos[3] = 0   <br>

## Knowledge Used
* vector
* remainder of the division 
* loop interations
* conditional (if/else)

## Problem
It seems like the year of 2013 came only yesterday. Do you know a curious fact? The year of 2013 is the first year after the old 1987 with only distinct digits.
<br>
Now you are suggested to solve the following problem: given a year number, find the minimum year number which is strictly larger than the given one and has only distinct digits.

#### Input
The single line contains integer y (1000 ≤ y ≤ 9000) — the year number.

#### Output
Print a single integer — the minimum year number that is strictly larger than y and all it's digits are distinct. It is guaranteed that the answer exists.