NAME = ScavTrap
FLAGS = -Wall -Wextra -Werror -std=c++98

SOURCES = main.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp

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