# Two Sum

## 1/18/25

Second time completing Two Sum in C++. Did the brute force solution at ~3min. Since the brute force solution
is O(n^2), I wanted to review the most efficient solution (as I forgot how to implement it). The algorithm
basically just derives the complement/difference between the target value and the current value you iterate
over and stores it in a map. From there, every iteration you check if that complement exists and if it does,
you return both the indices (the complement is mapped to its index).

19min.
