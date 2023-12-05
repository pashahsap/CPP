# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skrasniq <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/09 16:57:14 by skrasniq          #+#    #+#              #
#    Updated: 2023/10/30 14:59:56 by skrasniq         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Zombie
CC		=	g++
FLAGS		=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -f
CHECK		=	-fsanitize=address

SRCS		=	main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

OBJS		=	$(SRCS:.cpp=.o)


.o : .c	$(HEADER) Makefile
	@$(CC) $(FLAGS) -c $< -o $(<:cpp=o) $@

$(NAME): $(OBJS)
		$(CC) $(OBJS) $(FLAGS) -o $(NAME) $(CHECK)

.SILENT	: $(OBJS) $(NAME)

all	:	$(NAME)

clean	:
			@$(RM) $(OBJS)

fclean	:	clean
			@$(RM) $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re
