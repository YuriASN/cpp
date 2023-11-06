NAME = harlFilter
CC = c++
FLAGS = -Wall -Wextra -Werror
SFLAG = -std=c++98

SRC = main.cpp Harl.cpp
OBJ = $(SRC: .cpp=.o)

all: $(NAME)

$(NAME):
	@$(CC) $(FLAGS) $(SFLAG) -c $(SRC)
	@$(CC) $(FLAGS) $(SFLAG) -g $(OBJ) -o $(NAME)
	@echo "\033[92m$(NAME) compiled!\033[m"

clean:
	@/bin/rm -f *.o
	@echo "\033[91mclean done.\033[m"

fclean: clean
	@/bin/rm -f $(NAME) libft.h.gch libft.so
	@echo "\033[91mfclean done.\033[m"

re: fclean all