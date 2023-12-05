# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skrasniq <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/24 17:52:52 by skrasniq          #+#    #+#              #
#    Updated: 2023/11/24 18:01:56 by skrasniq         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Harl
CC		=	g++
FLAGS		=	-Wall -Werror -Wextra -std=c++98
RM		=	rm -f
CHECK		=	-fsanitize=address

SRCS		=	main.cpp Harl.cpp

OBJS		=	$(SRCS:.cpp=.o)


.o : .c $(HEADER) Makefile
		@$(CC) $(FLAGS) -c $< -o $(<:cpp=o) $@

$(NAME) : $(OBJS)
		@$(CC) $(OBJS) $(FLAGS) -o $(NAME)$(CHEK)

.SILENT	: $(OBJS) $(NAME)

all	:	$(NAME)

clean	:
			@$(RM) $(OBJS)

fclean	:	clean
			@$(RM) $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re
