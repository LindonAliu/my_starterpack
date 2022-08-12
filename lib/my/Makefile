##
## EPITECH PROJECT, 2021
## libmy
## File description:
## Build libmy
##

NAME		=	../libmy.a
SRCS		=	$(wildcard sources/*.c)
OBJS		=	$(SRCS:sources/%.c=obj/%.o)

ARCHIVER	=	ar
CC			:=	gcc
RM 			=	rm -f

HEADER		=	include/*
H_DEST		=	../../include

CPPFLAGS	+=	-Wall -Wextra -iquote include
CFLAGS		+=

obj/%.o:	sources/%.c
	@mkdir -p obj
	$(CC) $(CPPFLAGS) -c $< -o $@

all:	header $(NAME)

header:
	@mkdir -p $(H_DEST)
	@cp $(HEADER) $(H_DEST) && printf "header copied to $(H_DEST)\n"

$(NAME):	$(OBJS)
	@$(ARCHIVER) rc $(NAME) $(OBJS) && printf "library built\n"

debug:	CPPFLAGS += -g3
debug:	re

re: fclean all

clean:
	@$(RM) $(OBJS)
	@$(RM) -r obj

fclean:	clean
	@$(RM) $(NAME) && printf "library cleaned successfully\n" || printf "try sudo make fclean\n"

.PHONY: all debug re clean fclean
