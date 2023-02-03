NAME = get_next_line
NAME_STDIN = get_next_line_stdin
NAME_B = get_next_line_bonus
SRC = get_next_line.c \
	get_next_line_utils.c \
	main.c
SRC_STDIN = get_next_line.c \
	get_next_line_utils.c \
	main.c
SRC_B = get_next_line_bonus.c \
	get_next_line_utils_bonus.c \
	main_bonus.c
CFLAGS = -Wall -Wextra -Werror -D BUFFER_SIZE=42
CC = cc
INCL = get_next_line.h
INCL_B = get_next_line_bonus.h
R = rm -f

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -o $(NAME) -I $(INCL)

stdin:
	$(CC) $(CFLAGS) $(SRC_STDIN) -o $(NAME_STDIN) -I $(INCL)

bonus:
	$(CC) $(CFLAGS) $(SRC_B) -o $(NAME_B) -I $(INCL_B)

clean:
	$(R) $(NAME) $(NAME_STDIN) $(NAME_B)

fclean:
	$(R) $(NAME) $(NAME_STDIN) $(NAME_B)

re: fclean all

test: all
	./$(NAME) prometheus.txt

test_bonus: bonus
	./$(NAME_B) file1.txt file2.txt file3.txt
