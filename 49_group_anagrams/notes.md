# Group Anagrams

## 1/12/25

Completed it on my own (with a hint) in C++ within ~1 hour initially. I remembered the logic around
the first anagram problem, so I went with the technique on that. I just compared the frequency of letters
in each string with their own map and added it to a vector. I did have some issues towards the end
with double counting words, so I added a check to ensure that if the word was already compared,
we would go into the next iteration. This was not the most efficient solution at O(n^2).

I reviewed the O(n * k) solution, which followed the same principle, but instead focused on building
the frequency of letters within its' own map. Essentially, the key was the frequency of characters
as a string, with the value as a vector of the matching strings (in regards to the frequency).
Not too bad, but will probably have to review this harder questions a few more times until it sticks.

1hr 49min
