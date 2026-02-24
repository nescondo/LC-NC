# Daily Temperatures

## 2/23/26

Given an array of integers, temperatures, each integer represents the daily temperature. Return
an array representing the number of days you need to wait after a given temperature to get to a warmer
temperature.

This can be solved using a stack. The algorithm is as follows:
<ol>
    <li>Create an empty vector the size of temperatures initialized with 0s</li>
    <li>Create a stack containing pairs of {temp, index}</li>
    <li>Iterate through the temperatures array</li>
    <li>While the stack isn't empty and your current temperature is greater than the stack.top().first,
    save the stack.top() element, pop it from the stack, and compute the days and store it into
    res (res[p.second] = i - p.second</li>
    <li>Then, push the the pair {t, i} onto the stack</li>
    <li>Return res</li>
</ol>

This is an O(n) time and space complexity solution. A more efficient solution using DP is out there,
but this is to practice using a stack.
