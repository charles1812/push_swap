NAME = push_swap

SRC =	src/fivehundred_sorter.c \
	src/fivehundred_a.c\
	src/fivehundred_b.c\
	src/five_sorter.c \
	src/hundred_sorter.c \
	src/hundred_utils.c \
	src/push.c \
	src/push_swap.c \
	src/push_swap_utils.c \
	src/rev_rotate.c \
	src/rotate.c \
	src/swap.c \
	src/tre_sorter.c \
	src/ft_split.c \
	src/impile.c \
	src/doublechecks.c \

OBJ = ${SRC:.c=.o}

COMPILE = cc

CFLAG = -Wall -Werror -Wextra


#to compile only one ft at the time
.c.o:
	$(COMPILE) $(CFLAG) -c $< -o $(<:.c=.o)


#compile all ft at once and put ion a library
$(NAME): ${OBJ}
	$(COMPILE) $(CFLAG) -o $(NAME) ${OBJ}

#	$(COMPILE) $(CFLAG) -c $(SRC)
#	ar rcs $(NAME) *.o

all:${NAME}


#clear all lib file
clean:
	rm -f ${OBJ}
#clear all .o file
fclean: clean
	rm -f ${NAME}

re: fclean all
