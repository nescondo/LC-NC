# Longest Consecutive Sequence

## 2/10/26

Given an array of integers - nums, we want to return the length of the longest possible consecutive sequence.
Basically, return the longest length of numbers going in order one after the previous. To do this,
we use a hash set. This orders each number and removes any duplicates.

From there, the algorithm is as follows:
    <ol>
        <li>Iterate through each number in your set</li>
        <li>Check if the number is the beginning of a sequence (think of ordering each sequence,
            any number without a number to the left of it is the beginning of the sequence)
        </li>
        <li>If it is the beginning, keep track of the length and iterate through the set using
            current number + current length
        </li>
        <li>At the end of the inner iteration, set longest to be the max between the current longest
            and current length.
        </li>
        <li>Return longest length</li>
    </ol>
This is an O(n) solution for both time and space complexity. Not bad.
