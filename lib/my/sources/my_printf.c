/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** FreeKOSOVO
*/

#include "my_printf.h"

static int check_flag(char flag, va_list list)
{
    for (int i = 0; i < NBR_FLAGS_PRINTF; i++) {
        if (flag == FLAGS_PRINTF[i].flag) {
            FLAGS_PRINTF[i].ptr_function(list);
            return 1;
        }
        if (flag == '%') {
            my_putchar('%');
            return 1;
        }
    }
    return 0;
}

void my_printf(const char *format, ...)
{
    va_list list;

    va_start(list, format);
    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            i += check_flag(format[i + 1], list);
        } else
            my_putchar(format[i]);
    }
    va_end(list);
}
