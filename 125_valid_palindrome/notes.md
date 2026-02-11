# Valid Palindrome

## 2/11/26

Given a string, return true if it is the same forwards and backwards. An easy problem but probably
a bit more difficult to write in C++. Ensure that you take into account alphanumeric characters only
(create your own function for this) then convert each character to lowercase (std::tolower()).

From there, the algorithm is as follows:
<ol>
    <li>Create a left (index 0 of string) and right (last index of string) and iterate through string</li>
    <li>Check if either the character in the left or right pointer is not an alphanumeric character,
        increment/decrement left/right pointers respectively</li>
    <li>Check if the lowercase versions of the character in the left/right pointer are equal,
        return false if not.</li>
    <li>Return true when loop exits</li>
</ol>

This solution has an O(n) time complexity and O(1) space complexity.

Not bad - just need to be aware of the C++ standard library and use it when/where needed.
