## Encode and Decode Strings

# 1/25/26

Reviewed the solution pretty quickly. Thinking I'm going to have to take a different approach to learning
these problems and techniques. The harder ones will need to be reviewed first and I'll work on understanding
them. This one wasn't too bad, though the algorithm does take a bit of thought. Essentially, you would need
to have each string and its length included and identified somehow. This is where a separator comes into play.
Each string within the overall string will be denoted as: length#string. From there, you can use pointer
manipulation to determine what the length of a string is, then copy that substring into a vector then 
return when it's done for the entire encoded string. This is done in O(n) time and space complexity.

~35min.
