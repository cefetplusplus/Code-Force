## Knowledge Used
* bfs

## Problem
Anjali and Nakul are good friends. They both had a quarrel recently while playing chess. Nakul wants to know the minimum number of moves a knight takes to reach from one square to another square of a chess board (8X8). Nakul is brilliant and he had already written a program to solve the problem. Nakul wants to know whether Anjali can do it. Anjali is very weak in programming. Help her to solve the problem.
<br>
A knight can move in the shape of an "L" in a chessboard - two squares either forward, backward, left, or right and then one square to its left or right. A knight move is valid if it moves as mentioned above and it is within the boundary of the chessboard (8 X 8).

#### Input
There are T test cases in total. The next T lines contain two strings (start and destination) separated by a space.
<br>
The strings start and destination will only contain two characters - First character is an alphabet between 'a' and 'h' (inclusive), Second character is a digit between '1' and '8' (inclusive) - (Quotes just for clarity).
<br>
To know the knight moves more clearly refer to the above figure.

#### Output
Print the minimum number of moves a knight takes to reach from start to destination in a separate line.