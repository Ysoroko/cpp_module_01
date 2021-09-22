# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/21 12:07:49 by ysoroko           #+#    #+#              #
#    Updated: 2021/09/22 14:38:49 by ysoroko          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ------------------------------------- VARS ----------------------------------

NAME		=	replace

SRC			=	main.cpp \

OBJS		=	$(SRC:.cpp=.o)

FILES		=	test.txt.replace \
				empty_file.replace \

COMPILE		=	clang++

# -std=c++98 displays an error if an unauthorized function is left in the code
FLAGS		=	-Wall -Wextra -Werror -std=c++98

EXE_NAME	=	-o $(NAME)

EXEC		=	$(NAME)

# ------------------------------------- RULES ---------------------------------
all: $(NAME)

$(NAME): $(OBJS)
	$(COMPILE) $(FLAGS) $(OBJS) $(EXE_NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(EXEC)
	rm -rf $(FILES);
	
re:	fclean all

.cpp.o:
	${COMPILE} ${FLAGS} -c $< -o ${<:.cpp=.o}

# ------------------------------------- TESTS ---------------------------------

test1: all
	./$(EXEC) test.txt 9 nine

test2: all
	./$(EXEC) empty_file "a" "b"

test3: all
	./$(EXEC) non_existing_file a b

test4: all
	./$(EXEC) test.txt "" ""

.PHONY:	all clean fclean re