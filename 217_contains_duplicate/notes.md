# Contains Duplicate

## 1/16/25

Second time doing this problem. I think I'm getting the hang of deducing problems that require either a map
or vector/array to solve. I completed it in about ~4min. with the efficient O(n) solution.

Upon reviewing my other submission, I see that I used a set to keep track. This makes sense, as every
iteration we make through nums, if the num is already in the set, we know that we came across a duplicate.
If not, we just insert it into our set. My solution today was slightly different as I used a map instead
and checked to see if the count (value) of a given number (key) was over 1 AFTER incrementing it if the
number was found. If so, we have found a duplicate.

7min. 30sec.
