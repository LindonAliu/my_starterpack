/*
** EPITECH PROJECT, 2022
** my_arrdup
** File description:
** FreeKOSOVO
*/

#include <stdlib.h>

char *my_strdup(char const *src);
int my_len_array(char const **array);

char **my_arrdup(char const **array)
{
    int len_tab = my_len_array(array);
    char **result = malloc(sizeof(char *) * (len_tab + 1));

    if (result == NULL)
        return (NULL);
    result[len_tab] = NULL;
    for (int i = 0; array[i] != NULL; i++)
        result[i] = my_strdup(array[i]);
    return (result);
}
