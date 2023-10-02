# Project README

This project consists of several C programs that perform various file-related operations. Below, you will find a brief description of each task along with usage examples and instructions on how to compile and run the programs.

Author: NSANZIMANA RUGWIRO DOMINIQUE PARFAIT
## Task 0: Tread lightly, she is near
### Description
This task involves writing a C function that reads a text file and prints its content to the POSIX standard output. The function takes a filename and the number of letters to read and print. It returns the actual number of letters it could read and print. If the file cannot be opened or read, it returns 0. If the filename is NULL, it returns 0. If writing fails or does not write the expected amount of bytes, it returns 0.

### Usage
```c
ssize_t read_textfile(const char *filename, size_t letters);
```

### Example
```c
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int argc, char **argv)
{
    ssize_t n;

    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s filename\n", argv[0]);
        exit(1);
    }
    n = read_textfile(argv[1], 114);
    printf("\n(printed chars: %li)\n", n);
    n = read_textfile(argv[1], 1024);
    printf("\n(printed chars: %li)\n", n);
    return (0);
}
```

## Task 1: Under the snow
### Description
In this task, you need to create a function that creates a file. The function takes a filename and a text content as input. It returns 1 on success and -1 on failure. The created file must have permissions set to rw-------. If the file already exists, it should truncate it. If the filename is NULL, it returns -1. If the text_content is NULL, it creates an empty file.

### Usage
```c
int create_file(const char *filename, char *text_content);
```

### Example
```c
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int argc, char **argv)
{
    int res;

    if (argc != 3)
    {
        fprintf(stderr, "Usage: %s filename text\n", argv[0]);
        exit(1);
    }
    res = create_file(argv[1], argv[2]);
    printf("-> %i)\n", res);
    return (0);
}
```

## Task 2: Speak gently, she can hear
### Description
This task involves writing a function that appends text to the end of a file. The function takes a filename and text content as input. It returns 1 on success and -1 on failure. If the file does not exist, it should not create one. If the filename is NULL, it returns -1. If the text_content is NULL, it does not add anything to the file.

### Usage
```c
int append_text_to_file(const char *filename, char *text_content);
```

### Example
```c
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int argc, char **argv)
{
    int res;

    if (argc != 3)
    {
        fprintf(stderr, "Usage: %s filename text\n", argv[0]);
        exit(1);
    }
    res = append_text_to_file(argv[1], argv[2]);
    printf("-> %i)\n", res);
    return (0);
}
```

## Task 3: cp
### Description
Task 3 involves creating a program that copies the content of one file to another. The program takes two arguments: the source file and the destination file. If the number of arguments is incorrect, it exits with code 97 and prints a usage message. It truncates the destination file if it already exists. If the source file does not exist or cannot be read, it exits with code 98 and prints an error message. If it cannot create or write to the destination file, it exits with code 99 and prints an error message. If it cannot close a file descriptor, it exits with code 100 and prints an error message. The permissions of the created file are set to rw-rw-r--.

### Usage
```bash
./cp file_from file_to
```

### Example
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-cp.c -o cp
./cp source.txt destination.txt
```

## Task 4: elf
### Description
This advanced task involves writing a program that displays information contained in the ELF header of an ELF file. The program takes the name of the ELF file as an argument and displays specific information, including Magic, Class, Data, Version, OS/ABI, ABI Version, Type, and Entry point address. If the file is not an ELF file or if an error occurs, it exits with status code 98 and displays a comprehensive error message.

### Usage
```bash
./elf_header elf_filename
```

### Example
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-elf_header.c -o elf_header
./elf_header executable.elf
```

**Note:** These programs are intended to be run in a Unix-like environment and have been compiled using the specified compilation commands. Make sure to adjust the compilation and execution commands as needed for your environment.
