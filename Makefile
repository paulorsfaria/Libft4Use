NAME = libft.a
############################### Compilation ####################################                         
CFLAGS = -Wall -Wextra -Werror
CC = cc
###############################    Files    ####################################                         
SRCS =  ft_printf/ft_printf.c ft_printf/ft_findmytype.c ft_printf/ft_printf_utils.c ft_printf/ft_print_ptr.c \
                ft_printf/ft_print_decimal.c  ft_printf/ft_print_unsigned.c ft_printf/ft_print_hexadecimal.c \
                libft/ft_itoa.c libft/ft_itoa_unsigned.c libft/ft_strlen.c \
                libft/ft_putchar_fd.c libft/ft_putstr_fd.c\
                libft/ft_atoi.c libft/ft_isdigit.c libft/ft_strchr.c libft/ft_strnstr.c libft/ft_bzero.c \
                libft/ft_isprint.c libft/ft_strlcat.c libft/ft_strrchr.c libft/ft_isalnum.c libft/ft_memcpy.c \
                libft/ft_strlcpy.c libft/ft_tolower.c libft/ft_isalpha.c libft/ft_strlen.c \
                libft/ft_toupper.c libft/ft_isascii.c libft/ft_memset.c libft/ft_strncmp.c libft/ft_memmove.c\
                libft/ft_memcmp.c libft/ft_memchr.c libft/ft_substr.c libft/ft_strjoin.c libft/ft_strdup.c\
                libft/ft_calloc.c libft/ft_strtrim.c libft/ft_strmapi.c libft/ft_striteri.c libft/ft_itoa.c\
                libft/ft_split.c libft/ft_putchar_fd.c libft/ft_putstr_fd.c libft/ft_putendl_fd.c\
                libft/ft_putnbr_fd.c gnl/get_next_line_bonus.c gnl/get_next_line_utils_bonus.c\
                libft/ft_lstnew.c libft/ft_lstadd_front.c libft/ft_lstsize.c libft/ft_lstlast.c\
                libft/ft_lstadd_back.c libft/ft_lstdelone.c libft/ft_lstclear.c libft/ft_lstiter.c libft/ft_lstmap.c

OBJS = $(SRCS:.c=.o)
all: $(NAME)

BONUS_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

bonus: $(OBJS) $(BONUS_OBJS)
	ar rc $(NAME) $(OBJS) $(BONUS_OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

so:
	$(CC) -fPIC $(CFLAGS) $(SRCS)
	cc -shared -o libft.so $(OBJS)