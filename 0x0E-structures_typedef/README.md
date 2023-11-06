# 0x0E-structures_typedef Project

This repository contains a set of C programs that demonstrate the use of structures and typedef. The project includes several tasks to practice working with structures and defining custom types.

## Tasks

### Task 0: Poppy

Define a new type `struct dog` with the following elements:

- `name`, type = `char *`
- `age`, type = `float`
- `owner`, type = `char *`

Example usage:
```c
#include <stdio.h>
#include "dog.h"

int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
```

### Task 1: A dog is the only thing on earth that loves you more than you love yourself

Write a function `init_dog` that initializes a variable of type `struct dog`.

Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);`

Example usage:
```c
#include <stdio.h>
#include "dog.h"

int main(void)
{
    struct dog my_dog;

    init_dog(&my_dog, "Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
```

### Task 2: A dog will teach you unconditional love. If you can have that in your life, things won't be too bad

Write a function `print_dog` that prints the details of a struct dog.

Prototype: `void print_dog(struct dog *d);`

Format: 
```
Name: [name]
Age: [age]
Owner: [owner]
```

If an element of `d` is NULL, print `(nil)` instead of this element. If `d` is NULL, print nothing.

Example usage:
```c
#include <stdio.h>
#include "dog.h"

int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    print_dog(&my_dog);
    return (0);
}
```

### Task 3: Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read

Define a new type `dog_t` as a new name for the type `struct dog`.

Example usage:
```c
#include <stdio.h>
#include "dog.h"

int main(void)
{
    dog_t my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
```

### Task 4: A door is what a dog is perpetually on the wrong side of

Write a function `new_dog` that creates a new dog.

Prototype: `dog_t *new_dog(char *name, float age, char *owner);`

You have to store a copy of `name` and `owner`. Return NULL if the function fails.

Example usage:
```c
#include <stdio.h>
#include "dog.h"

int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    return (0);
}
```

### Task 5: How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg

Write a function `free_dog` that frees dogs.

Prototype: `void free_dog(dog_t *d);`

Example usage:
```c
#include <stdio.h>
#include "dog.h"

int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    free_dog(my_dog);
    return (0);
}
```

## Repository Information

- GitHub Repository: [alx-low_level_programming](https://github.com/Rugwiroparfait/alx-low_level_programming)
- Directory: 0x0E-structures_typedef

Feel free to check the provided C files in this repository for the actual implementation of the tasks. Good luck with your C programming!
