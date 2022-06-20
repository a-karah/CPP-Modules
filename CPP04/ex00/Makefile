CC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = zoo
SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

debug: CXXFLAGS += -g
debug: all

address: CXXFLAGS += -fsanitize=address
address: re

$(NAME): $(OBJS)
	$(CC) $(CXXFLAGS) $^ -o $(NAME)

%.o: %.cpp
	$(CC) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

dre: fclean debug

.PHONY: all clean fclean re debug dre address