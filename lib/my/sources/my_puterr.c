/*
** EPITECH PROJECT, 2021
** my_puterr
** File description:
** Write the string in error output.
*/

#include <unistd.h>

#include "str.h"

void my_puterr(const char *str)
{
    write(2, str, my_strlen(str));
}
