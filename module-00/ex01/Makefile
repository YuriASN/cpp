NAME = contacts.out
CC = c++
FLAGS = -Wall -Wextra -Werror
SFLAG = -std=c++98

SRC = Contacts.cpp main.cpp PhoneBook.cpp set_data.cpp
OBJ = $(SRC: .cpp=.o)
CLASSES = *.tpp

all: $(NAME)

$(NAME):
	@$(CC) $(FLAGS) $(SFLAG) -c $(SRC)
	@$(CC) $(FLAGS) $(SFLAG) -g $(OBJ) $< -o $@
	@echo "\033[92mMegaphone compiled!\033[m"

clean:
	@/bin/rm -f *.o
	@echo "\033[91mclean done.\033[m"

fclean: clean
	@/bin/rm -f $(NAME) libft.h.gch libft.so
	@echo "\033[91mfclean done.\033[m"

re: fclean all
