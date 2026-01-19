# LRU Cache

## 1/19/26

Second time doing this problem. Much longer problem that uses a map and linked list. Wasn't exactly feeling it
today and I also have to do some other things, so I reviewed the solution after around ~15min. Initially,
I thought of using a map and a stack. Instead, I should be using a map with a doubly linked list. Think about
inserting and removing being O(1).

The algorithm was as follows: create a doubly linked list and a map. The map will keep track of the actual
integer we want to use (our key) then the corresponding node (our value). From there, we can keep track of
the LRU through taking the the leftmost node (our least used/first node). Inserting a new element will allow
us to keep track of what was just used by adding it to the end of the LL (our most recently 'used' node).
Using a dummy node for both left and right nodes make this logic a bit easier. This is an O(1) and O(n)
time complexity and space complexity, respectively.

45min.
