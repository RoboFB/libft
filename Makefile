# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgohrig <rgohrig@student.42heilbronn.de>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/10 10:21:00 by rgohrig           #+#    #+#              #
#    Updated: 2025/03/28 16:23:33 by rgohrig          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# *************************** Variables ************************************** #

NAME := libft.a
CC := cc
CFLAGS := -Wall -Werror -Wextra

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
OBJ := $(SRC:.c=.o)

# Bonus Source Files
BONUS_SRC = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
		ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
# Bonus Object Files
BONUS_OBJ := $(BONUS_SRC:.c=.o)


# *************************** Rules ****************************************** #

# default rule
all : $(NAME)

# Create the object files
%.o : %.c
	@echo _🐸_object__$@__
	@$(CC) $(CFLAGS) -c $<

# Create the Arive
$(NAME) : $(OBJ)
	@echo _🐸🐸🐸_default_Arive_$(NAME)__
	@ar rcs $(NAME) $(OBJ)

# Bonus rule
bonus : $(NAME) $(OBJ) $(BONUS_OBJ)
	@echo _💎💎💎_bonus_Arive__
	@ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)


# *************************** Clean ****************************************** #

clean :
	rm -f $(OBJ) $(BONUS_OBJ)
fclean : clean
	rm -f $(NAME)
re : fclean all


# *************************** Phony ****************************************** #

.PHONY : all bonus clean fclean re 
