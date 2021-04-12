CC = gcc
CFLAG = -Wall -Wextra -Werror -c

SRCDIR = srcs
INCDIR = includes
TARGET = libft.a
SRCS = $(wildcard $(SRCDIR)/*.c)
OBJS = $(SRCS:.c=.o)

all: $(TARGET)

%.o: %.c
	$(CC) $(CFLAG) $< -o $@ -I ${INCDIR}

${TARGET}: ${OBJS}
	ar rc $@ ${OBJS}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${TARGET}

re: fclean all	
