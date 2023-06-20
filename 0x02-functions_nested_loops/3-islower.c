#include "main.h"

/**
 * _igcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 11-main.c 11-print_to_98.c -o 11-98slower - check if char is lowercase
 * @c: is the char to be checked
 * Return: 1 if char is lowercase, otherwise 0.
 */

int _islower(int c)
{
        if (c >= 97 && c <= 122)
                return (1);
        else
                return (0);
}
