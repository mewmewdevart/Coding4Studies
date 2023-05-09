NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
REMOVE = rm -rf

SOURCE = ft_isalnum.c \
 ft_isalpha.c \
 ft_isascii.c \
 ft_isdigit.c \
 ft_isprint.c \
 ft_islower.c \
 ft_isupper.c \
 ft_strlen.c \

# .c files = .o files
OBJECTS = $(SOURCE:.c=.o)

# compilation and linking
all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) $(NAME) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	$(AR) $(NAME) $@ $^

clean:
	$(REMOVE) $(OBJECTS)

fclean: clean
	$(REMOVE) $(NAME)

re: fclean all

.PHONY: all clean fclean re
