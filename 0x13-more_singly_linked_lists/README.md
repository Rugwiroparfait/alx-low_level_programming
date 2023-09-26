# Project Title: 0x13. C - More singly linked lists

## Table of Contents
- [Project Description](#project-description)
- [Tasks](#tasks)
  - [Task 0: Print list](#task-0-print-list)
  - [Task 1: List length](#task-1-list-length)
  - [Task 2: Add node](#task-2-add-node)
  - [Task 3: Add node at the end](#task-3-add-node-at-the-end)
  - [Task 4: Free list](#task-4-free-list)
  - [Task 5: Free](#task-5-free)
  - [Task 6: Pop](#task-6-pop)
  - [Task 7: Get node at index](#task-7-get-node-at-index)
  - [Task 8: Sum list](#task-8-sum-list)
  - [Task 9: Insert](#task-9-insert)
  - [Task 10: Delete at index](#task-10-delete-at-index)
  - [Task 11: Reverse list](#task-11-reverse-list)
  - [Task 12: Print (safe version)](#task-12-print-safe-version)

## Project Description
This project involves creating and working with singly linked lists in the C programming language. The tasks include various operations on linked lists, such as printing, inserting, deleting, reversing, and more. Each task has a specific function to be implemented, and a main program is provided for testing the functions.

Author: NSANZIMANA RUGWIRO Dominique Parfait
## Tasks
### Task 0: Print list
- Prototype: `size_t print_listint(const listint_t *h);`
- Return: the number of nodes
- Format: see example
- You are allowed to use `printf`

### Task 1: List length
- Prototype: `size_t listint_len(const listint_t *h);`

### Task 2: Add node
- Prototype: `listint_t *add_nodeint(listint_t **head, const int n);`
- Return: the address of the new element, or `NULL` if it failed

### Task 3: Add node at the end
- Prototype: `listint_t *add_nodeint_end(listint_t **head, const int n);`
- Return: the address of the new element, or `NULL` if it failed

### Task 4: Free list
- Prototype: `void free_listint(listint_t *head);`

### Task 5: Free
- Prototype: `void free_listint2(listint_t **head);`
- The function sets the head to NULL

### Task 6: Pop
- Prototype: `int pop_listint(listint_t **head);`
- Return 0 if the linked list is empty

### Task 7: Get node at index
- Prototype: `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);`
- Return `NULL` if the node does not exist

### Task 8: Sum list
- Prototype: `int sum_listint(listint_t *head);`
- Return 0 if the list is empty

### Task 9: Insert
- Prototype: `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);`
- Return: the address of the new node, or `NULL` if it failed
- Do not add the new node if it is not possible to add it at index idx

### Task 10: Delete at index
- Prototype: `int delete_nodeint_at_index(listint_t **head, unsigned int index);`
- Return 1 if it succeeded, -1 if it failed

### Task 11: Reverse list
- Prototype: `listint_t *reverse_listint(listint_t **head);`
- Return: a pointer to the first node of the reversed list
- You are not allowed to use more than 1 loop
- You are not allowed to use `malloc`, `free`, or arrays
- You can only declare a maximum of two variables in your function

### Task 12: Print (safe version)
- Prototype: `size_t print_listint_safe(const listint_t *head);`
- Return: the number of nodes in the list
- This function can print lists with a loop
- You should go through the list only once
- If the function fails, exit the program with status 98
- Output format: see example
