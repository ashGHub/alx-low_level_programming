This is a readme file for task C static libraries


#  Task One commands

1. Create the object files <br>
`gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -c *.c`

2. Create the static file `libmy.a` <br>
`ar -rc libmy *.o`

3. Checkout included objects on the archive <br>
`ar -t libmy.a`

4. Create main.c program and link the static library to it

```
#include "main.h"

/**
 * main - check C static libraries
 *
 * Return: Always 0
 */
int main(void)
{
        _puts("\"At the end of the day, my goal was to be the best hacker\"\n\t- Kevin Mitnick");
        return (0);
}

```

5. Link the static library <br>
`gcc -std=gnu89 main.c -L. -lmy -o quote`
