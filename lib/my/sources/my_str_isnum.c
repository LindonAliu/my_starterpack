/*
** EPITECH PROJECT, 2021
** my_str_isnum
** File description:
** #FreeKOSOVO
*/

int my_str_isnum(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] < '0' || str[i] > '9') && str[i] != '-')
            return (0);
    }
    return (1);
}
