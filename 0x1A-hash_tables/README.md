# Project 0x1A. C - Hash tables

## Introduction
This project focuses on implementing hash tables in C. Hash tables are a data structure that allows efficient data retrieval by using a hash function to map keys to specific locations in an array. The project involves creating a hash table, implementing a hash function (djb2 algorithm), and performing various operations such as adding elements, retrieving values, printing the hash table, and deleting the hash table.

## Project Details
### Learning Objectives
By completing this project, you will gain knowledge and skills in the following areas:
- Understanding what a hash function is and what makes a good hash function.
- Working with hash tables, including how they work, how to use them, and dealing with collisions.
- Recognizing the advantages and drawbacks of using hash tables.
- Identifying common use cases for hash tables.

### Requirements
- Project start date: January 31, 2024, 6:00 AM
- Project end date: February 3, 2024, 6:00 AM
- Checker released: February 1, 2024, 12:00 AM
- Auto review will be launched at the deadline

### Resources
Read or watch:
- [What is a HashTable Data Structure - Introduction to Hash Tables, Part 0](https://www.youtube.com/watch?v=MfhjkfocRR0)
- [Hash function](https://en.wikipedia.org/wiki/Hash_function)
- [Hash table](https://en.wikipedia.org/wiki/Hash_table)
- [All about hash tables](https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/tutorial/)
- [Why hash tables and not arrays](https://www.quora.com/Why-use-a-hash-table-instead-of-an-array)
  
### Tasks
1. **0x1A-hash_table_create**
   - Write a function that creates a hash table.

2. **1-djb2.c**
   - Implement the djb2 hash function.

3. **2-key_index.c**
   - Write a function that gives you the index of a key.

4. **3-hash_table_set.c**
   - Write a function that adds an element to the hash table.

5. **4-hash_table_get.c**
   - Write a function that retrieves a value associated with a key.

6. **5-hash_table_print.c**
   - Write a function that prints a hash table.

7. **6-hash_table_delete.c**
   - Write a function that deletes a hash table.

### General Requirements
- Allowed editors: vi, vim, emacs
- Compilation: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line.
- A `README.md` file at the root of the folder is mandatory.
- Code should use the Betty style.
- No global variables are allowed.
- No more than 5 functions per file.
- C standard library is allowed.
- Prototypes of all functions should be included in the header file `hash_tables.h`.
- Push your header file.
- All header files should be include guarded.

### Data Structures
Use the following data structures for this project:

```c
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
    unsigned long int size;
    hash_node_t **array;
} hash_table_t;
```

### Tests
Collaboration on a set of tests is strongly encouraged.

### Python Dictionaries
Python dictionaries are implemented using hash tables. Understanding this project will enhance your comprehension of Python dictionaries.

### Copyright - Plagiarism
You are required to come up with solutions for the tasks independently. Plagiarism is strictly forbidden and will result in removal from the program.

## How to Run Tests
1. Clone the GitHub repository:
   ```bash
   git clone https://github.com/username/alx-low_level_programming.git
   ```

2. Navigate to the project directory:
   ```bash
   cd alx-low_level_programming/0x1A-hash_tables
   ```

3. Compile the test file (replace `test-file.c` with the actual test file):
   ```bash
   gcc -Wall -pedantic -Werror -Wextra -std=gnu89 test-file.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c 5-hash_table_print.c 6-hash_table_delete.c -o test
   ```

4. Run the compiled test file:
   ```bash
   ./test
   ```

## Conclusion
This project is designed to reinforce your understanding of hash tables and their implementation in the C programming language. Pay close attention to the details of each task, follow the guidelines, and ensure that your code adheres to the specified requirements. Good luck!
