# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmahias <mmahias@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/20 15:07:47 by mmahias           #+#    #+#              #
#    Updated: 2021/08/20 15:07:48 by mmahias          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_atoi.c ft_isdigit.c ft_strlen.c ft_strcmp.c ft_strncmp.c ft_putstr_fd.c

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

CC	= gcc

CFLAGS	= -Wall -Werror -Wextra -I.

RM	= rm -f

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
	 ar -rcs ${NAME} ${OBJS}

all:	${NAME}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all

.PHONY: all clean fclean re
