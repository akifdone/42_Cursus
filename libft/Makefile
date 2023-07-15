# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdone < mdone@student.42kocaeli.com.tr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/07 18:12:35 by mdone             #+#    #+#              #
#    Updated: 2023/07/15 11:59:28 by mdone            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
FILES = $(shell find . -name '*.c')
OBJ = $(FILES:%.c=%.o)

%.o: %.c
	@$(CC) $(CFLAGS) -I. -c $< -o $@

all: firstecho ${NAME}

firstecho:
	@echo "Compiling Libft..."

$(NAME): $(OBJ)
	@ar -rcs $(NAME) $(OBJ)
	@echo "Libft compiled."

clean:
	@find . -name '*.o' -delete
	@echo "Libft cleaning."

fclean: clean
	@if [ -e $(NAME) ]; then rm $(NAME); fi
	@echo "Libft Deleted."

bonus: $(OBJ) $(B_OBJ)
	ar -rcs $(NAME) $(OBJ) $(B_OBJ)

re: clean all

.PHONY:
	all ofile clean
