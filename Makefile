# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/02 00:38:44 by jaqrodri          #+#    #+#              #
#    Updated: 2020/05/22 23:52:09 by jaqrodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FLAGS = -Wall \
		-Wextra\
		-Werror\

SRC_DIR = ./src
SRCS =	${SRC_DIR}/ft_manage_flag.c \
		${SRC_DIR}/ft_check_specifier.c \
		${SRC_DIR}/ft_putchar.c \
		${SRC_DIR}/ft_itoa_base.c \
		${SRC_DIR}/ft_putnbr.c \
		${SRC_DIR}/ft_printf_s.c \
		${SRC_DIR}/ft_strlen.c \
		${SRC_DIR}/ft_printf_x.c \
		${SRC_DIR}/ft_strjoin.c \
		${SRC_DIR}/ft_printf_c.c \
		${SRC_DIR}/ft_printf_xup.c \
		${SRC_DIR}/ft_putnchar.c \
		${SRC_DIR}/ft_printf_d.c \
		${SRC_DIR}/ft_itoa.c \
		${SRC_DIR}/ft_printf_u.c \
		${SRC_DIR}/ft_printf_p.c \
		${SRC_DIR}/ft_printf.c \
		${SRC_DIR}/ft_putstr.c \

OBJ_DIR = ./objects

OBJECTS = $(patsubst ${SRC_DIR}/%.c, ${OBJ_DIR}/%.o, $(SRCS))

INCLUDES_DIR = ./

HEADER = ./

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -rc $@ $^
	ranlib $@

${OBJ_DIR}/%.o: ${SRC_DIR}/%.c
	gcc -c $(FLAGS) $< -o $@ -I $(INCLUDES_DIR)

test:$(NAME)
	gcc -g $(FLAGS) main.c $(SRCS) $(NAME) -I $(INCLUDES_DIR)
	./a.out

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)
	rm -f ./a.out

re: fclean all
