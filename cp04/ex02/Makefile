NAME = Animals
FLAGS = -Wall -Wextra -Werror -g -std=c++98

SOURCES = Cat.cpp \
		Dog.cpp \
		Animal.cpp \
		main.cpp \
		Brain.cpp
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