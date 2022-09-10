## Knowledge Used
* binary search

## Problem
Petya has the word t, he wants to make the word p from it. Petya begins to delete the letters in a certain order, which is described as a permutation of indices of the letters of the word t: a1…a|t|. Note that after deleting a letter, the numbering does not change.
<br>
His brother Vasya is afraid that Petya may delete too many letters, so he will not get the word p in the end. Vasya's task is to stop his brother at some point and finish deleting himself in such a way, that the resulting word will be p. Since Petya likes this activity, Vasya wants to stop him as late as possible. Your task is to tell how many letters Petya can delete out before Vasya stops him.
<br>
It is guaranteed that the word p can be obtained by deleting letters from t.

#### Input
The first and second lines of the input file contain the words t and p, respectively. Words consist of lowercase letters of the Latin alphabet (1≤|p|<|t|≤200000).
<br>
The next line contains the permutation a1…a|t| of letter indices, which specifies the order in which Petya deletes the letters of the word t (1≤ai≤|t|, all ai are different).

#### Output
Print one number, the maximum number of letters that Petya can delete.