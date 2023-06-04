# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/28 19:58:25 by pmarquis          #+#    #+#              #
#    Updated: 2023/06/02 19:48:00 by vgejno           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re bonus mrproper

# options

OPT_DEBUG ?= 1
export OPT_DEBUG

ifeq ($(shell uname),Linux)
OPT_LINUX ?= 1
else
OPT_LINUX ?= 0
endif
export OPT_LINUX

# end options

LIBFTDIR = libft

ifeq ($(OPT_LINUX),1)
MLXDIR = minilibx-linux
else
MLXDIR = minilibx_opengl
endif

NAME = miniRT

INC = main.h
SRC = \
	  config.c \
	  config_check.c \
	  config_debug.c \
	  error.c \
	  load_a.c \
	  load_c.c \
	  load_l.c \
	  load_pl.c \
	  load_sp.c \
	  load_cy.c \
	  main.c \
	  scan_coord.c \
	  scan_color.c

OBJ = $(patsubst %.c,%.o,$(SRC))

CC = gcc

ifeq ($(OPT_DEBUG),1)
CFLAGS = -Wall -Wextra -g -fsanitize=address -fno-omit-frame-pointer
else
CFLAGS = -Wall -Wextra -Werror -O3
endif

DEFINES =
ifeq ($(OPT_DEBUG),0)
DEFINES += -DNDEBUG
endif
ifeq ($(OPT_LINUX),1)
DEFINES += -DLINUX
endif

INCLUDES = -I$(LIBFTDIR)/arr \
		   -I$(LIBFTDIR)/gnl \
		   -I$(LIBFTDIR)/printf \
		   -I$(LIBFTDIR) \
		   -I$(MLXDIR)

ARCHIVES = $(LIBFTDIR)/arr/libftarr.a \
		   $(LIBFTDIR)/gnl/libftgnl.a \
		   $(LIBFTDIR)/printf/libftprintf.a \
		   $(LIBFTDIR)/libft.a \
		   $(MLXDIR)/libmlx.a

all: $(NAME)

.c.o:
	$(CC) -c $(CFLAGS) $(DEFINES) $(INCLUDES) -o $@ $<

ifeq ($(OPT_LINUX),1)
$(NAME): $(OBJ) $(ARCHIVES)
	$(CC) $(CFLAGS) $^ -lXext -lX11 -lm -o $@
else
$(NAME): $(OBJ) $(ARCHIVES)
	$(CC) $(CFLAGS) $^ -framework OpenGL -framework AppKit -o $@
endif

$(LIBFTDIR)/arr/libftarr.a:
	$(MAKE) -C $(LIBFTDIR)/arr

$(LIBFTDIR)/gnl/libftgnl.a:
	$(MAKE) -C $(LIBFTDIR)/gnl

$(LIBFTDIR)/printf/libftprintf.a:
	$(MAKE) -C $(LIBFTDIR)/printf

$(LIBFTDIR)/libft.a:
	$(MAKE) -C $(LIBFTDIR)

$(MLXDIR)/libmlx.a:
	$(MAKE) -C $(MLXDIR)

clean:
	rm -f *.o
	$(MAKE) -C $(LIBFTDIR) $@

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(MLXDIR) clean
	$(MAKE) -C $(LIBFTDIR) $@

re: fclean all

bonus: all

mrproper: fclean
	rm -f cscope.* tags
	$(MAKE) -C $(LIBFTDIR) $@

### deps
$(OBJ): $(INC)
