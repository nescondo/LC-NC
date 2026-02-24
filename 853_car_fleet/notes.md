# Car Fleet

## 2/24/26

There are n cars at some miles away starting at mile 0, traveling to reach the mile, target.
We are given 2 integer arrays of position and speed, both of length n, where position[i] corresponds
to the car's speed[i]. Given that these cars are in 1 lane and cannot pass each other, we must
compute the number of distinct fleets (a single car or group of cars) that arrive at the target destination.

First, we must understand that the speed of a car fleet is the minimum speed of any car in the fleet.
This is just a set of linear equations, where we can get the time of a car to reach the target: 
(target - position[i])/speed[i]

The algorithm is as follows:
<ol>
    <li>Create a vector of pairs {position[i], speed[i]}, which represent each car</li>
    <li>Sort them in order (to represent the actual car order)</li>
    <li>Iterate through each car pair</li>
    <li>Compute the time for the car to reach the target: (target - position[i]) / speed[i] and push
    onto the stack (represents entry of type double represents time of each car to reach the target)</li>
    <li>If the stack size >= 2 AND stack.back() <= stack[stk.size() - 2], pop the back of the stack 
    (most recently added time)</li>
    <li>Return the final stack size</li>
</ol>

This is an O(nlogn) time complexity (due to sorting) and O(n) space complexity. Definitely will review.
