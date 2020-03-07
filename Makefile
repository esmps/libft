NAME = libft.a

HEADER = libft.h

FLAGS = -Wall -Wextra -Werror -g

SRCS = 	ft_atoi.c 			\
 		ft_bzero.c 			\
 		ft_isalnum.c 		\
 		ft_isalpha.c 		\
 		ft_isascii.c 		\
 		ft_isdigit.c 		\
 		ft_isprint.c 		\
 		ft_calloc.c 		\
 		ft_memalloc.c		\
		ft_memccpy.c 		\
 		ft_memchr.c 		\
 		ft_memcmp.c 		\
 		ft_memcpy.c 		\
 		ft_memdel.c 		\
 		ft_memmove.c 		\
 		ft_memset.c 		\
 		ft_putchar.c 		\
 		ft_putchar_fd.c 	\
 		ft_putendl.c 		\
 		ft_putendl_fd.c 	\
 		ft_putnbr.c 		\
 		ft_putnbr_fd.c 		\
 		ft_putstr.c 		\
 		ft_putstr_fd.c 		\
 		ft_strcat.c 		\
 		ft_strchr.c 		\
 		ft_strclr.c 		\
 		ft_strcmp.c 		\
 		ft_strcpy.c 		\
 		ft_strdel.c 		\
 		ft_strdup.c 		\
 		ft_strequ.c 		\
 		ft_striter.c 		\
 		ft_striteri.c 		\
 		ft_strjoin.c 		\
 		ft_strlcat.c 		\
		ft_strlcpy.c		\
 		ft_strlen.c 		\
 		ft_strmap.c 		\
 		ft_strmapi.c 		\
 		ft_strncat.c 		\
 		ft_strncmp.c 		\
 		ft_strncpy.c 		\
 		ft_strnequ.c 		\
 		ft_strnew.c 		\
 		ft_strnstr.c 		\
 		ft_strrchr.c 		\
  		ft_strstr.c 		\
 		ft_substr.c 		\
		ft_split.c			\
 		ft_strtrim.c 		\
 		ft_tolower.c 		\
 		ft_toupper.c 		\
		ft_isspace.c		\
		ft_countwords.c		\
		ft_pow.c			\
		ft_itoa.c			\
		ft_abs.c			\
		ft_lstnew.c			\
		ft_lstdelone.c		\
		ft_lstdel.c			\
		ft_lstadd.c			\
		ft_lstiter.c		\
		ft_lstmap.c			\
		ft_lstadd_front.c	\
		ft_lstadd_back.c	\
		ft_lstsize.c		\
		ft_lstlast.c		\
		ft_lstclear.c		\

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
		gcc -c $(FLAGS) -I $(HEADER) $(SRCS)
		ar rc $(NAME) $(OBJS)
		ranlib $(NAME)

clean:
		/bin/rm -f $(OBJS)

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
