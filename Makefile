# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/02 00:38:44 by jaqrodri          #+#    #+#              #
#    Updated: 2020/05/15 00:19:59 by jaqrodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ftprintf.a

FLAGS = -Wall \
		-Wextra\
		-Werror\

SRCS =	*.c

OBJECTS = $(subst .c,.o,$(SRCS))

INCLUDES = ft_printf.h

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

.o: .c
	gcc -c $(FLAGS) $(SRCS) -I $(HEADER)

test:$(NAME)
	gcc $(FLAGS) $(SRCS) $(NAME)
	./a.out

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)
	rm -f ./a.out

re: fclean all
