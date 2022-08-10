## Knowledge Used
* stl (set,vector and pair)
* sort
* cartesian plane

## Problem
Skier rides on a snowy field. Its movements can be described by a string of characters 'S', 'N', 'W', 'E' (which correspond to 1 meter movement in the south, north, west or east direction respectively).
<br>
It is known that if he moves along a previously unvisited segment of a path (i.e. this segment of the path is visited the first time), then the time of such movement is 5 seconds. If he rolls along previously visited segment of a path (i.e., this segment of the path has been covered by his path before), then it takes 1 second.
<br>
Find the skier's time to roll all the path.

#### Input
The first line contains an integer $t (1≤t≤10^4)$ — the number of test cases in the input. Then t test cases follow.
<br>
Each set is given by one nonempty string of the characters 'S', 'N', 'W', 'E'. The length of the string does not exceed $10^5$ characters.
<br>
The sum of the lengths of t given lines over all test cases in the input does not exceed $10^5$.

#### Output
In the first line print k (0 ≤ k ≤ n) — the number of swaps. Next k lines must contain the descriptions of the k swaps, one per line. Each swap should be printed as a pair of integers i, j (0 ≤ i, j ≤ n - 1), representing the swap of elements ai and aj. You can print indices in the pairs in any order. The swaps are performed in the order they appear in the output, from the first to the last. It is allowed to print i = j and swap the same pair of elements multiple times.
<br>
For each test case, print the desired path time in seconds.