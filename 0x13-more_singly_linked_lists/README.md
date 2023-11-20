# 0x13. C - More singly linked lists

## Description
This project consists of a series of tasks related to singly linked lists in C. The goal is to implement various functions that perform operations on linked lists, such as printing, adding nodes, freeing memory, and more.

## Project Requirements

- All files will be compiled on Ubuntu 20.04 LTS using `gcc`, with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- Code should adhere to the Betty style, checked using `betty-style.pl` and `betty-doc.pl`.
- No more than 5 functions per file.
- Only the C standard library functions `malloc`, `free`, and `exit` are allowed. The use of functions like `printf`, `puts`, `calloc`, `realloc`, etc., is forbidden.
- Use `_putchar`.
- All header files should be include guarded.

## Tasks

### 0. Print list
**File:** `0-print_listint.c`
- Function: `size_t print_listint(const listint_t *h)`
- Returns the number of nodes in the list and prints all elements of a `listint_t` list.

### 1. List length
**File:** `1-listint_len.c`
- Function: `size_t listint_len(const listint_t *h)`
- Returns the number of elements in a `listint_t` list.

### 2. Add node
**File:** `2-add_nodeint.c`
- Function: `listint_t *add_nodeint(listint_t **head, const int n)`
- Adds a new node at the beginning of a `listint_t` list.

### 3. Add node at the end
**File:** `3-add_nodeint_end.c`
- Function: `listint_t *add_nodeint_end(listint_t **head, const int n)`
- Adds a new node at the end of a `listint_t` list.

### 4. Free list
**File:** `4-free_listint.c`
- Function: `void free_listint(listint_t *head)`
- Frees a `listint_t` list.

### 5. Free
**File:** `5-free_listint2.c`
- Function: `void free_listint2(listint_t **head)`
- Frees a `listint_t` list and sets the head to `NULL`.

### 6. Pop
**File:** `6-pop_listint.c`
- Function: `int pop_listint(listint_t **head)`
- Deletes the head node of a `listint_t` linked list and returns the head node’s data.

### 7. Get node at index
**File:** `7-get_nodeint.c`
- Function: `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)`
- Returns the nth node of a `listint_t` linked list.

### 8. Sum list
**File:** `8-sum_listint.c`
- Function: `int sum_listint(listint_t *head)`
- Returns the sum of all the data (n) of a `listint_t` linked list.

### 9. Insert
**File:** `9-insert_nodeint.c`
- Function: `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)`
- Inserts a new node at a given position.

### 10. Delete at index
**File:** `10-delete_nodeint.c`
- Function: `int delete_nodeint_at_index(listint_t **head, unsigned int index)`
- Deletes the node at index index of a `listint_t` linked list.

### 11. Reverse list
**File:** `100-reverse_listint.c`
- Function: `listint_t *reverse_listint(listint_t **head)`
- Reverses a `listint_t` linked list.

### 12. Print (safe version)
**File:** `101-print_listint_safe.c`
- Function: `size_t print_listint_safe(const listint_t *head)`
- Prints a `listint_t` linked list safely, handling loops.

### 13. Free (safe version)
**File:** `102-free_listint_safe.c`
- Function: `size_t free_listint_safe(listint_t **h)`
- Frees a `listint_t` list safely, handling loops.

### 14. Find the loop
**File:** `103-find_loop.c`
- Function: `listint_t *find_listint_loop(listint_t *head)`
- Finds the loop in a `listint_t` linked list.

## Author
NSANZIMANA RUGWIRO DOMINIQUE PARFAIT

