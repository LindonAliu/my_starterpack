/*
** EPITECH PROJECT, 2022
** my_len_array
** File description:
** Get the length of a string array.
*/

#include <stddef.h>

int my_len_array(const char **array)
{
    int i;

    for (i = 0; array[i] != NULL; i++);
    return (i);
}
