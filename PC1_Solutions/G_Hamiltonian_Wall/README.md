[Hamiltonian Wall](https://codeforces.com/problemset/problem/1766/C)

Why is there a constraint of each column having at least one black cell? Does the problem change a lot if there were white columns? Well, if such a column was inbetween some black cells, then the answer would be "NO". If it was on the side of the grid, you could remove it and proceed to solve without it. So, that doesn't really change the problem other than removing some casework.

Let's try to fix a start. Find a column that has only one black cell in it. If there are no such columns, the answer is immediately "YES". Otherwise, the path will always go through it in known directions: to the left and to the right (if both of them exist). Let's solve the problem separately for the left part of the path and for the right one — find a path that starts to the left of it and covers everything to the left and the same for the right part.

Consider the right part.

If the next column also has one black cell, then we can determine where to go uniquely. If this cell is on the opposite row, then the answer is "NO". Otherwise, go there and proceed further.

Let it have two black cells now. Find the entire two black row rectangle of maximum size that starts there. If there's nothing after it, you can easily traverse it any way you like. Otherwise, you have to traverse it in such a way that you end up in its last column, then go to the right from there. Turns out, there's only one way to achieve that. Go up/down to another row, go right, up/down to another row, right and so on. Now you just have to check if you end up in the correct row.

Thus, you can simulate the path to the left and to the right and check if you never get stuck.

Overall comlexity: O(n)
 per testcase.