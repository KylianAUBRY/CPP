NAME	=	braiinzz

SRCS	=	main.cpp	\
			Zombie.cpp \
			newZombie.cpp \
			randomChump.cpp \

OBJ =	${SRCS:.cpp=.o}

CC =	c++

CFLAGS	=	-Wall -Wextra -Werror -g -std=c++98

.c.o:
			$(CC) $(CFLAGS) -cpp $< -o $(<:.cpp=.o)

$(NAME): ${OBJ}
		$(CC) $(CFLAGS) -o $(NAME) ${OBJ}

all:	${NAME}

clean:
		rm -f ${OBJ}

fclean:	clean
		rm -f ${NAME}

re:	fclean all

.PHONY: all clean fclean re