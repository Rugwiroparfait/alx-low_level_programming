# Project: 0x14. C - Bit Manipulation

## Authors
NSANZIMANA RUGWIRO DOMINIQUE PARFAIT

## Project Description
This project involves implementing various functions for bitwise manipulation in C. Each function has specific requirements and constraints outlined in the project instructions.

## Project Structure

1. **0-binary_to_uint.c**
    - Function: `unsigned int binary_to_uint(const char *b);`
    - Description: Converts a binary number to an unsigned int.
    - Return: The converted number, or 0 if there are non-binary characters in the string or if the string is NULL.

2. **1-print_binary.c**
    - Function: `void print_binary(unsigned long int n);`
    - Description: Prints the binary representation of a number.
    - Constraints: No arrays, no malloc, and no use of % or / operators.

3. **2-get_bit.c**
    - Function: `int get_bit(unsigned long int n, unsigned int index);`
    - Description: Returns the value of a bit at a given index.
    - Return: The value of the bit at the specified index or -1 if an error occurs.

4. **3-set_bit.c**
    - Function: `int set_bit(unsigned long int *n, unsigned int index);`
    - Description: Sets the value of a bit to 1 at a given index.
    - Return: 1 if successful, -1 if an error occurs.

5. **4-clear_bit.c**
    - Function: `int clear_bit(unsigned long int *n, unsigned int index);`
    - Description: Sets the value of a bit to 0 at a given index.
    - Return: 1 if successful, -1 if an error occurs.

6. **5-flip_bits.c**
    - Function: `unsigned int flip_bits(unsigned long int n, unsigned long int m);`
    - Description: Returns the number of bits needed to flip to get from one number to another.
    - Constraints: No use of % or / operators.

7. **100-get_endianness.c**
    - Function: `int get_endianness(void);`
    - Description: Checks the endianness of the system.
    - Return: 0 if big endian, 1 if little endian.

8. **101-password**
    - File: Contains the password for the Crackme3 program.

## Coding Style
The code follows the Betty style guidelines.

## Compilation
All files will be compiled on Ubuntu 20.04 LTS using gcc, with the options: `-Wall -Werror -Wextra -pedantic -std=gnu89`.

## Notes
- No global variables are used.
- Each file contains no more than 5 functions.
- The only allowed C standard library functions are `malloc`, `free`, and `exit`.
- The code uses `_putchar` for output.
- Header files are include guarded.
- Prototypes of all functions and the `_putchar` function are included in the `main.h` header file.
- All header files follow the include guard convention.

Feel free to explore the source files for detailed implementation!
