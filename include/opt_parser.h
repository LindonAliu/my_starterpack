/*
** EPITECH PROJECT, 2022
** my_starterpack
** File description:
** opt_parser
*/

#ifndef OPT_PARSER_H
    #define OPT_PARSER_H

    #include <stddef.h>
    #include <stdbool.h>

typedef int parser_handler_t(void *userdata, int argc, char *args[]);

    #define PARSER_DEFAULT_HELP_HANDLER ((parser_handler_t *) -1)

/**
 * \struct parser argument entry
 *
 * \brief This sturcture represent an argument entry.
 *
 * \var opt: The option name (such as -h).
 * \var optlong: The option longname (such as --help).
 * \var help: The help message.
 * \var type_info: A string that represent the type of the argument.
 * \var argument_needed: A boolean that represent
 * if an argument is needed after the option.
 */
struct parser_entry {
    const char *opt;
    const char *optlong;
    const char *help;
    const char *type_info;
    parser_handler_t *handler;
    bool argument_needed;
};

/**
 * \struct parser_ctx, a container for a parser context
 *
 * \brief This structure represent a parser context.
 *
 * \var program_name: The name of the program.
 * \var entries: The entries of the context.
 * \var entries_size: The size of the entries.
 * \var userdata: The userdata of the context, passed to each function pointer.
 */
struct parser_ctx {
    const char *program_name;
    const struct parser_entry *entries;
    size_t entries_size;
    void *userdata;
};

int my_opt_parse(int ac, char *av[], const struct parser_ctx *ctx);

#endif/* !OPT_PARSER_H_ */
