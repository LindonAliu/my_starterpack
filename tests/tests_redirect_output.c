/*
** EPITECH PROJECT, 2022
** tests_fuctions
** File description:
** FreeKOSOVO
*/

#include "stumper.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(function, test_output, .init = redirect_all_std)
{
    // function("hello world");
    // cr_assert_stdout_eq_str("av[1] = hello world\n");
}
