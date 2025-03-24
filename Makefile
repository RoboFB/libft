# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/10 10:21:00 by rgohrig           #+#    #+#              #
#    Updated: 2025/03/24 13:41:37 by rgohrig          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# *************************** Variables ************************************** #

# Compiler & Flags
CC = cc
CFLAGS = -Wall -Werror -Wextra

# Prgramme name
NAME = libft.a

# Header File
HEADER = libft.h

# Source Files
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
		ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
		ft_atoi.c ft_calloc.c ft_strdup.c \
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
		ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c
# Object Files
OBJ = $(SRC:.c=.o)


# *************************** Rules ****************************************** #

# defult rule
all : $(NAME)

# FIX: ar rcs
# Create the program
$(NAME) : $(OBJ)
	echo 222222222222
	ar rs $(NAME) $(OBJ)

# Create the object files
$(OBJ) :
	echo test
	$(CC) $(CFLAGS) -c $(SRC)




# *************************** Clean ****************************************** #

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all


# *************************** Phony ****************************************** #

.PHONY : all clean fclean re



# *************************** Old ********************************************* #

#debug : clean
#	CFLAGS += -fsanitize=address,undefined -Wall -Werror -Wextra


# !!!DANGERES!!! Greate all files 
# %::
# 	cp _R_empty.c $@