BUBBLE_SORT()
pass <- 1
Sorted <- false
while (not sorted) and (pass < n)
		sorted <- true
		for i <- 0 to n-pass-1
			if A[i] > A[i+1]
				troque A[i] <-> A [i+1]
				sorted <- false
		pass <- pass +1
	
-----------------------quicksort
 QUICKSORT (p, r)
 if p < r
 	then q <- PARTITION (p, r)
 		QUICKSORT (p, q)
 		QUICKSORT (q+1, r)

PARTitiON (p, r)
piv <- A[p]
i <- p - 1
j <- r+1
while (true)
	do j <- j - 1
	while A[j] > piv
	do i <- i + 1
