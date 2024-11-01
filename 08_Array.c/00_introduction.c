/* In C, an array is a collection of elements of the same data type stored in contiguous memory locations. Arrays can be of any type, 
including int, float, char, 
and even user-defined types like structures.

Here’s a basic example of how to declare, initialize, and use an array in C:

Declaration and Initialization:
c*/

#include <stdio.h>

int main() {
    // Declare an array of integers with 5 elements
    int arr[5];

    // Initialize the array
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    // Print array elements
    for (int i = 0; i < 5; i++) {
        printf("Element at index %d: %d\n", i, arr[i]);
    }

    return 0;
}


/*Shorter Initialization:
You can also initialize the array directly at the time of declaration:

c
Copy code
int arr[5] = {10, 20, 30, 40, 50};
Key Points:
Indexing: Array indices start from 0 and go up to n-1 where n is the number of elements.
Size: The size of an array must be a constant value known at compile-time.
Access: You can access elements using their index (e.g., arr[2] for the third element).
Do you want to explore multidimensional arrays or dynamic arrays as well?


In C, when we say that an array is stored in **contiguous memory**, it means that the elements of the array are stored sequentially in adjacent 
memory locations. This allows for efficient access and traversal of the array elements, as their addresses are predictable based on the starting 
address of the array and the element size.

For example, if you have an array of integers:

```c
int arr[4] = {10, 20, 30, 40};
```

Here’s how memory is allocated:

- If the first element `arr[0]` is stored at memory address `1000` (hypothetically), and an `int` occupies 4 bytes (on most systems), then the 
elements of the array will be stored like this:
  - `arr[0]` (value 10) at address `1000`
  - `arr[1]` (value 20) at address `1004`
  - `arr[2]` (value 30) at address `1008`
  - `arr[3]` (value 40) at address `1012`

The memory locations for `arr` are contiguous because each element follows directly after the previous one.

### Benefits of Contiguous Memory:
1. **Efficient access**: You can calculate the address of any element using simple pointer arithmetic. For example, the address of `arr[i]` 
is given by `base_address + i * sizeof(type)`.
2. **Cache friendliness**: Modern CPUs use caches to speed up memory access, and contiguous memory helps in better cache utilization.

In contrast, non-contiguous memory structures (like linked lists) require more overhead in terms of both access and storage management because
 the
 elements are scattered in different locations in memory, requiring pointers to link them. 

Would you like to know more about how memory works in C, like dynamic memory allocation?*/