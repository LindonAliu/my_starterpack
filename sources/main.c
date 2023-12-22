/*
** EPITECH PROJECT, 2022
** main
** File description:
** FreeKOSOVO
*/

#include <stdio.h>
#include <stdlib.h>

#include "my_project.h"

int main(int argc, const char *argv[], const char *env[])
{
    if (error_handling(argc, argv, env) == -1 || function(argv[1]) == -1)
        return (84);
    return (0);
}
