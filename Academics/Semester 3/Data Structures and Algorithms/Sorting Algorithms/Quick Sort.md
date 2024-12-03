We first need to pick a pivot element. You can select any element in the array as the pivot element.

The quick sort is based on the divide and conquer method.

You create partitions after selecting the pivot element. The left partition should have values less than the pivot element and the right partition should have values that are greater than the pivot element. Each partition doesn't need to be sorted.

Maintain two pointers - start and end. For the start pointer, we have to stop the pointer once we have found an element that is greater than the pivot element. For the end pointer, we have to stop the pointer once we have found an element that is lesser than or equal to the pivot element. Once you do this, swap the two elements at the pointers. Do this until the start pointer is lesser than the end pointer. 


