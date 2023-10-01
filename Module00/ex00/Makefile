Src			=	megaphone.cpp \

NAME		=	megaphone

OBJS_SRC	=	$(Src:.cpp=.o)

OBJS		=	$(OBJS_SRC)

FLAGS	=	-Werror -Wextra -Wall -std=c++98

all		:	$(NAME)

$(NAME)	:	$(OBJS)
				g++ $(OBJS_SRC) $(FLAGS) -o $(NAME)

clean	:
			@rm -rf $(OBJS_SRC)

fclean	:	clean
			@rm -rf $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re
