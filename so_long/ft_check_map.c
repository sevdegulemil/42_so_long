/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seemil <seemil@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 15:03:16 by seemil            #+#    #+#             */
/*   Updated: 2024/05/04 19:50:15 by seemil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_check_map_3(t_so_long *so_long)
{
	if (so_long->player_count != 1 || so_long->exit_count != 1
		|| so_long->collectible_count < 1)
		ft_error(so_long, 1);
	if (so_long->map_x >= 41 || so_long->map_y >= 22)
		ft_error(so_long, 2);
}

void	ft_check_map_2(t_so_long *so_long, int y, int x)
{
	y = 0;
	while (y < so_long->map_y)
	{
		x = 0;
		while (x < so_long->map_x)
		{
			if (so_long->map[y][x] == 'P')
			{
				so_long->player_count += 1;
				so_long->player_x = x;
				so_long->player_y = y;
			}
			if (so_long->map[y][x] == 'E')
			{
				so_long->exit_count += 1;
				so_long->exit_x = x;
				so_long->exit_y = y;
			}
			if (so_long->map[y][x] == 'C')
				so_long->collectible_count += 1;
			x++;
		}
		y++;
	}
	ft_check_map_3(so_long);
}

void	ft_check_map_new_line(t_so_long *so_long)
{
	int	y;

	y = -1;
	while (++y < so_long->map_y)
	{
		if (y == so_long->map_y - 1
			&& so_long->map[y][so_long->map_x - 1] != '\0')
			ft_error(so_long, 6);
		else if (y < so_long->map_y - 1
			&& (so_long->map[y][so_long->map_x - 1] != '\n'
			|| so_long->map[y][so_long->map_x] != '\0'))
			ft_error(so_long, 5);
	}
	ft_check_map_2(so_long, 0, 0);
}

void	ft_check_map(t_so_long *so_long)
{
	int	y;
	int	x;

	y = -1;
	while (++y < so_long->map_y)
	{
		x = -1;
		while (++x < so_long->map_x - 1)
		{
			if ((y == 0 || y == so_long->map_y - 1)
				|| (x == 0 || x == so_long->map_x - 2))
			{
				if (so_long->map[y][x] != '1')
					ft_error(so_long, 3);
			}
			if (!ft_strchr("10PEC", so_long->map[y][x]))
				ft_error(so_long, 4);
		}
	}
	ft_check_map_new_line(so_long);
}
