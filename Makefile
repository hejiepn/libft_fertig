# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hzhu <hzhu@student.42wolfsburg.de>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/23 17:57:28 by hzhu              #+#    #+#              #
#    Updated: 2024/01/12 22:55:56 by hzhu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#the compiler gcc for C program
CC = gcc

#define any directories containing header files other than /usr/include
INCLUDES = ./libft.h

#compiler flags
CFLAGS = -Wall -Wextra -Werror -I$(INCLUDES)

#define any library paths in addtion to /usr/lib
LFLAGS = -L./lib

#define any libraries to link into executable
LIBS = -lmylib

#define the C source files
SRCS =	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \

BONUS = ft_lstnew_bonus.c \
		ft_lstadd_front_bonus.c \
		ft_lstsize_bonus.c \
		ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c \
		ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c \
		ft_lstiter_bonus.c \
		ft_lstmap_bonus.c \


#define the C object files
OBJS = $(SRCS:%.c=%.o)

BONUS_OBJS = $(BONUS:%.c=%.o)

#the build target executable
NAME = libft.a

all : $(NAME)

$(NAME) : $(OBJS)
	ar -rcs $(NAME) $(OBJS)

$(OBJS) : %.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

#.o file clean
clean:
	rm -f $(OBJS) $(BONUS_OBJS)

#full clean
fclean: clean
	rm -f $(NAME)

#rebuild target
re: fclean all

#run target
run:
	$(NAME)
	
bonus: $(OBJS) $(BONUS_OBJS)
				ar -rcs $(NAME) $(OBJS) $(BONUS_OBJS)

$(BONUS_OBJS) : %.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@


.PHONY:	all clean fclean re bonus
