/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seemil <seemil@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 15:09:46 by seemil            #+#    #+#             */
/*   Updated: 2024/05/04 21:50:22 by seemil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_error(t_so_long *so_long, int errcode)
{
	int	i;

	i = 0;
	ft_printf("Error (%d)\n", errcode);
	while (so_long->map[i])
		free(so_long->map[i++]);
	free(so_long->map);
	exit(1);
}

void	ft_error_2(t_so_long *so_long, int errcode)
{
	int	i;

	i = 0;
	ft_printf("Error (%d)\n", errcode);
	while (so_long->map_copy[i])
	{
		if (so_long->map_copy[i] != NULL)
		{
			free(so_long->map_copy[i]);
			free(so_long->map[i]);
		}
		i++;
	}
	free(so_long->map_copy);
	free(so_long->map);
	exit(1);
}
