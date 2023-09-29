# Project: 0x14. C - Bit Manipulation

This project contains C programs that perform various tasks related to bit manipulation. Below are the tasks and descriptions of each program:

## Tasks

### Task 0: binary_to_uint

Write a function that converts a binary number to an unsigned int.

- Prototype: `unsigned int binary_to_uint(const char *b);`
- `b` is pointing to a string of 0 and 1 chars.
- Return: the converted number, or 0 if there is one or more chars in the string `b` that is not 0 or 1 or if `b` is NULL.

Example:
```c
unsigned int n;

n = binary_to_uint("1"); // n is 1
n = binary_to_uint("101"); // n is 5
n = binary_to_uint("1e01"); // n is 0
n = binary_to_uint("1100010"); // n is 98
n = binary_to_uint("0000000000000000000110010010"); // n is 402
```

File: `0-binary_to_uint.c`

### Task 1: print_binary

Write a function that prints the binary representation of a number.

- Prototype: `void print_binary(unsigned long int n);`
- Format: see example
- You are not allowed to use arrays.
- You are not allowed to use malloc.
- You are not allowed to use the % or / operators.

Example:
```c
print_binary(0); // Prints 0
print_binary(1); // Prints 1
print_binary(98); // Prints 1100010
print_binary(1024); // Prints 10000000000
print_binary((1 << 10) + 1); // Prints 10000000001
```

File: `1-print_binary.c`

### Task 2: get_bit

Write a function that returns the value of a bit at a given index.

- Prototype: `int get_bit(unsigned long int n, unsigned int index);`
- `index` is the index, starting from 0, of the bit you want to get.
- Returns: the value of the bit at index `index` or -1 if an error occurred.

Example:
```c
int n;

n = get_bit(1024, 10); // n is 1
n = get_bit(98, 1); // n is 1
n = get_bit(1024, 0); // n is 0
```

File: `2-get_bit.c`

### Task 3: set_bit

Write a function that sets the value of a bit to 1 at a given index.

- Prototype: `int set_bit(unsigned long int *n, unsigned int index);`
- `index` is the index, starting from 0, of the bit you want to set.
- Returns: 1 if it worked, or -1 if an error occurred.

Example:
```c
unsigned long int n;

n = 1024;
set_bit(&n, 5); // n is 1056
n = 0;
set_bit(&n, 10); // n is 1024
n = 98;
set_bit(&n, 0); // n is 99
```

File: `3-set_bit.c`

### Task 4: clear_bit

Write a function that sets the value of a bit to 0 at a given index.

- Prototype: `int clear_bit(unsigned long int *n, unsigned int index);`
- `index` is the index, starting from 0, of the bit you want to set.
- Returns: 1 if it worked, or -1 if an error occurred.

Example:
```c
unsigned long int n;

n = 1024;
clear_bit(&n, 10); // n is 0
n = 0;
clear_bit(&n, 10); // n is 0
n = 98;
clear_bit(&n, 1); // n is 96
```

File: `4-clear_bit.c`

### Task 5: flip_bits

Write a function that returns the number of bits you would need to flip to get from one number to another.

- Prototype: `unsigned int flip_bits(unsigned long int n, unsigned long int m);`
- You are not allowed to use the % or / operators.

Example:
```c
unsigned int n;

n = flip_bits(1024, 1); // n is 2
n = flip_bits(402, 98); // n is 5
n = flip_bits(1024, 3); // n is 3
n = flip_bits(1024, 1025); // n is 1
```

File: `5-flip_bits.c`

### Task 6: Endianness

Write a function that checks the endianness.

- Prototype: `int get_endianness(void);`
- Returns: 0 if big endian, 1 if little endian.

Example:
```c
int n;

n = get_endianness();
if (n != 0) {
    printf("Little Endian\n");
} else {
    printf("Big Endian\n");
}
```

File: `100-get_endianness.c`

### Task 7: Crackme3 (Advanced)

Find the password for this program.

Save the password in the file `101-password`. Your file should contain the exact password, no new line, no extra space.

Example:
```sh
./crackme3 `cat 101-password`
```

File: `101-password`

---

**Note:** The repository for this project can be found on GitHub in the `alx-low_level_programming` repository, under the `0x14-bit_manipulation` directory. Each task is implemented in its respective C file as mentioned above.
