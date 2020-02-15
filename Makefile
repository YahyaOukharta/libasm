NAME = libasm.a

FLAGS = -f macho64

SRCS = ft_strlen.s ft_strcpy.s ft_strcmp.s \
	   ft_write.s ft_read.s ft_strdup.s ft_atoi.s

BONUS_SRCS = ft_list_size.s ft_list_push_front.s

OBJS = $(SRCS:.s=.o)
BONUS_OBJS = $(BONUS_SRCS:.s=.o)

all: $(NAME)

$(NAME):
	$(foreach file, $(SRCS), nasm $(FLAGS) $(file);)
	ar -rc $(NAME) $(OBJS) 

bonus: $(NAME)
	$(foreach file, $(BONUS_SRCS), nasm $(FLAGS) $(file);)
	ar -rs $(NAME) $(BONUS_OBJS)

clean:
	rm -f a.out
	rm -f *.o
	rm -rf a.out.dSYM

fclean: clean
	rm -f $(NAME)

re: fclean all

c : re
	gcc main.c -L. -lasm -O3 -fsanitize=address
	clear
	@./a.out

b : re bonus
	gcc main_bonus.c -L. -lasm -O3 -fsanitize=address
	#clear
	@./a.out
