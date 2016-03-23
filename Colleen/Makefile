#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpageard <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/03/23 16:58:46 by tpageard          #+#    #+#              #
#    Updated: 2016/03/23 16:58:48 by tpageard         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC = clang

NAME = Colleen

CFLAGS = -Wall -Werror -Wextra
SRC = Colleen.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "\033[32m| Compiling Colleen\033[0m"
	@printf "\033[36m|--  \033[0m"
	@echo "\033[32m| Create ./$(NAME)\033[0m"
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	@echo "\033[31m!- Clean Colleen\033[0m"
	rm -rf $(OBJ)

%.o : %.c
	@echo "\033[32m| Compiling $<\033[0m"
	@printf "\033[32m|-- \033[0m"
	$(CC) $(CFLAGS) -o $@ -c $<

fclean: clean
	@echo "\033[31m!- Rm -rf $(NAME)\033[0m"
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re