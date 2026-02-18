# 3Sum

## 2/18/26

2Sum but with 3 elements adding up to 0. We sort the vector first to ensure easy handling of duplicates 
and determining when to break out of our loop. Create our vector of vectors storing the 3 integers
adding up to 0 (if any). From here, follow this algorithm:
 <ol>
    <li>Iterate through the sorted nums using i (our first pointer)</li>
    <li>Check if nums[i] > 0, if it is, break out of the loop. This indicates that any 
        positive number + positive number + positive number will never be 0, so break.</li>
    <li>Check if i > 0 and nums[i] == nums[i - 1], if it is, continue to next iteration</li>
    <li>Initialize our left pointer to be i + 1 and right pointer to nums.size()-1</li>
    <li>Solve like normal 2Sum using 2 pointers</li>
    <li>Remember to initialize the sum of all 3: num[i] + num[l] + num[r]</li>
    <li>If sum > 0, decrement r</li>
    <li>If sum < 0, increment l</li>
    <li>Else push back the 3 elements, increment l, and decrement r</li>
    <li>Before moving onto the next iteration of i, check to see if the left pointer is a duplicate:
        while l < r and nums[l] == nums[l - 1], increment l.</li>
    <li>Return res after outermost while loop terminates</li>
 </ol>

This algorithm has a time complexity of O(n^2) and space complexity of O(1) OR O(n) depending on your
sorting algorithm.
