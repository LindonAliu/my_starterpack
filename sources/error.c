/*
** EPITECH PROJECT, 2022
** error
** File description:
** FreeKOSOVO
*/

#include <stddef.h>
#include "my.h"
#include "my_project.h"


int handly_error(int const argc, char const *argv[], char const *env[])
{
    if (env == NULL || env[0] == NULL)
        return (-1);
    if (argc == 1)
        return (-1);
    if (argv[1] == NULL)
        return (-1);
    return (0);
}
