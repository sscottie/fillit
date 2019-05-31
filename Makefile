NAME = fillit
INCLUDE_DIR = includes
SOURCE_DIR = srcs
FLAGS = -Wall -Wextra -Werror
SOURCES = *.c
OBJECTS = $(SOURCES:.c=.o)

.PHONY: $(NAME) all clean fclean re

VPATH = $(SOURCE_DIR) $(INCLUDE_DIR)
all: $(NAME)

$(NAME): $(SOURCES)
	@gcc -I$(INCLUDE_DIR) $(FLAGS) $^ -o $@

clean:
	@rm -f $(OBJECTS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
