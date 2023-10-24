# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkarim-s <mkarim-s@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/22 15:05:24 by mkarim-s          #+#    #+#              #
#    Updated: 2023/10/22 17:57:03 by mkarim-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER = libft.h
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_toupper.c ft_tolower.c ft_strncmp.c ft_memcmp.c ft_atoi.c \
	ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strdup.c ft_substr.c \
	ft_strjoin.c ft_itoa.c ft_strtrim.c ft_strmapi.c \
	ft_bzero.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
	ft_putnbr_fd.c ft_memcpy.c ft_memmove.c ft_memchr.c ft_memset.c \
	ft_calloc.c ft_strlcpy.c ft_strlcat.c ft_split.c

OBJ = ${SRC:.c=.o}

all: ${NAME}

%.o : %.c ${HEADER} Makefile
	gcc -c -Wextra -Werror -Wall $< -o $@

$(NAME): ${OBJ}
	ar rcs $(NAME) $(OBJ)

clean:
	rm -rf ${OBJ}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re
