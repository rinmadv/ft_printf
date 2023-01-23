# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: madavid <madavid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/28 19:37:39 by madavid           #+#    #+#              #
#    Updated: 2023/01/03 18:47:53 by madavid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS    = ft_printf.c \
        ft_utils.c

OBJS    = ${SRCS:.c=.o}

CC    = cc

FLAGS    = -Wall -Wextra -Werror

NAME    = libftprintf.a

${NAME}:
	${CC} ${FLAGS} ${SRCS} -c
	ar rc ${NAME} ${OBJS}
	ranlib ${NAME}

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: re fclean clean all