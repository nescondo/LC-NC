# Trapping Rain Water

## 2/21/26

Compute how much water can be trapped total given a height (representing vertical lines/walls) of integers.
This is my first 'hard' LC question and is pretty intricate. We can use 2 pointers for this algorithm.

The algorithm is as follows:
    <ol>
        <li>Check if the height is empty and return 0 if it is</li>
        <li>Set your left and right pointers, leftMax and rightMax (height[l], height[r], and res</li>
        <li>while l < r, check if leftMax < rightMax. If it is, increment l, assign leftMax to be
        the max between leftMax and height[l], and add leftMax - height[l] to the res</li>
        <li>If not, decrement r, assign rightMax to be the max between rightMax and height[r], and
        add rightMax - height[r] to the res</li>
        <li>Return res</li>
    </ol>

This is an O(n) time complexity and O(1) space complexity solution. Definitely need to review again.
