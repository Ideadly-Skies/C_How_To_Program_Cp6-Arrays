6.1  Done
6.13 Done 
6.17 Done
6.19 Done
6.24 Skipped (Too Lazy to answer this)
6.26 Skipped (Too lazy to answer this)
6.31 Done
6.32 Done
6.35 Done
6.37

# Exercise 6.1 
Answer each of the following:
- List and tables of values are stored in arrays.
- The number used to refer to a particular array element is called its subscript.
- A(n) symbolic constant should be used to specify the size of an array because it makes the program more modifiable.
- placing the elements of an array in order is called sorting the array.
- Determining whether an array contains a key value is called searching the array.
- An array that uses two subscripts is referred to as a(n) multidimensional array.

# Exercise 6.13
Find the error(s) in each of the following statements:
- for (a) there is no space for terminating-null character which would be problematic if the code is ported to C++.
- for (b) indexing starts from 0 - you will be faced with two errors: one is that you will miss the first element of the array, and that you will face an out of bound error when you go one off the subscript for the last element.
- for (c), the array initializer only specifies 3 array elements. There are four in the provided example.
- for (d), this will set the value for the 10th element to be 2.345 which is not the same as d[1][9].

# Exercise 6.17
It's summing all of the array elements starting from the back of the array. The base case is when it reaches the first element of the array.