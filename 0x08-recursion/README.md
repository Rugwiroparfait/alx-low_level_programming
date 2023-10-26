
# Recursion Project Readme

## Table of Contents
- [Introduction](#introduction)
- [Project Description](#project-description)
- [File Structure](#file-structure)
- [Function Implementations](#function-implementations)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Introduction
Welcome to the Recursion Project! This project is a collection of C functions designed to demonstrate and practice various recursive algorithms. These functions are implemented for educational purposes and can be used to understand and practice recursive programming in the C language.

## Project Description
The Recursion Project includes the implementation of the following functions:
1. `void _puts_recursion(char *s)`: Recursively prints a string.
2. `int _putchar(char c)`: Writes a character to the standard output.
3. `void _print_rev_recursion(char *s)`: Recursively prints a string in reverse.
4. `int _strlen_recursion(char *s)`: Returns the length of a string using recursion.
5. `int factorial(int n)`: Computes the factorial of a number using recursion.
6. `int _pow_recursion(int x, y)`: Computes the value of `x` raised to the power of `y` using recursion.
7. `int _sqrt_recursion(int n)`: Computes the square root of a number using recursion.
8. `int is_prime_number(int n)`: Checks if a number is a prime number using recursion.
9. `int is_palindrome(char *s)`: Checks if a string is a palindrome using recursion.

## File Structure
The project is organized as follows:
```
- recursion_project/
  - _puts_recursion.c
  - _putchar.c
  - _print_rev_recursion.c
  - _strlen_recursion.c
  - factorial.c
  - _pow_recursion.c
  - _sqrt_recursion.c
  - is_prime_number.c
  - is_palindrome.c
  - main.c (for testing)
  - README.md (this file)
```

## Function Implementations
Each of the functions is implemented in its respective `.c` file in the project directory. You can explore the code in these files to understand how each function works.

## Usage
To use the functions provided in this project, you can include the respective function file in your C program and call the functions as needed. Here's an example of how to use the `_puts_recursion` function in your code:

```c
#include "recursion_project/_puts_recursion.c"

int main() {
    char *str = "Hello, Recursion!";
    _puts_recursion(str);
    return 0;
}
```

Repeat the process for other functions as required.

## Contributing
Contributions to this project are welcome! If you'd like to contribute bug fixes, enhancements, or additional recursive functions, please fork the repository, make your changes, and submit a pull request. Be sure to follow the coding style and provide appropriate documentation for new functions.

## License
This project is open-source and available under the [MIT License](LICENSE). You are free to use and modify the code as needed, but please respect the license terms and provide proper attribution.
