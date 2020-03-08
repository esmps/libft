NAME = libft.a

HEADER = libft.h

BONUSHEADER = libft_bonus.h

FLAGS = -Wall -Wextra -Werror -g

SRCS = 	ft_atoi.c 			\
 		ft_bzero.c 			\
 		ft_isalnum.c 		\
 		ft_isalpha.c 		\
 		ft_isascii.c 		\
 		ft_isdigit.c 		\
 		ft_isprint.c 		\
 		ft_calloc.c 		\
 		ft_memccpy.c 		\
 		ft_memchr.c 		\
 		ft_memcmp.c 		\
 		ft_memcpy.c 		\
 		ft_memmove.c 		\
 		ft_memset.c 		\
 		ft_putchar.c 		\
 		ft_putchar_fd.c 	\
 		ft_putendl_fd.c 	\
 		ft_putnbr.c 		\
 		ft_putnbr_fd.c 		\
 		ft_putstr.c 		\
 		ft_putstr_fd.c 		\
 		ft_strchr.c 		\
 		ft_strdup.c 		\
 		ft_strjoin.c 		\
 		ft_strlcat.c 		\
		ft_strlcpy.c		\
 		ft_strlen.c 		\
 		ft_strmapi.c 		\
 		ft_strncmp.c 		\
		ft_strnstr.c 		\
 		ft_strrchr.c 		\
  		ft_substr.c 		\
		ft_tolower.c 		\
 		ft_toupper.c 		\
		ft_itoa.c			

BONUSSRCS =  ft_isupper.c	\
			 ft_islower.c	\
			 ft_putchar.c	\
			 ft_putstr.c	\
			 ft_putnbr.c	\
			 ft_strstr.c	\
			 ft_strcpy.c	\
			 ft_abs.c		\
			 ft_pow.c		\
			 ft_isspace.c	

OBJS = $(SRCS:.c=.o)
	
BONUSOBJS = $(BONUSSRCS:.c=.o)

all: $(NAME)

$(NAME):
		gcc -c $(FLAGS) -I $(HEADER) $(BONUSHEADER) $(SRCS) $(BONUSSRCS)
		ar rc $(NAME) $(OBJS) $(BONUSOBJS)
		ranlib $(NAME)
bonus: 
		gcc -c $(FLAGS) -I $(BONUSHEADER) $(BONUSSRCS)
		ar rc $(NAME) $(BONUSOBJS)
		ranlib $(NAME)

clean:
		/bin/rm -f $(OBJS) $(BONUSOBJS)

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
