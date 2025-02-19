NAME = megaphone
FLAGS = -Wall -Wextra -Werror -std=c++98

SOURCES = megaphone.cpp

OBJS = $(SOURCES:.c=.o)

$(NAME): $(OBJS)
	c++ $(FLAGS) -o $(NAME) $(OBJS)

%.o: %.c
	c++ $(FLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all