# Group Anagrams

## 1/12/26

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

## 1/20/26

Been about a week since I last completed this problem. I pretty much got the algorithm down on whiteboard
in about ~10min. However, I didn't know the syntax and some 'tricks' to convert it into C++. Upon reviewing
the solution, I had forgotten that I need to actually default initialize a vector of 26 0's BEFORE
converting it into a string. Then from there, convert to string and just concatenate the rest of the frequencies.
Starting to remember a few tricks to these types of problems. This is an O(n * k) time/space complexity solution.

43min.

## 1/23/26

Third time completing this problem. I remember the algorithm quite well, just had a few syntax errors
to debug through. Didn't take me much time and the frequency-type questions have stuck with me. This was
the medium problem for the 3 easy + 1 medium in the NC 150 roadmap for today.

~20min.

## 1/25/26

Was able to complete it on my own rather quickly. Using the algorithm where we just take the frequency array
of each character, convert it into a string (to use it as a key to our map), then just push back each
string that matches that string sits well with me now.

10min.

## 1/27/26

I remember the algorithm quite well as this point. Create a frequency array of each character as a
key to the map, then have a vector that holds the matching strings as a value corresponding to the
frequency array.

~5min.

## 1/28/26

I can consistently and accurately recreate/explain the algorithm and reasoning on why I use this
particular solution.

~5min.
