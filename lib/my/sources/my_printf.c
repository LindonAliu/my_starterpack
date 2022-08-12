/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** FreeKOSOVO
*/

#include "my_printf.h"

static void flag_c(va_list arg)
{
    my_putchar(va_arg(arg, int));
}

static void flag_i(va_list arg)
{
    my_put_nbr(va_arg(arg, int));
}

static void flag_s(va_list arg)
{
    my_putstr(va_arg(arg, char *));
}

static int check_flag(char flag, va_list list, const struct flag_printf f[])
{
    for (int i = 0; i < NBR_FLAGS_PRINTF; i++) {
        if (flag == f[i].flag) {
            f[i].ptr_function(list);
            return 1;
        }
        if (flag == '%') {
            my_putchar('%');
            return 1;
        }
        if (flag == 't') {
            my_show_word_array((const char **)va_arg(list, char **));
            return 1;
        }
    }
    return 0;
}

void my_printf(const char *format, ...)
{
    va_list list;
    const struct flag_printf f[] = {
        {'s', &flag_s},
        {'c', &flag_c},
        {'i', &flag_i},
        {'d', &flag_i},
    };

    va_start(list, format);
    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            i += check_flag(format[i + 1], list, f);
        } else
            my_putchar(format[i]);
    }
    va_end(list);
}
