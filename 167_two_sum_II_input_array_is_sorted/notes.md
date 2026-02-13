# Two Sum II - Input Array is Sorted

## 2/13/26

Modified version of 2 Sum where the input array is sorted. We also are given a 1-indexed array (not 0-indexed).
Solved using two pointer algorithm, where we know that any sum greater than the target, we decrement the
right-most pointer (set to the length of the array). If it is lower than the target, we increment the left-most
pointer (set at index 0/1).

Algorithm is as follows:
<ol>
    <li>Create a left and right pointer</li>
    <li>Loop through each number in the array as long as l < r</li>
    <li>If the current sum of the two indices is greater than the target, decrement r</li>
    <li>If the current sum of the two indices is less than the target, increment l</li>
    <li>Else, return l+1 and r+1</li>
    <li>If the loop finishes, return {}</li>
</ol>

This has an O(n) time complexity and O(1) space complexity.

I had first done it brute-force, but O(n^2) is too slow on LeetCode. Not bad.
