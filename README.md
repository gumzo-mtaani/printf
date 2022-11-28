# C - Custom _printf :computer:

This directory implements a custom printf in C.

## Requirements :bookmark_tabs:

* Allowed editors: ```vi```, ```vim```, ```emacs```.
* All your files will be compiled on Ubuntu 20.04 LTS using ```gcc```, using the options ```-Wall -Werror -Wextra -pedantic -std=gnu89```.
* You might want to look at the gcc flag ```-Wno-format``` when testing with your ```_printf``` and the standard ```printf```.
* A ```README.md``` file, at the root of the folder of the project.
* Your code should use the Betty style. It will be checked using ```betty-style.pl``` and ```betty-doc.pl```.
* You are not allowed to use global variables.
* The prototypes of all your functions should be included in your header file called ```main.h```.
* All your header files should be include guarded.
* You are allowed to use [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c).
* Note that we will not provide the ```_putchar``` function for this project.
* No more than 5 functions per file.

## More Info :bookmark_tabs:

### Authorized functions and macros

* write
* malloc
* free
* va_start
* va_end
* va_copy
* va_arg

## Table of contents

Directories | Description
----------- | -----------
[test](./test) | Test folder containing [main.c](./test/main.c) test file
[main.h](./main.h) | C header file that contains function prototypes
[_printf.c](./_printf.c) | C function that produces output according to a format
[f_get_flag.c](./f_get_flag.c) | C function that turns on appropriate flags when present
[f_get_print.c](./f_get_print.c) | C function that handles the right print function passed
[f_print_alpha.c](./f_print_alpha.c) | C function that handles strings & characters
[f_print_nums.c](./f_print_nums.c) | C function that handles integers
[f_conv.c](./f_conv.c) | C function that converts the number & base into strings
[f_print_bases.c](./f_print_bases.c) | C function that converts a number to a specified base
[f_print_paddress.c](./f_print_paddress.c) | C function that prints address of input
[f_print_special.c](./f_print_special.c) | C function that handles special cases
[f_write.c](./f_write.c) | C function that writes strings & characters to stdout

## Quick start :runner:

Git clone the repository:

```git clone https://github.com/gumzo-mtaani/printf.git```

## Bugs :loudspeaker:

No known bugs.

## Authors :black_nib:

**Paul Njuga** [Github](https://github.com/Paul-Njuga)

**John Ngatia** [Github](https://github.com/gumzo-mtaani)
