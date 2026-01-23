# Two Sum

## 1/18/26

Second time completing Two Sum in C++. Did the brute force solution at ~3min. Since the brute force solution
is O(n^2), I wanted to review the most efficient solution (as I forgot how to implement it). The algorithm
basically just derives the complement/difference between the target value and the current value you iterate
over and stores it in a map. From there, every iteration you check if that complement exists and if it does,
you return both the indices (the complement is mapped to its index).

19min.

## 1/23/26
Third time completing this problem. I had slight trouble trying to figure out doing it in O(n) time, so I
decided to complete it in O(n^2) time brute-force w/ double for loop to jog my memory. This ended up helping
as I quickly figured out to use a map to store the differences as keys for each number, then store the 
index as a value. Had some trouble with syntax (especially with inserting a pair into the map), so I reviewed
that part of the solution.

~10min.
