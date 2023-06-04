# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/18 00:29:02 by pmarquis          #+#    #+#              #
#    Updated: 2023/04/05 18:00:52 by pmarquis         ###   lausanne.ch        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re mrproper

# options

OPT_DEBUG ?= 1

# end options

NAME = libftgnl.a

LIBFTDIR = ..

INC = $(wildcard *.h)
SRC = $(wildcard *.c)
OBJ = $(patsubst %.c,%.o,$(SRC))

CC = gcc

ifeq ($(OPT_DEBUG),1)
CFLAGS = -Wall -Wextra -g -fsanitize=address -fno-omit-frame-pointer
else
CFLAGS = -Wall -Wextra -Werror -O3
endif

.c.o:
	$(CC) -c $(CFLAGS) -I$(LIBFTDIR) -o $@ $<

.DEFAULT_GOAL = all

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

clean:
	rm -f *.o
	$(MAKE) -C tests $@

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C tests $@

mrproper: fclean
	$(MAKE) -C tests $@

re: fclean all

### deps
$(OBJ): $(INC)
