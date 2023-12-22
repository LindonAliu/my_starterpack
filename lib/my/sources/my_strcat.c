/*
** EPITECH PROJECT, 2021
** my_strcat
** File description:
** Concatenate two strings.
*/

#include <stdlib.h>

#include "str.h"
#include "freef.h"

char *my_strcat(char *dest, const char *src)
{
    int len_dest = my_strlen(dest);
    int len_src = my_strlen(src);
    char *result = malloc(sizeof(char) * (len_dest + len_src + 1));

    if (result == NULL)
        return result;
    my_strncpy(result, dest, len_dest);
    my_strncpy(result + len_dest, src, len_src);
    result[len_dest + len_src] = '\0';
    my_freef("%s", dest);
    dest = my_strdup(result);
    my_freef("%s", result);
    return dest;
}
