/*
** EPITECH PROJECT, 2022
** functions
** File description:
** FreeKOSOVO
*/

#include <stdlib.h>
#include <stddef.h>
#include <string.h>

#include "all_lib.h"

int function(const char *str)
{
    if (str == NULL)
        return -1;
    my_printf("%s\n", str);
    return 0;
}
