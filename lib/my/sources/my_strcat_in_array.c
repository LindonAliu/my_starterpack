/*
** EPITECH PROJECT, 2022
** my_strcat_in_array
** File description:
** Concate a string in all the string of the array.
*/

#include <stddef.h>
#include <stdlib.h>

#include "str.h"

void my_strcat_in_array(char **arr, const char *str)
{
    char *tmp = NULL;

    for (int i = 0; arr[i] != NULL; i++) {
        tmp = my_strdup(arr[i]);
        free(arr[i]);
        arr[i] = my_strcat(tmp, str);
        free(tmp);
    }
}
