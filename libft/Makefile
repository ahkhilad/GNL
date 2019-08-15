# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahkhilad <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/04 18:12:40 by ahkhilad          #+#    #+#              #
#    Updated: 2019/05/04 18:12:48 by ahkhilad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a
SRC = ft_atoi.c ft_memalloc.c ft_sqrt.c ft_strncat.c \
ft_bzero.c ft_memccpy.c ft_strcat.c ft_strncmp.c \
ft_digitlen.c ft_memchr.c ft_strchr.c ft_strncpy.c \
ft_isalnum.c ft_memcmp.c ft_strclr.c ft_strnequ.c \
ft_isalpha.c ft_memcpy.c ft_strcmp.c ft_strnew.c \
ft_isascii.c ft_memdel.c ft_strcpy.c ft_strnstr.c \
ft_isdigit.c ft_memmove.c ft_strdel.c ft_strrchr.c \
ft_isprint.c ft_memset.c ft_strdup.c ft_strrev.c \
ft_itoa.c ft_putchar.c ft_strequ.c ft_strsplit.c \
ft_lstadd.c ft_putchar_fd.c ft_striter.c ft_strstr.c \
ft_lstdel.c ft_putendl.c ft_striteri.c ft_strsub.c \
ft_lstdelone.c ft_putendl_fd.c ft_strjoin.c ft_strtrim.c \
ft_lstiter.c ft_putnbr.c ft_strlcat.c ft_tolower.c \
ft_lstmap.c	ft_putnbr_fd.c ft_strlen.c ft_toupper.c \
ft_lstnew.c	ft_putstr.c ft_strmap.c	ft_words_counter.c \
ft_max.c ft_putstr_fd.c ft_strmapi.c
INC = libft.h
OBJECT = ft_atoi.o ft_memalloc.o ft_sqrt.o ft_strncat.o \
ft_bzero.o ft_memccpy.o ft_strcat.o ft_strncmp.o \
ft_digitlen.o ft_memchr.o ft_strchr.o ft_strncpy.o \
ft_isalnum.o ft_memcmp.o ft_strclr.o ft_strnequ.o \
ft_isalpha.o ft_memcpy.o ft_strcmp.o ft_strnew.o \
ft_isascii.o ft_memdel.o ft_strcpy.o ft_strnstr.o \
ft_isdigit.o ft_memmove.o ft_strdel.o ft_strrchr.o \
ft_isprint.o ft_memset.o ft_strdup.o ft_strrev.o \
ft_itoa.o ft_putchar.o ft_strequ.o ft_strsplit.o \
ft_lstadd.o ft_putchar_fd.o ft_striter.o ft_strstr.o \
ft_lstdel.o ft_putendl.o ft_striteri.o ft_strsub.o \
ft_lstdelone.o ft_putendl_fd.o ft_strjoin.o ft_strtrim.o \
ft_lstiter.o ft_putnbr.o ft_strlcat.o ft_tolower.o \
ft_lstmap.o ft_putnbr_fd.o ft_strlen.o ft_toupper.o \
ft_lstnew.o ft_putstr.o ft_strmap.o ft_words_counter.o \
ft_max.o ft_putstr_fd.o ft_strmapi.o
CFLAG = -Wextra -Wall -Werror

all: $(NAME)

$(NAME):
	gcc $(CFLAG) -c $(SRC) -I $(INC)
	ar rc  $(NAME) $(OBJECT)
clean:
	/bin/rm -f *.o
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all
