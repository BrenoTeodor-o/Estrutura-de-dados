MERGESORT (lo, hi) //chega perto do quick
1. if lo < hi then
2.    mid <- (lo + hi) / 2
3.    MERGESORT (lo, mid)
4.    MERGESORT (mid+1, hi)
5.    L <- lo
6.    H <- mid + 1
7.    for k <- lo to hi
8.          if L <= mid and (H > hi or A[L] < A[H])
9.              then scratch[k] <- A[L]
10.                  L <- L + 1
11.             else scratch[k] <- A[H]
12.                  H <- H + 1
13.    for k <- lo to hi
14.          A[k] <- s
