NAME = Tester

CC = cc

FLAGS = -Wall -Wextra -Werror

SRC = test_split.c ../*.c 

OBJ = $(SRC:%.c=%.o)

HEADER = ../libft.h

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) I-$(HEADER) -o $@
	$@

%.o: %.c 
	$(CC) $(FLAGS) -c $< -o $@
	

