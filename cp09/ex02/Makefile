NAME = PmergeMe
FLAGS = -Wall -Wextra -Werror -g -std=c++98

SOURCES = main.cpp \
			PmergeMe.cpp

OBJS = $(SOURCES:.cpp=.o)

$(NAME): $(OBJS)
	c++ $(FLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	c++ $(FLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all