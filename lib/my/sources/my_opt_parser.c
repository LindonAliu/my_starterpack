/*
** EPITECH PROJECT, 2022
** my_opt_parser
** File description:
** FreeKOSOVO
*/

#include <stdio.h>
#include <string.h>

#include "str.h"
#include "my_printf.h"
#include "opt_parser.h"

static void parser_display_help(const struct parser_ctx *ctx)
{
    my_printf("USAGE: %s [OPTIONS]\n", ctx->program_name);
    for (size_t i = 0; i < ctx->entries_size; ++i) {
        my_printf("\n  %s", ctx->entries[i].opt);
        if (ctx->entries[i].optlong != NULL)
            my_printf(", %s", ctx->entries[i].optlong);
        if (ctx->entries[i].type_info != NULL) {
            my_printf(" [%s]\n", ctx->entries[i].type_info);
        } else
            my_printf("\n");
        my_printf("\t%s\n", ctx->entries[i].help);
    }
}

static bool is_opt_valid(const struct parser_entry *entry, const char *arg)
{
    return my_strcmp(arg, entry->opt) == 0
        || my_strcmp(arg, entry->optlong) == 0;
}

static int handle_argument_entry(int argc, char *argv[],
    const struct parser_entry *entry,
    const struct parser_ctx *ctx)
{
    int ret = 0;

    if (entry->argument_needed && argc == 1) {
        my_printf("Option: '%s' needs an argument.\n", argv[0]);
        return 1;
    }
    if (entry->handler == PARSER_DEFAULT_HELP_HANDLER) {
        parser_display_help(ctx);
        return 0;
    }
    if (entry->handler != NULL) {
        ret = entry->handler(ctx->userdata, argc, argv);
        if (ret != 0)
            my_printf("Invalid parameter after '%s' option.\n", argv[0]);
        return ret;
    }
    return 0;
}

static int check_opt(int argc, char *argv[], const struct parser_ctx *ctx)
{
    for (size_t i = 0; i < ctx->entries_size; ++i) {
        if (is_opt_valid(&ctx->entries[i], argv[0]))
            return handle_argument_entry(argc, argv, &ctx->entries[i], ctx);
    }
    my_printf("Unkown parameter: '%s'.\n", argv[0]);
    return 1;
}

int my_opt_parse(int argc, char *argv[], const struct parser_ctx *ctx)
{
    int ret = 0;
    int check;

    for (int i = 0; i < argc; ++i) {
        if (argv[i][0] != '-')
            continue;
        check = check_opt(argc - i, &argv[i], ctx);
        if (check < 0)
            return check;
        ret += check;
    }
    return ret;
}
