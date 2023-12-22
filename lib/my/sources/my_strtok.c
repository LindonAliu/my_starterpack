/*
** EPITECH PROJECT, 2022
** my_strtok
** File description:
** FreeKOSOVO
*/

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

#include "string.h"
#include "array.h"

char *my_strtok(const char *str, const char *delim)
{
    static char **save = NULL;
    static int i = 0;

    if (save == NULL) {
        save = my_stwa_separator(str, delim);
    }
    if (str == NULL) {
        if (save[i - 1] != NULL)
            i++;
        return (save[i - 1]);
    } else {
        i = 0;
        save = my_stwa_separator(str, delim);
        return (save[i]);
    }
}
