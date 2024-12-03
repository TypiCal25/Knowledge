Count sort is a sorting algorithm is not a comparison sorting algorithm. We are going to sort the values according to the key values that are given.

We are going to count the number of elements have distinct key values. This only works for the condition that

$$\Huge 1 \le a[i] \le k , $$

Count sort is a stable sorting algorithm. This is why we do the additional things. 

1. Make an array of frequencies
2. Do a cumulative addition at every step
3. Then iterate backwards, check the current number, decrement its frequency first, then add that element at the decremented position.

Time Complexity: O(n + k)

This sorting algorithm is used in [[Radix Sort]] as well