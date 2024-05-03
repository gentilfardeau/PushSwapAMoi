NAME = push_swap

SRCS =  srcs/main.c srcs/parsing.c srcs/push.c srcs/reverse_rotate.c \
        srcs/rotate.c srcs/swap.c srcs/sorting.c \
        utils/error_utils.c  utils/nodes_utils.c  utils/number_utils.c \
        utils/output_utils.c utils/stack_utils.c \
		include/split.c \
		

OBJS = $(SRCS:.c=.o)

LIBS = include/printf/libftprintf.a

HEADER = /include/push_swap.h

CFLAGS = -Wall -Werror -Wextra

all : $(NAME)

$(NAME) : $(OBJS)
		cc $(CFLAGS) $(OBJS) $(LIBS) -o $(NAME)

clean :
		rm -f $(OBJS)

fclean : 
		rm -f $(NAME) $(OBJS)

re: fclean all

.PHONY : fclean clean all re
