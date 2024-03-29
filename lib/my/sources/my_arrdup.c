/*
** EPITECH PROJECT, 2022
** my_arrdup
** File description:
** Duplicate a string array.
*/

#include <stdlib.h>

#include "str.h"
#include "array.h"

char **my_arrdup(const char **array)
{
    int len_tab = my_len_array(array);
    char **result = malloc(sizeof(char *) * (len_tab + 1));

    if (!result)
        return (result);
    result[len_tab] = NULL;
    for (int i = 0; array[i] != NULL; i++)
        result[i] = my_strdup(array[i]);
    return (result);
}
