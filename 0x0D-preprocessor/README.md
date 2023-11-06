# 0x0D. C - Preprocessor

This repository contains C programs and header files that demonstrate the use of preprocessor directives in the C programming language.

## Task 0: Object-like Macro

### Description
Create a header file named `0-object_like_macro.h` that defines a macro named `SIZE` as an abbreviation for the token `1024`.

### Example
```c
#include "0-object_like_macro.h"
#include "0-object_like_macro.h"
#include <stdio.h>

int main(void)
{
    int s;

    s = 98 + SIZE;
    printf("%d\n", s);
    return (0);
}
```

Expected Output:
```
1122
```

## Task 1: Pi

### Description
Create a header file named `1-pi.h` that defines a macro named `PI` as an abbreviation for the token `3.14159265359`.

### Example
```c
#include "1-pi.h"
#include "1-pi.h"
#include <stdio.h>

int main(void)
{
    float a;
    float r;

    r = 98;
    a = PI * r * r;
    printf("%.3f\n", a);
    return (0);
}
```

Expected Output:
```
30171.855
```

## Task 2: File Name

### Description
Write a program that prints the name of the file it was compiled from, followed by a new line. You are allowed to use the standard library.

### Example
```c
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c -o c
./c
```

Expected Output:
```
2-main.c
```

## Task 3: Function-like Macro

### Description
Write a function-like macro `ABS(x)` that computes the absolute value of a number `x`.

### Example
```c
#include <stdio.h>
#include "3-function_like_macro.h"
#include "3-function_like_macro.h"

int main(void)
{
    int i;
    int j;

    i = ABS(-98) * 10;
    j = ABS(98) * 10;
    printf("%d, %d\n", i, j);
    return (0);
}
```

Expected Output:
```
980, 980
```

## Task 4: SUM

### Description
Write a function-like macro `SUM(x, y)` that computes the sum of the numbers `x` and `y`.

### Example
```c
#include <stdio.h>
#include "4-sum.h"
#include "4-sum.h"

int main(void)
{
    int s;

    s = SUM(98, 1024);
    printf("%d\n", s);
    return (0);
}
```

Expected Output:
```
1122
```

**Repository Information:**

- GitHub repository: [alx-low_level_programming](https://github.com/Rugwiroparfait/alx-low_level_programming)
- Directory: 0x0D-preprocessor
- Files: `0-object_like_macro.h`, `1-pi.h`, `2-main.c`, `3-function_like_macro.h`, `4-sum.h`


