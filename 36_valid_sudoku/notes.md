## Valid Sudoku

# 2/9/26

Each row and column must contain numbets 1-9, no duplicates. Additionally, each 3x3 (9 total) subgrid
must contain 1-9, no duplicates. Not terrible, but still reviewed solution to finish it efficiently.
Uses 3 hash sets: 2 implemented via unordered_map and unordered_set (key-val pairs) for rows, cols and
the last implemented via map and unordered_set due to storing a 'pair' data structure as a key for
subgrids.

The algorithm was simple - iterate through each value, check the value (continue if '.', return false
if there's a duplicate), add the value to the row, col, and subgrid, then return true if the entire
board is passed through. This is an O(n^2) time and space complexity - the most efficient it can be.

# 2/14/26

As an update to the implementation of our rows, cols, and subgrids - rows and cols are actually stored
as unordered_map<int, unordered_set<char>>, while the subgrid is stored as 
map<pair<int, int>, unordered_set<char>>. This is because we cannot store some data structure in unordered_map,
so we just use map in this case.
