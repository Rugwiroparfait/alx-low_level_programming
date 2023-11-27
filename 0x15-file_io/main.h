#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/* Task 0: Tread lightly, she is near */
ssize_t read_textfile(const char *filename, size_t letters);

/* Task 1: Under the snow */
int create_file(const char *filename, char *text_content);

/* Task 2: Speak gently, she can hear */
int append_text_to_file(const char *filename, char *text_content);

/* Task 3: cp */
int _putchar(char c);
void print_error(int code, const char *file_name);
int copy_file(const char *file_from, const char *file_to);

/* Task 100: elf (Advanced) */
int elf_header(const char *elf_filename);

/* Additional functions */
size_t _strlen(char *s);

#endif /* MAIN_H */

