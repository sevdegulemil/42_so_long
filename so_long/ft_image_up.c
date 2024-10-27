/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_image_up.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seemil <seemil@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:44:16 by seemil            #+#    #+#             */
/*   Updated: 2024/05/04 18:04:19 by seemil           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_image_up(t_so_long *so_long)
{
	int	x;
	int	y;

	so_long->image = malloc(sizeof(t_image));
	so_long->image->appa = mlx_xpm_file_to_image(so_long->mlx,
			"textures/appa.xpm", &x, &y);
	so_long->image->aang = mlx_xpm_file_to_image(so_long->mlx,
			"textures/aang.xpm", &x, &y);
	so_long->image->exit = mlx_xpm_file_to_image(so_long->mlx,
			"textures/exit.xpm", &x, &y);
	so_long->image->wall = mlx_xpm_file_to_image(so_long->mlx,
			"textures/wall.xpm", &x, &y);
	so_long->image->floor = mlx_xpm_file_to_image(so_long->mlx,
			"textures/floor.xpm", &x, &y);
	if (!so_long->image->appa || !so_long->image->aang
		|| !so_long->image->exit || !so_long->image->wall
		|| !so_long->image->floor)
		ft_error_2(so_long, 100);
}
