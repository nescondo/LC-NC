# Top K Frequent Elements

## 1/14/26

At first, I whiteboarded what I thought was going to be a solution for the number of elements occuring
that were greater or equal to K. This ended up being the wrong idea to the problem, as we needed
to find TOP k number of elements occuring - so the number of times an element occurred wasn't fixed.
I had a working solution for the test cases given that took me about ~45min., but again, they were
to the wrong type of problem and ended up failing the rest.

At this point, I was running out of time so I had to review the most efficient solution. This one used bucket
sort essentially and it wasn't too bad. We had to map the number occuring in the array to their frequency.
After that, we created a vector of pairs of the frequency: number. This is important because we then sorted
the pairs by their frequency from the end to the beginning of the vector. Then, we just created a vector
to store the the K number of elements within the vector of pairs. This was all done in a time complexity
and space complexity of O(n).

1hr. 22min.

## 1/24/26

Wasn't exactly feeling it today but needed to review this problem. I went ahead and reviewed my solution, but
quickly realized that it wasn't the O(n) solution as we were using std::sort which is an O(nlogn) algorithm.
I reviewed the O(n) solution that effectively used the 'real' modified bucket sort algorithm which gives us
the O(n) solution.

~30min.
