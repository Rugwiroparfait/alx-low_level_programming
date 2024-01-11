# Project README

## 0x17. C - Doubly linked lists

### Overview
This project focuses on implementing and understanding doubly linked lists in C. It covers various operations such as printing, calculating the length, adding nodes at the beginning and end, freeing the list, getting a node at a specific index, calculating the sum of the list, inserting at an index, and deleting at an index.

### Project Details
- **Author:** NSANZIMANA RUGWIRO Dominique Parfait
- **Start Date:** January 11, 2024, 6:00 AM
- **End Date:** January 12, 2024, 6:00 AM
- **Checker Release:** January 11, 2024, 12:00 PM
- **Auto Review:** Will be launched at the deadline

### Learning Objectives
By the end of this project, you should be able to:
- Understand what a doubly linked list is.
- Use doubly linked lists in C.
- Implement various operations (deletion, insertion, etc.) with doubly linked lists.
- Start looking for the right source of information without excessive help.

### Resources
Read or watch:
- What is a Doubly Linked List

### Project Requirements
- Allowed editors: vi, vim, emacs
- Code interpreted/compiled on Ubuntu 20.04 LTS using python3 (version 3.8.5)
- All files should end with a new line
- A `README.md` file, at the root of the project folder, is mandatory
- Code should use the Betty style and will be checked using `betty-style.pl` and `betty-doc.pl`
- No global variables allowed
- No more than 5 functions per file
- Only allowed C standard library functions are `malloc`, `free`, `printf`, and `exit`
- Prototypes of all functions should be included in the `lists.h` header file
- Don't forget to push the header file
- All header files should be include guarded

### Data Structure
Use the following data structure for this project:
```c
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

### Project Tasks
1. **Print list**
    - Write a function that prints all the elements of a `dlistint_t` list.
    - Prototype: `size_t print_dlistint(const dlistint_t *h);`

2. **List length**
    - Write a function that returns the number of elements in a linked `dlistint_t` list.
    - Prototype: `size_t dlistint_len(const dlistint_t *h);`

3. **Add node**
    - Write a function that adds a new node at the beginning of a `dlistint_t` list.
    - Prototype: `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`

4. **Add node at the end**
    - Write a function that adds a new node at the end of a `dlistint_t` list.
    - Prototype: `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`

5. **Free list**
    - Write a function that frees a `dlistint_t` list.
    - Prototype: `void free_dlistint(dlistint_t *head);`

6. **Get node at index**
    - Write a function that returns the nth node of a `dlistint_t` linked list.
    - Prototype: `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`

7. **Sum list**
    - Write a function that returns the sum of all the data (n) of a `dlistint_t` linked list.
    - Prototype: `int sum_dlistint(dlistint_t *head);`

8. **Insert at index**
    - Write a function that inserts a new node at a given position.
    - Prototype: `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);`

9. **Delete at index**
    - Write a function that deletes the node at index index of a `dlistint_t` linked list.
    - Prototype: `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`

### Advanced Tasks
10. **Crackme4**
    - Find the password for `crackme4` and save it in the file `100-password`.

11. **Palindromes**
    - Find the largest palindrome made from the product of two 3-digit numbers and save the result in the file `102-result`.

12. **Crackme5**
    - Write a keygen for `crackme5` with usage instructions provided in the task description.

### How to Compile and Run
For each task, you can compile the code using the provided examples. For example:
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_dlistint.c -o a
./a
```

### Repository Information
- GitHub Repository: [alx-low_level_programming](https://github.com/Rugwiroparfait/alx-low_level_programming)
- Directory: 0x17-doubly_linked_listsi

Feel free to use the provided examples and adapt them to your needs. Good luck with the project!
