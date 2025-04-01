NAME = a.out
FLAGS = -Wall -Wextra -Werror -std=c++98

SOURCES = Bureaucrat.cpp \
		AForm.cpp \
		PresidentialPardonForm.cpp \
		RobotomyRequestForm.cpp \
		ShrubberyCreationForm.cpp \
		Intern.cpp \
		main.cpp

OBJS = $(SOURCES:.cpp=.o)

$(NAME): $(OBJS)
	c++ $(FLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	c++ $(FLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -rf $(OBJS) *.shrubbery

fclean: clean
	rm -f $(NAME)

re: fclean all