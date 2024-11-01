#    include<stdio.h>


int main() {
    int a,b;
    printf("Enter any Number a:");
    scanf("%d", &a);

    printf("Enter any Number b:");
    scanf("%d", &b);

    
    printf(" sum is %d", a + b);

    return 0;
}/*Here's a chart with data types in C, their typical size, range, and the format specifiers used for printing them with `printf`:

| **Data Type**            | **Size (bytes)** | **Range**                                                | **Format Specifier** |
|--------------------------|------------------|----------------------------------------------------------|----------------------|
| **Basic Integer Types**   |                  |                                                          |                      |
| `int`                    | 4                | −2,147,483,648 to 2,147,483,647                          | `%d` or `%i`         |
| `unsigned int`           | 4                | 0 to 4,294,967,295                                       | `%u`                 |
| `short int`              | 2                | −32,768 to 32,767                                        | `%hd`                |
| `unsigned short int`     | 2                | 0 to 65,535                                              | `%hu`                |
| `long int`               | 4 or 8           | −2,147,483,648 to 2,147,483,647 (on 4-byte systems)      | `%ld`                |
|                          |                  | −9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 (on 8-byte systems) | `%ld`                |
| `unsigned long int`      | 4 or 8           | 0 to 4,294,967,295 (on 4-byte systems)                   | `%lu`                |
|                          |                  | 0 to 18,446,744,073,709,551,615 (on 8-byte systems)      | `%lu`                |
| `long long int`          | 8                | −9,223,372,036,854,775,808 to 9,223,372,036,854,775,807  | `%lld`               |
| `unsigned long long int` | 8                | 0 to 18,446,744,073,709,551,615                          | `%llu`               |
| **Character Types**       |                  |                                                          |                      |
| `char`                   | 1                | −128 to 127                                              | `%c`                 |
| `signed char`            | 1                | −128 to 127                                              | `%c`                 |
| `unsigned char`          | 1                | 0 to 255                                                 | `%c` or `%hhu`       |
| **Floating-Point Types**  |                  |                                                          |                      |
| `float`                  | 4                | 1.2E−38 to 3.4E+38                                       | `%f`                 |
| `double`                 | 8                | 2.3E−308 to 1.7E+308                                     | `%lf`                |
| `long double`            | 10, 12, or 16    | Varies, higher precision than `double`                   | `%Lf`                |
| **Other Types**           |                  |                                                          |                      |
| `void`                   | 0                | No storage                                               | N/A                  |
| `enum`                   | Depends on system| Integral values, typically same as `int`                 | `%d`                 |

### Key Format Specifiers:
- **`%d` or `%i`**: For signed integers.
- **`%u`**: For unsigned integers.
- **`%ld`**: For long integers.
- **`%f`**: For floating-point numbers.
- **`%lf`**: For double-precision floating-point numbers.
- **`%lld`**: For long long integers.
- **`%c`**: For characters.
- **`%s`**: For strings (arrays of `char`).
- **`%x` or `%X`**: For hexadecimal representation of integers.
- **`%o`**: For octal representation of integers.

This chart provides an overview of C's data types with their format specifiers for `printf` or `scanf` functions.*/
