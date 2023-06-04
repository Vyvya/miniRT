# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmarquis <astrorigin@protonmail.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/02 01:20:53 by pmarquis          #+#    #+#              #
#    Updated: 2023/04/05 17:59:48 by pmarquis         ###   lausanne.ch        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re mrproper dox

# OPTIONS

OPT_DEBUG ?= 1
export OPT_DEBUG

OPT_PREALLOC ?= 0
export OPT_PREALLOC

OPT_MEMLIST ?= 1
export OPT_MEMLIST

ifeq ($(shell uname),Linux)
OPT_LINUX ?= 1
else
OPT_LINUX ?= 0
endif
export OPT_LINUX

### end options

NAME = libft.a

CC = gcc

ifeq ($(OPT_DEBUG),1)
CFLAGS = -Wall -Wextra -g -fsanitize=address -fno-omit-frame-pointer
else
CFLAGS = -Wall -Wextra -Werror -O3
endif

INC = libft.h
SRC = $(wildcard *.c)
OBJ = $(patsubst %.c,%.o,$(SRC))

DEFINES =

ifeq ($(OPT_DEBUG),0)
DEFINES += -DNDEBUG
endif

ifeq ($(OPT_PREALLOC),1)
DEFINES += -DPREALLOC
endif

ifeq ($(OPT_MEMLIST),0)
DEFINES += -DNMEMLIST
endif

ifeq ($(OPT_LINUX),1)
DEFINES += -DLINUX
endif

.DEFAULT_GOAL = all

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

.c.o:
	$(CC) -c $(CFLAGS) $(DEFINES) -o $@ $<

clean:
	rm -f *.o
	$(MAKE) -C arr $@
	$(MAKE) -C gnl $@
	$(MAKE) -C printf $@

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C arr $@
	$(MAKE) -C gnl $@
	$(MAKE) -C printf $@

re: fclean all

mrproper: fclean
	rm -rf cscope.* tags build
	$(MAKE) -C arr $@
	$(MAKE) -C gnl $@
	$(MAKE) -C printf $@

dox:
	rm -rf dox
	doxygen

### deps
$(OBJ): $(INC)
