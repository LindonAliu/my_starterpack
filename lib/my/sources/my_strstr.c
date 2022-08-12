/*
** EPITECH PROJECT, 2021
** my_strstr
** File description:
** #FreeKOSOVO
*/

#include <stdlib.h>
#include <stddef.h>

char *my_strdup(char const *src);
int my_strncmp(char const *s1, char const *s2, int n);
int my_strlen(char const *str);

char *my_strstr(char const *str, char const *to_find)
{
    while (*str != '\0') {
        if (*str == *to_find && 
            my_strncmp(str, to_find, my_strlen(to_find)) == 0)
            break;
        str++;
    }
    if (*str == '\0')
        return NULL;
    return ((char *)str);
}
