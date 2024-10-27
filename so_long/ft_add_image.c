/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_image.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seemil <seemil@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:52:26 by seemil            #+#    #+#             */
/*   Updated: 2024/05/04 17:36:31 by seemil           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_set_image_2(t_so_long *so_long, int x, int y)
{
	if (so_long->map[y][x] == 'C')
	{
		mlx_put_image_to_window(so_long->mlx, so_long->mlx_window,
			so_long->image->floor, x * 64, y * 64);
		mlx_put_image_to_window(so_long->mlx, so_long->mlx_window,
			so_long->image->appa, x * 64, y * 64);
	}
	if (so_long->map[y][x] == 'E')
	{
		mlx_put_image_to_window(so_long->mlx, so_long->mlx_window,
			so_long->image->floor, x * 64, y * 64);
		mlx_put_image_to_window(so_long->mlx, so_long->mlx_window,
			so_long->image->exit, x * 64, y * 64);
	}
	if (so_long->map[y][x] == 'P')
	{
		mlx_put_image_to_window(so_long->mlx, so_long->mlx_window,
			so_long->image->floor, x * 64, y * 64);
		mlx_put_image_to_window(so_long->mlx, so_long->mlx_window,
			so_long->image->aang, x * 64, y * 64);
	}
}

void	ft_set_image(t_so_long *so_long, int x, int y)
{
	if (so_long->map[so_long->exit_y][so_long->exit_x] == '0')
		so_long->map[so_long->exit_y][so_long->exit_x] = 'E';
	if (so_long->map[y][x] == '0')
		mlx_put_image_to_window(so_long->mlx, so_long->mlx_window,
			so_long->image->floor, x * 64, y * 64);
	if (so_long->map[y][x] == '1')
		mlx_put_image_to_window(so_long->mlx, so_long->mlx_window,
			so_long->image->wall, x * 64, y * 64);
	if (so_long->map[y][x] == 'C')
		ft_set_image_2(so_long, x, y);
	if (so_long->map[y][x] == 'E')
		ft_set_image_2(so_long, x, y);
	if (so_long->map[y][x] == 'P')
		ft_set_image_2(so_long, x, y);
}

void	ft_add_image(t_so_long *so_long)
{
	int	x;
	int	y;

	y = 0;
	while (y < so_long->map_y)
	{
		x = -1;
		while (++x <= so_long->map_x)
		{
			if (so_long->map[y][x] == 'C')
				ft_set_image(so_long, x, y);
			if (so_long->map[y][x] == 'E')
				ft_set_image(so_long, x, y);
			if (so_long->map[y][x] == 'P')
				ft_set_image(so_long, x, y);
			if (so_long->map[y][x] == '0')
				ft_set_image(so_long, x, y);
			if (so_long->map[y][x] == '1')
				ft_set_image(so_long, x, y);
		}
		y++;
	}
}
