# Container with Most Water

## 2/20/26

Find the maximum amount of area that a container can hold. This is given by 2 vertical lines represented
as integers in the height array. We can do this by selecting 2 arbitrary lines, determining the width between
the two and find the area (length * width).

This is the following algorithm to solve w/ two pointers:
<ol>
    <li>Initialize left and right poitners, and result (max area)</li>
    <li>Iterate while l < r</li>
    <li>Compute the area - std::min(height[l], height[r]) * (r - l). Height is always limited by
    the shorter height because we cannot have a container where the taller line is our length (as
    if we imagine, the water would spill on the shorter side).</li>
    <li>Check if the current area is greater than the res</li>
    <li>Check if the height[l] < height[r], if so, increment l. If not, decrement r</li>
    <li>Return res once the two pointers meet.</li>
</ol>

This is an O(n) time complexity and O(1) space complexity solution.
