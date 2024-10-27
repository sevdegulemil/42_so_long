/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seemil <seemil@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 14:28:49 by seemil            #+#    #+#             */
/*   Updated: 2024/08/08 17:27:29 by seemil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "ft_printf/ft_printf.h"
# include "get_next_line/get_next_line.h"
# include "mlx/mlx.h"
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

typedef struct s_image
{
	void	*appa;
	void	*exit;
	void	*aang;
	void	*floor;
	void	*wall;
}			t_image;

typedef struct s_so_long
{
	void	*mlx;
	void	*mlx_window;
	char	**map;
	char	**map_copy;
	int		map_y;
	int		map_x;
	int		player_y;
	int		player_x;
	int		exit_y;
	int		exit_x;
	int		collectible_count;
	int		exit_count;
	int		player_count;
	int		moves_number;
	int		c_number;
	t_image	*image;
}			t_so_long;

typedef struct s_point
{
	int		x;
	int		y;
}			t_point;

int			ft_strncmp(const char *s1, const char *s2, size_t n);

//	ft_fill_zero.c
void		ft_fill_zero(t_so_long *so_long);

//	error.c
void		ft_error(t_so_long *so_long, int errcode);
void		ft_error_2(t_so_long *so_long, int errcode);

//	ft_get_map.c
void		ft_get_map(t_so_long *so_long, char *str);
int			ft_line_counter(int fd);
void		ft_check_extension(char *argv);

//	ft_check_map.c
void		ft_check_map(t_so_long *so_long);
void		ft_check_map_2(t_so_long *so_long, int y, int x);
void		ft_check_map_3(t_so_long *so_long);

//	ft_fill_flood.c
void		ft_fill_flood(t_so_long *so_long, char *str);
void		ft_fill_flood_2(t_so_long *so_long);
void		ft_fill_flood_3(char **map_copy, t_point map, t_point player);
void		ft_fill_f(char **map_copy, t_point map, int y, int x);
void		ft_fill_f_check(t_so_long *so_long);

//	ft_image_up.c
void		ft_image_up(t_so_long *so_long);

//	ft_add_image.c
void		ft_add_image(t_so_long *so_long);
void		ft_set_image(t_so_long *so_long, int x, int y);
void		ft_set_image_2(t_so_long *so_long, int x, int y);

int			ft_game_closed(t_so_long *so_long);

void		ft_win_game(t_so_long *so_long);

//	key_hook.c
int			key_hook(int key_code, t_so_long *movement);
void		key_code_2(t_so_long *movement, int x, int y);
void		key_code_0(t_so_long *movement, int x, int y);
void		key_code_13(t_so_long *movement, int x, int y);
void		key_code_1(t_so_long *movement, int x, int y);

//	check_extension.c
char		*ft_strrchr(const char *s, int c);
int			ft_strcmp(const char *s1, const char *s2);

#endif
