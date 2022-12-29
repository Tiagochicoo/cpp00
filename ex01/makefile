# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/28 12:33:26 by tpereira          #+#    #+#              #
#    Updated: 2022/12/28 16:25:22 by tpereira         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PROG		= phonebook
CC			= g++
CFLAGS		= -Wall -Wextra -Werror -g -std=c++98
SRCS		= ./srcs/*.cpp
INC			= ./includes/PhoneBook.class.hpp

all :
	@$(CC) $(CFLAGS) $(SRCS) -o $(PROG)
	@printf "\e[38;5;46m ╔════════════════════════════════════╗\e[0m\n"
	@printf "\e[38;5;46m█▓▒░       Compiled Phonebook       ░▒▓█ \e[0m\n"
	@printf "\e[38;5;46m ╚════════════════════════════════════╝\e[0m\n"

clean :
	@rm -rf $(PROG)
	@printf "\e[31;5;200m ╔════════════════════════════════════╗\e[0m\n"
	@printf "\e[31;5;200m░▒▓█         Clean complete        █▓▒░\e[0m\n"
	@printf "\e[31;5;200m ╚════════════════════════════════════╝\e[0m\n"

fclean : clean
	@rm -rf $(PROG)

re : fclean all
