NAME	   = libft.a
CC		   = gcc
CFLAGS	   = -Wall -Werror -Wextra
RM		   = rm -f

SRC		   = ft_atoi.c ft_bzero.c ft_isalpha.c 				\
			 ft_isprint.c ft_memset.c ft_strlen.c			\
			 ft_isascii.c ft_memcmp.c ft_isascii.c		 	\
			 ft_strrchr.c ft_strchr.c ft_tolower.c 			\
			 ft_isalnum.c ft_isdigit.c ft_memcpy.c 			\
			 ft_substr.c ft_toupper.c ft_memchr.c 			\
			 ft_strlcpy.c ft_strdup.c  ft_memmove.c		    \
			 ft_strncmp.c ft_strnstr.c ft_strlcat.c 		\
			 ft_calloc.c ft_putchar_fd.c ft_putstr_fd.c 	\
			 ft_putendl_fd.c ft_putnbr_fd.c ft_strjoin.c 	\
			 ft_split.c ft_strtrim.c ft_striteri.c 			\
			 ft_strmapi.c ft_itoa.c ft_isspace.c			\
			  ft_lstnew.c ft_lstadd_front.c	ft_lstsize.c	\
			 ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c	\
			 ft_lstclear.c ft_lstiter.c ft_lstmap.c			\
			 get_next_line.c ft_atol.c

OBJ			= $(SRC:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

$(NAME): $(OBJ)
	ar -rcs $@ $^
clean:
	$(RM) $(OBJ) 

fclean: clean
	$(RM) $(NAME)

re: all fclean

.PHONY: all clean fclean re 
