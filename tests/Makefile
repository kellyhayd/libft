NAME = Tester

CC = cc

FLAGS = -Wall -Wextra -Werror

SRC = test_split.c ../*.c 

OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ) libft.a
	$(CC) $(FLAGS) test_split.c -I../ -L../ -lft -o $@

%.o: %.c 
	$(CC) $(FLAGS) -I../ -c $< -o $@
	
libft.a: 
	cd .. && $(MAKE) all

clean:
	rm -f *.o
