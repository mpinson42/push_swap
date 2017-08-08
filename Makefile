NAME = checker

NAME2 = push_swap

SRC = srcs/main.c srcs/check_arg.c srcs/push1.c srcs/push2.c srcs/checker.c srcs/is_tried.c

SRC2 = srcs/main_push.c srcs/check_arg.c srcs/push1.c srcs/push2.c srcs/ft_go_algo.c srcs/ft_trie.c srcs/ft_algo_5.c srcs/is_tried.c srcs/ft_trie2.c srcs/ft_trie3.c

FLAGS = -Wall -Wextra -Werror

SRC3 =

SRC4 =

all: $(NAME)

%.o : %.c
	gcc -c -o $@ $^

$(NAME): $(SRC) $(SRC2)
	@echo "mpinson" > auteur
	@make -C ./libft all
	cp libft/libft.a lib/
	gcc $(FLAGS) -I ./include/ lib/libft.a -o $(NAME) $(SRC)
	gcc $(FLAGS) -I ./include/ lib/libft.a -o $(NAME2) $(SRC2)


clean:
	/bin/rm -f $(SRC3)
	/bin/rm -f $(SRC4)
	@make -C ./libft clean

fclean: clean
	/bin/rm -f $(NAME)
	/bin/rm -f $(NAME2)
	@make -C ./libft fclean

re: fclean all
