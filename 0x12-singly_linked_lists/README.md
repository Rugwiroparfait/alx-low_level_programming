Certainly! Below is a sample README.md for the 0x12-singly_linked_lists project:

markdown
Copy code
# 0x12. C - Singly linked lists

## Project Overview

This project contains C programs that demonstrate the implementation and manipulation of singly linked lists.

## Tasks

### 0. Print list

Write a function that prints all the elements of a `list_t` list.

**Prototype:**
```c
size_t print_list(const list_t *h);
Return: The number of nodes.

Format: If str is NULL, print [0] (nil). You are allowed to use printf.

1. List length
Write a function that returns the number of elements in a linked list_t list.

Prototype:

c
Copy code
size_t list_len(const list_t *h);
2. Add node
Write a function that adds a new node at the beginning of a list_t list.

Prototype:

c
Copy code
list_t *add_node(list_t **head, const char *str);
Return: The address of the new element, or NULL if it failed. str needs to be duplicated. You are allowed to use strdup.

3. Add node at the end
Write a function that adds a new node at the end of a list_t list.

Prototype:

c
Copy code
list_t *add_node_end(list_t **head, const char *str);
Return: The address of the new element, or NULL if it failed. str needs to be duplicated. You are allowed to use strdup.

4. Free list
Write a function that frees a list_t list.

Prototype:

c
Copy code
void free_list(list_t *head);
5. The Hare and the Tortoise
Advanced Task
Write a function that prints:

css
Copy code
You're beat! and yet, you must allow,
I bore my house upon my back!
before the main function is executed. You are allowed to use the printf function.

6. Real programmers can write assembly code in any language
Advanced Task
Write a 64-bit program in assembly that prints Hello, Holberton, followed by a new line.

Restrictions:

You are only allowed to use the printf function.
You are not allowed to use interrupts.
Your program will be compiled using nasm and gcc.
Author
Rugwiro Parfait

Email: rugwiroparfait003@gmail.com
