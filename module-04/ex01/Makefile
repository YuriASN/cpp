CC := c++
CFLAGS := -Wall -Wextra -Werror -g -std=c++98

INCLUDES := Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp
SRCS := main.cpp Animal.cpp Cat.cpp Dog.cpp WrongCat.cpp WrongAnimal.cpp Brain.cpp
OBJS := $(addprefix output/,$(SRCS:.cpp=.o))
NAME := animals

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDES)
	$(CC) $(CFLAGS) $^ -o $@

output/%.o: %.cpp | output
	$(CC) $(CFLAGS) -c $< -o $@

output:
	mkdir -p output

clean:
	rm -rf output

fclean: clean
	rm -f $(NAME)

re: fclean all