# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/02 00:38:44 by jaqrodri          #+#    #+#              #
#    Updated: 2020/05/22 20:26:07 by jaqrodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ftprintf.a

FLAGS = -Wall \
		-Wextra\
		-Werror\

SRCS =	ft_manage_flag.c ft_check_specifier.c ft_putchar.c ft_itoa_base.c \
		ft_putnbr.c  ft_printf_s.c ft_strlen.c ft_printf_x.c ft_strjoin.c \
		ft_printf_c.c ft_printf_xup.c ft_putnchar.c ft_printf_d.c ft_itoa.c \
		ft_printf_u.c ft_printf_p.c ft_printf.c ft_putstr.c \

OBJECTS = $(subst .c,.o,$(SRCS))

INCLUDES = ft_printf.h

HEADER = ./

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -rc $@ $^
	ranlib $@

%.o: %.c
	gcc -c $(FLAGS) $< -o $@

test:$(NAME)
	gcc -g $(FLAGS) $(SRCS) $(NAME)
	./a.out

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)
	rm -f ./a.out

re: fclean all
