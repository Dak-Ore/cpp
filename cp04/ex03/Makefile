NAME = a.out
FLAGS = -Wall -Wextra -Werror -g -std=c++98

SOURCES = AMateria.cpp \
		Character.cpp \
		Cure.cpp \
		Ice.cpp \
		MateriaSource.cpp \
		main.cpp
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