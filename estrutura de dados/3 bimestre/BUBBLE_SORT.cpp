BUBBLE_SORT ( )
1. pass <- 1
2. sorted <- false
3. while (not sorted) and (pass < n)
4.       sorted <- true
5.       for i <- 0 to n-pass-1
6.             if A[i] > A[i+1]
7.                   troque A[i] <-> A[i+1]
8.                   sorted <- false
9.       pass <- pass + 1
