NAME 			=	PhoneBook
CC				=	g++
FLAGS			=	-Wall -Wextra -Werror -std=c++98
RM				=	rm -f
CHECK			=	-fsanitize=address

SRCS	=	PhoneBook.cpp Contact.cpp main.cpp

OBJS	=	$(SRCS:.cpp=.o)


.o : .c $(HEADER) Makefile
		@$(CC) $(FLAGS) -c $< -o $(<:cpp=o) $@

$(NAME): $(OBJS)
		$(CC) $(OBJS) $(FLAGS) -o $(NAME) $(CHECK)

.SILENT : $(OBJS) $(NAME)

all     :   $(NAME)

clean   :
			@$(RM) $(OBJS)

fclean  :	clean
			@$(RM) $(NAME)

re      :   fclean all

.PHONY  :   all clean fclean re