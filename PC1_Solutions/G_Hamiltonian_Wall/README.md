[Hamiltonian Wall](https://codeforces.com/problemset/problem/1766/C)

Why is there a constraint of each column having at least one black cell? Does the problem change a lot if there were white columns? Well, if such a column was inbetween some black cells, then the answer would be "NO". If it was on the side of the grid, you could remove it and proceed to solve without it. So, that doesn't really change the problem other than removing some casework.

Now making some observations we can see that whenever there's only one black cell in a column, we have a fixed choice of path to the left and to the right (i.e. the adjacent cells). While if both are black, we will have to switch sides to cover both of them.

We can also observe that a path that begins in the middle can also be covered on starting from a corner, so we need not consider that.

Now, moving along the row, we need to know at which position we were in the previous column to determine if the current point is reachable. This can be stored in a stack as we need a Last-In-First-Out data structure.

Arbitrarily defining the previous states into 3 categories, 1 if only upper cell is black, 2 if only lower cell is black and 3 if both were black and removing the last element from the stack if previous and current states are both 3 as an even number of both black columns doesn't affect the path, we start and end in the same row when we pass through it.

In the end, with the elements left in the stack, we just have to check if a path is valid. We can only go from 1 to 1, 2 from 2 and if there's a 3, we have to switch sides
