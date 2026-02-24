NAME	= libftprintf.a
CC		= cc
CFLAGS	= -Wall -Wextra -Werror -Ilibft
AR		= ar rcs
RM		= rm -f

# List of functions
SRCS 	= ft_printf.c ft_printf_char.c ft_printf_hex.c ft_printf_nbr.c \
		  ft_printf_ptr.c ft_printf_str.c ft_printf_unbr.c

# Generation of object file names (.o) from .c scripts
OBJS	= $(SRCS:.c=.o)

# Compile everything
all: $(NAME)



# Creation of library of printf
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

# Compilation from .c to .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


# Clean files .o
clean:
	$(RM) $(OBJS)

# fclean to delete onjects and libary .a
fclean: clean
	$(RM) $(NAME)

# re total clean and recompilation
re: fclean all

# This rules are not files
.PHONY: all clean fclean re