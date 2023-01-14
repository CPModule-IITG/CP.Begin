<h1> [String Delimiter](https://atcoder.jp/contests/abc282/tasks/abc282_c?lang=en) <h1>

We know that, there are even number of " so we can categorize every ',' as enclosed 
if there are odd no of " before that character and non-enclosed if there are 
even no of " before that.

So we maintain a variable var which stores the count of " before any index i and 
if var is even and the character at i-th index is ',' we change it to '.' else we do nothing. 
