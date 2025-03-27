# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/10 10:21:00 by rgohrig           #+#    #+#              #
#    Updated: 2025/03/27 16:27:48 by rgohrig          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# *************************** Variables ************************************** #

# Compiler & Flags
CC = cc
CFLAGS := -Wall -Werror -Wextra#-MMD -MP

# Prgramme name
NAME := libft.a

# Header File
# HEADER = libft.h

# Source Files
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
		ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
		ft_atoi.c ft_calloc.c ft_strdup.c \
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
		ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c

# BONUS SRC
BONUS_SRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
		ft_lstmap.c 


# Object Files
OBJ = $(SRC:.c=.o)
# BONUS OBJ
BONUS_OBJ = $(BONUS_SRC:.c=.o)

# DEP = $(SRC:.c=.d)
# -include $(DEP)


# *************************** Rules ****************************************** #

# defult rule
all : $(NAME)

# Create the program
$(NAME) : $(OBJ)
	@echo 🐸🐸🐸__ar__MAKE__$(NAME)__
	ar rcs $(NAME) $(OBJ)

# Create the object files
%.o : %.c
	@echo 🐸__OBJ__MAKE__$@__
	@$(CC) $(CFLAGS) -c $<

# Bonus
bonus : $(NAME) $(BONUS_OBJ)
	@echo 🍾🍾🍾__ar__MAKE__$(NAME)__
	ar rcs $(NAME) $(BONUS_OBJ)


# *************************** Clean ****************************************** #

clean :
	rm -f $(OBJ) $(BONUS_OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all


# *************************** Phony ****************************************** #

.PHONY : all clean fclean re




# **** DEBUG NEED FIX FOR CORECT RULES  AND NOT ON COMPILER COMMAND ********* #
MAIN_SRC := main.c
MAIM_OBJ := $(MAIN_SRC:.c=.o)


main : $(MAIM_OBJ) $(OBJ)
	@echo _!!!_DEBUG_!!!__
	$(CC) $(CFLAGS) $(MAIM_OBJ) $(OBJ)

debug : CFLAGS += -g -fsanitize=address
debug : fclean main


.PHONY : debug main

# *************************** Old ********************************************* #

#debug : clean
#	CFLAGS += -fsanitize=address,undefined -Wall -Werror -Wextra

