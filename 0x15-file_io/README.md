# Project: 0x15. C - File I/O

## Authors
NSANZIMANA RUGWIRO DOMINIQUE PARFAIT

## Project Description
This project involves the implementation of various file input/output operations in the C programming language. The tasks include reading and printing text from a file, creating a file, appending text to a file, copying the content of one file to another, and displaying information from the ELF header of a file.

## Project Structure

### 0-read_textfile.c
#### Task 0 - Tread lightly, she is near
A function that reads a text file and prints it to the POSIX standard output.

```c
ssize_t read_textfile(const char *filename, size_t letters);
```

- `filename`: The name of the file to read.
- `letters`: The number of letters to read and print.

Returns:
- The actual number of letters read and printed.
- 0 if the file cannot be opened or read, or if `filename` is NULL.
- 0 if `write` fails or does not write the expected amount of bytes.

### 1-create_file.c
#### Task 1 - Under the snow
A function that creates a file.

```c
int create_file(const char *filename, char *text_content);
```

- `filename`: The name of the file to create.
- `text_content`: A NULL-terminated string to write to the file.

Returns:
- 1 on success.
- -1 on failure (file cannot be created, written, or if `write` fails).
- If the file already exists, truncate it.
- If `filename` is NULL, return -1.
- If `text_content` is NULL, create an empty file.

### 2-append_text_to_file.c
#### Task 2 - Speak gently, she can hear
A function that appends text at the end of a file.

```c
int append_text_to_file(const char *filename, char *text_content);
```

- `filename`: The name of the file.
- `text_content`: The NULL-terminated string to add at the end of the file.

Returns:
- 1 on success.
- -1 on failure.
- If the file does not exist or if you do not have the required permissions to write the file, return -1.
- If `filename` is NULL, return -1.
- If `text_content` is NULL, do not add anything to the file.

### 3-cp.c
#### Task 3 - cp
A program that copies the content of a file to another file.

Usage: `cp file_from file_to`

- If the number of arguments is not correct, exit with code 97 and print `Usage: cp file_from file_to`.
- If `file_to` already exists, truncate it.
- If `file_from` does not exist or cannot be read, exit with code 98 and print `Error: Can't read from file NAME_OF_THE_FILE`.
- If writing to `file_to` fails, exit with code 99 and print `Error: Can't write to NAME_OF_THE_FILE`.
- If closing a file descriptor fails, exit with code 100 and print `Error: Can't close fd FD_VALUE`.

Permissions of the created file: `rw-rw-r--`.
Read 1,024 bytes at a time from `file_from` using a buffer.
Use `dprintf`.

### 100-elf_header.c
#### Task 4 - elf (Advanced)
A program that displays information contained in the ELF header at the start of an ELF file.

Usage: `elf_header elf_filename`

Displayed information:
- Magic
- Class
- Data
- Version
- OS/ABI
- ABI Version
- Type
- Entry point address

Format: the same as `readelf -h` (version 2.26.1).

If the file is not an ELF file or on error, exit with status code 98 and display a comprehensive error message to `stderr`.

Allowed to use `lseek` once.
Allowed to use `read` a maximum of 2 times at runtime.
Allowed to have as many functions as needed in the source file.
Allowed to use `printf`.

## Style and Compilation

- Use the provided Betty style.
- All files should be compiled on Ubuntu 20.04 LTS using `gcc` with options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- All files should end with a new line.

## Restrictions

- Allowed editors: `vi`, `vim`, `emacs`.
- No global variables allowed.
- No more than 5 functions per file.
- Only C standard library functions allowed are `malloc`, `free`, and `exit`.
- Allowed syscalls: `read`, `write`, `open`, `close`.
- Allowed to use `_putchar`.
- Use symbolic constants (POSIX) vs numbers when it makes sense.

## Header File: main.h

Include prototypes of all functions and the prototype of the function `_putchar`.
All header files should be include guarded.

## Tip

Always prefer using symbolic constants (POSIX) vs numbers when it makes sense. For instance `read(STDIN_FILENO, ...` vs `read(0, ...`.

---
