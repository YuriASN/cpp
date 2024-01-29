NAME = fixed
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -g

OBJ = main.o Fixed.o
CLASSES = *.tpp
INCLUDES = Fixed.hpp

all: $(NAME)

.cpp.o: 
	@$(CC) $(FLAGS) -c $<

$(NAME): $(INCLUDES) $(OBJ)
	@$(CC) $(FLAGS) -g -o $@ $(OBJ)
	@echo "\033[92m$(NAME) compiled!\033[m"

clean:
	@/bin/rm -f *.o
	@echo "\033[91mclean done.\033[m"

fclean: clean
	@/bin/rm -f $(NAME) libft.h.gch libft.so
	@echo "\033[91mfclean done.\033[m"

re: fclean all