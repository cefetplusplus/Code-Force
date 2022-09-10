## Knowledge Used
* stl (set,vector and pair)
* sort
* cartesian plane

## Problem
This is the harder version of the problem. In this version, $1≤n,m≤2⋅10^5$. You can hack this problem if you locked it. But you can hack the previous problem only if you locked both problems.
<br>
You are given a sequence of integers a=[a1,a2,…,an] of length n. Its subsequence is obtained by removing zero or more elements from the sequence a (they do not necessarily go consecutively). For example, for the sequence a=[11,20,11,33,11,20,11]:
<br>
[11,20,11,33,11,20,11], [11,20,11,33,11,20], [11,11,11,11], [20], [33,20] are subsequences (these are just some of the long list);
[40], [33,33], [33,20,20], [20,20,11,11] are not subsequences.
Suppose that an additional non-negative integer k (1≤k≤n) is given, then the subsequence is called optimal if:

* it has a length of k and the sum of its elements is the maximum possible among all subsequences of length k;
* and among all subsequences of length k that satisfy the previous item, it is lexicographically minimal.

Recall that the sequence b=[b1,b2,…,bk] is lexicographically smaller than the sequence c=[c1,c2,…,ck] if the first element (from the left) in which they differ less in the sequence b than in c. Formally: there exists t (1≤t≤k) such that b1=c1, b2=c2, ..., bt−1=ct−1 and at the same time bt<ct. For example:
<br>
[10,20,20] lexicographically less than [10,21,1],
[7,99,99] is lexicographically less than [10,21,1],
[10,21,0] is lexicographically less than [10,21,1].
You are given a sequence of a=[a1,a2,…,an] and m requests, each consisting of two numbers kj and posj (1≤k≤n, 1≤posj≤kj). For each query, print the value that is in the index posj of the optimal subsequence of the given sequence a for k=kj.
<br>
For example, if n=4, a=[10,20,30,20], kj=2, then the optimal subsequence is [20,30] — it is the minimum lexicographically among all subsequences of length 2 with the maximum total sum of items. Thus, the answer to the request kj=2, posj=1 is the number 20, and the answer to the request kj=2, posj=2 is the number 30.

#### Input
The first line contains an integer $n(1≤n≤2⋅10^5)$ — the length of the sequence 'a'.
<br>
The second line contains elements of the sequence 'a': integer numbers a1,a2,…,an $(1≤ai≤109)$.

The third line contains 'an' integer 'm' $(1≤m≤2⋅10^5)$ — the number of requests.

The following m lines contain pairs of integers kj and posj (1≤k≤n, 1≤posj≤kj) — the requests.

#### Output
Print m integers r1,r2,…,rm $(1≤rj≤10^9)$ one per line: answers to the requests in the order they appear in the input. The value of rj should be equal to the value contained in the position posj of the optimal subsequence for k=kj.