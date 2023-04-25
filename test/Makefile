NAME = get_next_line
NAME_STDIN = get_next_line_stdin
NAME_B = get_next_line_bonus

SRC = get_next_line.c \
	get_next_line_utils.c \
	main.c
SRC_STDIN = get_next_line.c \
	get_next_line_utils.c \
	main_stdin.c
SRC_B = get_next_line_bonus.c \
	get_next_line_utils_bonus.c \
	main_bonus.c

OBJS = $(SRC:.c=.o)
OBJS_STDIN = $(SRC_STDIN:.c=.o)
OBJS_B = $(SRC_B:.c=.o)

CFLAGS = -Wall -Wextra -Werror -D BUFFER_SIZE=42
CC = cc
INCL = .
R = rm -f
YELLOW = \033[1;33m

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SRC) -I $(INCL)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

stdin:
	$(CC) $(CFLAGS) -c $(SRC_STDIN) -I $(INCL)
	$(CC) $(CFLAGS) $(OBJS_STDIN) -o $(NAME_STDIN)

bonus:
	$(CC) $(CFLAGS) -c $(SRC_B) -I $(INCL)
	$(CC) $(CFLAGS) $(OBJS_B) -o $(NAME_B)

clean:
	$(R) $(OBJS) $(OBJS_STDIN) $(OBJS_B)

fclean: clean
	$(R) $(NAME) $(NAME_STDIN) $(NAME_B)

re: fclean all

test: all
	@echo "$(YELLOW)>>Testing get_next_line with prometheus.txt ...$(NOC)"
	./$(NAME) prometheus.txt

test_bonus: bonus
	@echo "$(YELLOW)>>Testing get_next_line_bonus with file1-3.txt ...$(NOC)"
	./$(NAME_B) file1.txt file2.txt file3.txt
