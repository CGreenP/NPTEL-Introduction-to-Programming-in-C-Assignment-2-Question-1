# NPTEL-Introduction-to-Programming-in-C-Assignment-2-Question-1
NPTEL Introduction to Programming in C Assignment 2 Question 1

# Question 1
In this assignment, you will be given an NxN matrix. You have to determine whether the matrix is a triangular matrix. 

The diagonal of the matrix M of size NxN is the set of entries M(0,0), M(1,1), M(2,2), ..., M(N,N). 

A matrix is upper triangular if every entry below the diagonal is 0. For example,  
```
1 1 1
0 0 1
0 0 2
```
is an upper triangular matrix. (The diagonal itself, and the entries above and below the diagonals can be zeroes or non-zero integers.) 

A matrix is lower triangular if every entry above the diagonal is 0. For example, 
```
2 0 0
3 1 0
4 2 2
```
is a lower triangular matrix. 

A matrix is triangular if it is either upper triangular or lower triangular or both.  

You may not use arrays for this program.

# Input
First, you will be given N, which is the size of the matrix.

Then you will be given N rows of integers, where each row consists of N integers separated by spaces. 

# Output
If the input matrix is triangular, then print yes. Otherwise, print no.

# Sample input 1
```sh
3
1 0 0
0 1 0
1 1 2
```

# Sample output 1
```sh
yes
```

# Sample input 2
```sh
7
1 0 0 0 0 0 0
0 1 0 0 0 0 0
0 0 1 0 0 0 0
0 0 0 1 0 0 0
0 0 0 0 1 0 0
0 0 0 0 0 1 0
0 0 0 0 0 0 1
```

# Sample output 2
```sh
yes
```

# Sample input 3
```sh
7
1 0 0 0 0 0 0
0 1 0 0 0 0 0
0 0 1 0 0 0 0
0 0 0 1 0 0 0
0 0 0 0 1 0 0
0 0 0 0 0 1 1
0 0 0 0 0 1 1
```

# Sample output 3
```sh
no
```
