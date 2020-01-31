NAME = libasm.a

FLAGS = -f macho64

SRCS = ft_strlen.s ft_strcpy.s ft_strcmp.s \
	   ft_write.s ft_read.s ft_strdup.s

OBJS = $(SRCS:.s=.o)

all: $(NAME)

$(NAME):
	$(foreach file, $(SRCS), nasm $(FLAGS) $(file);)
	ar -rc $(NAME) *.o 

clean:
	rm -f a.out
	rm -rf *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

c : re
	gcc main.c -L. -lasm
	./a.out
