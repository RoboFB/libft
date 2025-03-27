# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/10 10:21:00 by rgohrig           #+#    #+#              #
#    Updated: 2025/03/27 17:46:52 by rgohrig          ###   ########.fr        #
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
BONUS_SRC = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c \
		ft_lstmap_bonus.c


# Object Files
OBJ := $(SRC:.c=.o)
# BONUS OBJ
BONUS_OBJ := $(BONUS_SRC:.c=.o)

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
	$(CC) $(CFLAGS) -c $<

# Bonus
bonus : $(NAME) $(OBJ)
	@echo 🍾🍾🍾__ar__MAKE__$(NAME)__
	ar rcs $(NAME) $(OBJ)



# *************************** Clean ****************************************** #

clean :
	rm -f $(OBJ) $(BONUS_OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all


# *************************** Phony ****************************************** #

.PHONY : all clean fclean re bonus




# **** DEBUG NEED FIX FOR CORECT RULES  AND NOT ON COMPILER COMMAND ********* #
# MAIN_SRC := _R_main.c
# MAIM_OBJ := $(MAIN_SRC:.c=.o)


# mainR : $(MAIM_OBJ) $(OBJ)
# 	@echo _!!!_DEBUG_!!!__
# 	$(CC) $(CFLAGS) $(MAIM_OBJ) $(OBJ)

# debug : CFLAGS += -g -fsanitize=address
# debug : fclean mainR


# .PHONY : debug

# *************************** Old ********************************************* #

#debug : clean
#	CFLAGS += -fsanitize=address,undefined -Wall -Werror -Wextra

