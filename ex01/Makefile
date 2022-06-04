
CC = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = phonebook
SRCS = Contact.cpp PhoneBook.cpp main.cpp utils.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

debug: CXXFLAGS += -fsanitize=address -g
debug: $(NAME)

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

.PHONY: all, clean, fclean, re, debug, dre
