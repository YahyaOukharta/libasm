NAME = libasm.a

FLAGS = -f macho64

SRCS = ft_strlen.s ft_strcpy.s ft_strcmp.s \
	   ft_write.s ft_read.s ft_strdup.s

all: $(SRCS)

clean :
	rm -rf $(SRCS:.s=.o)
