########################################################################################################################
#                                                       VARIABLE                                                       #
########################################################################################################################
NAME		:=	firstCanon

HEADERS 	:=	Fixed.hpp

SRCS		:=	main.cpp Fixed.cpp
SRC_DIR 	:=	./

OBJS_DIR	:=	.objs/
OBJS 		:=	$(addprefix $(OBJS_DIR), $(SRCS:.cpp=.o))


########################################################################################################################
#                                                        FLAGS                                                         #
########################################################################################################################

C++ 		:=	c++
CPPFLAGS 	:=	-Wall -Wextra -Werror -std=c++98

RM			:=	rm -rf

all	:	obj $(NAME)

obj	:
	@mkdir -p $(OBJS_DIR)

$(NAME)	:	$(OBJS)
	$(C++) $^ $(CPPFLAGS) -o $(NAME)

$(OBJS_DIR)%.o	:	$(SRC_DIR)%.cpp Makefile $(HEADERS)
	$(C++) $(CPPFLAGS) -c $< -o $@

clean		:
				$(RM) $(OBJS) $(OBJS_DIR)

fclean		:	clean
				$(RM) $(NAME)

re			:	fclean all

.PHONY		:	all clean fclean re