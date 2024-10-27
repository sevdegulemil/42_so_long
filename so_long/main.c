/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seemil <seemil@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 14:32:59 by seemil            #+#    #+#             */
/*   Updated: 2024/05/05 15:14:34 by seemil           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int args, char **argv)
{
	t_so_long	so_long;
	char		*file_extension;

	if (args == 1)
		return (0);
	file_extension = ft_strrchr(argv[1], '.');
	if (file_extension != NULL && ft_strcmp(file_extension, ".ber") == 0)
	{
		so_long.mlx = mlx_init();
		ft_fill_zero(&so_long);
		ft_get_map(&so_long, argv[1]);
		ft_check_map(&so_long);
		ft_fill_flood(&so_long, argv[1]);
		so_long.mlx_window = mlx_new_window(so_long.mlx,
				(so_long.map_x - 1) * 64, so_long.map_y * 64, "so_long");
		ft_image_up(&so_long);
		ft_add_image(&so_long);
		mlx_hook(so_long.mlx_window, 2, 0, key_hook, &so_long);
		mlx_hook(so_long.mlx_window, 17, 0, ft_game_closed, &so_long);
		mlx_loop(so_long.mlx);
	}
	else
		ft_printf("Error\nCHECK FILE EXTENSION");
	return (0);
}
