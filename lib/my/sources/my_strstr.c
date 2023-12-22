/*
** EPITECH PROJECT, 2021
** my_strstr
** File description:
** Locate a substring.
*/

#include <stdlib.h>
#include <stddef.h>

#include "str.h"

char *my_strstr(const char *haystack, const char *needle)
{
    while (*haystack != '\0') {
        if (*haystack == *needle &&
            my_strncmp(haystack, needle, my_strlen(needle)) == 0)
            break;
        haystack++;
    }
    if (*haystack == '\0')
        return NULL;
    return ((char *)haystack);
}
