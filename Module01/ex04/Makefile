# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skrasniq <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/24 16:39:31 by skrasniq          #+#    #+#              #
#    Updated: 2023/11/27 15:03:10 by skrasniq         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	file
CC		=	g++
FLAGS		=	-Wall -Werror -Wextra -std=c++98
RM		=	rm -f
CHECK		=	-fsanitize=address

SRCS		=	main.cpp

OBJS		=	$(SRCS:.cpp=.o)


.o : .c $(HEADER) Makefile
		@$(CC) $(FLAGS) -c $< -o $(<:cpp=o) $@

$(NAME): $(OBJS)
		@$(CC) $(OBJS) $(FLAGS) -o $(NAME) $(CHECK)

.SILENT : $(OBJS) $(NAME)

all	:	$(NAME)

clean	:
			@$(RM) $(OBJS)

fclean	:	clean
			@$(RM) $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re
