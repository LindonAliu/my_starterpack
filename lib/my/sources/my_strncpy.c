/*
** EPITECH PROJECT, 2021
** my_strncpy
** File description:
** #FreeKOSOVO
*/

#include <stddef.h>

char *my_strncpy(char *dest, char const *src, size_t n)
{
    int i;

    for (i = 0; src[i] != '\0' && (size_t)i < n; i += 1)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}
