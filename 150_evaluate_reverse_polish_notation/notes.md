# Evaluate Reverse Polish Notation

## 2/22/26

Given an array of strings that represent an arithmetic expression in Reverse Polish Notation (essentially,
operands go first, operators go last), evaluate the expression.

Not too bad when you use a stack. The algorithm is as follows:
<ol>
    <li>Create your stack of integers and iterate through the strings of tokens</li>
    <li>If the token is an add, subtract, multiplication, or division symbol, create your integers to
    hold the most recent integer from the stack (stk.top()) and pop it. Since we are only doing 2 operands,
    you just need integers a and b.</li>
    <li>From there, push the result onto the stack</li>
    <li>If the token is an integer, push it into the stack (remember, use stoi())</li>
    <li>At the end, you should have just the final resulting number in the stack, so return stk.top()</li>
</ol>

The time complexity is O(n) and space complexity is also O(n).
