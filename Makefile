NAME = libasm.a

FLAGS = -f macho64

SRCS = ft_strlen.s ft_strcpy.s ft_strcmp.s \
	   ft_write.s ft_read.s ft_strdup.s ft_atoi.s \
	   ft_atoi_base.s ft_lst_size.s \
	   ft_lst_add_front.s

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
	gcc main.c -L. -lasm -L../corr/ft_printf/ -lftprintf	-g
	./a.out
