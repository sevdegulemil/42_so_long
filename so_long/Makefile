INCLUDES_MAC = -Imlx

MLX_FLAGS_MAC = -Lmlx -lmlx -framework OpenGL -framework AppKit 

SRCS =	ft_printf/ft_printf.c \
		ft_printf/ft_hexadecimal.c \
		ft_printf/ft_integer.c \
		ft_printf/ft_pointer_adress.c \
		ft_printf/ft_putcharacter_len.c \
		ft_printf/ft_string.c \
		ft_printf/ft_unsigned_int.c \
		get_next_line/get_next_line.c \
		get_next_line/get_next_line_utils.c \
		ft_fill_zero.c \
		ft_get_map.c \
		ft_check_map.c \
		ft_fill_flood.c \
		error.c \
		ft_image_up.c \
		ft_add_image.c \
		ft_game_closed.c \
		key_hook.c \
		ft_win_game.c \
		check_extension.c \
		main.c


OBJ = $(SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror -g

CC = gcc

NAME = so_long

%.o: %c
	$(CC) -g $(INCLUDES_MAC) -c $< -o $@

$(NAME): $(OBJ)
	make -C mlx
	$(CC) $(OBJ) $(MLX_FLAGS_MAC) -o $(NAME) 

all: $(NAME)

fclean: clean
	rm -rf $(NAME)

clean:
	make clean -C mlx
	rm -rf ft_printf/*.o
	rm -rf libft/*.o
	rm -rf *.o
	rm -rf get_next_line/*.o

re: fclean all

.PHONY: all clean fclean re