# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/02 00:38:44 by jaqrodri          #+#    #+#              #
#    Updated: 2020/05/22 18:14:47 by jaqrodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ftprintf.a

FLAGS = -Wall \
		-Wextra\
		-Werror\

SRCS =	$(wildcard *.c)

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
