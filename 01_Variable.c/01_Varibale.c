#include<stdio.h>

int main(){
    printf("Hello World");
    return 0;
}/*In C, data types are broadly categorized into four types:

1. **Basic Data Types**:
   - `int`: Integer data type, used for whole numbers.
   - `float`: Floating-point data type, used for single-precision decimal numbers.
   - `double`: Double precision floating-point data type, for larger or more precise decimal numbers.
   - `char`: Character data type, used to store single characters.

2. **Derived Data Types**:
   - **Array**: Collection of elements of the same type, e.g., `int arr[10];`.
   - **Pointer**: Stores the address of another variable, e.g., `int *ptr;`.
   - **Function**: Functions can return values of any data type.

3. **Enumeration Data Type**:
   - `enum`: Used to assign names to integral constants for easier code readability, e.g., `enum week {Mon, Tue, Wed};`.

4. **User-Defined Data Types**:
   - **struct**: Combines different data types into a single unit, e.g., `struct person { char name[50]; int age; };`.
   - **union**: Similar to `struct`, but shares memory between the members.
   - **typedef**: Used to create a new name (alias) for an existing data type.

These cover the basic data types used in C programming.*/