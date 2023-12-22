/*
** EPITECH PROJECT, 2022
** get_line_tab
** File description:
** Return the line number or -1 if the string was not found.
*/

#include <stddef.h>

#include "str.h"

int my_get_line_tab(const char **tab, const char *str)
{
    for (int i = 0; tab[i] != NULL; i++) {
        if (my_strncmp(tab[i], str, my_strlen(str)) == 0)
            return (i);
    }
    return (-1);
}
