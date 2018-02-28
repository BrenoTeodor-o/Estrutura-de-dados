QUICKSORT (p, r) //esse é o melhor
1. if p < r
2.    then q <- PARTITION (p, r)
3.         QUICKSORT (p, q)
4.         QUICKSORT (q+1, r)

PARTITION (p, r)
 1. piv <- A[p]
 2. i <- p - 1
 3. j <- r + 1
 4. while (true)
 5.       do j <- j - 1
 6.       while A[j] > piv
 7.       do i <- i + 1
 8.       while A[i] < piv
 9.       if i < j
10.          then troque A[i] <-> A[j]
11.          else return j
