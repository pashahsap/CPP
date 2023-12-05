# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skrasniq <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 13:42:27 by skrasniq          #+#    #+#              #
#    Updated: 2023/11/15 14:00:04 by skrasniq         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Brain
CC		=	g++
FLAGS		=	-Wall -Werror -Wextra -std=c++98
RM		=	rm -f
CHECK		=	-fsanitize=address

SRCS		=	main.cpp

OBJS		=	$(SRCS:.cpp=.o)


.o : .c $(HEADER) Makefile
		@$(CC) $(FLAGS) -c $< -o $(<:cpp=o) $@

$(NAME)	: $(OBJS)
		$(CC) $(OBJS) $(FLAGS) -o $(NAME) $(CHECK)

.SILENT : $(OBJS) $(NAME)

all     :   $(NAME)

clean   :
			@$(RM) $(OBJS)

fclean  :	clean
			@$(RM) $(NAME)

re      :   fclean all

.PHONY  :   all clean fclean re
