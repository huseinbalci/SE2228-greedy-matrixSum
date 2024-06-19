We define the Matrix Sum of a matrix as the maximum possible sum of matrix elements such that none of the selected
elements share the same row or columnIndex.
For example, the Matrix Sum of the matrix below equals 3315 ( = 863 + 383 + 343 + 959 + 767):

  7  53 183 439 863
497 383 563  79 973
287  63 343 169 583
627 343 773 959 943
767 473 103 699 303

Write a greedy algorithm to calculate the matrix sum for the matrix below.

Note: The greedy approach to the problem may not always yield the maximum possible sum.
For the matrix above, a row-based approach would have found 3145 ( = 863 + 563 + 287 + 959 + 473 )

(Use row-based approach to pass the test)
The numbers in the matrix are greater than 0.
