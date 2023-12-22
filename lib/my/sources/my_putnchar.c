/*
** EPITECH PROJECT, 2022
** my_putnchar
** File description:
** Write n char c in stdout.
*/

#include "my_printf.h"

static int my_absolute(int n)
{
    return n < 0 ? -n : n;
}

void my_putnchar(char c, int n)
{
    for (n = my_absolute(n); n > 0; n--)
        my_putchar(c);
}
