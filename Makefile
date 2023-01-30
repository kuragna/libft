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
			 ft_strmapi.c ft_itoa.c
BONUS_SRC =	 ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c 	\
			 ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
			 ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
BONUS_OBJ =  $(BONUS_SRC:.c=.o)
SRC_OBJ   =  $(SRC:.c=.o)
OBJS	  =  $(SRC_OBJ) $(BONUS_OBJ)

all: $(NAME)

bonus: 
	make "SRC=$(BONUS_SRC)"
%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

$(NAME): $(SRC_OBJ)
	ar -rcs $@ $^
clean:
	$(RM) $(OBJS) 

fclean: clean
	$(RM) $(NAME)

re: all fclean

.PHONY: all clean fclean re bonus
