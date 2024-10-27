/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_game_closed.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seemil <seemil@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 11:15:15 by seemil            #+#    #+#             */
/*   Updated: 2024/05/04 17:59:38 by seemil           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_game_closed(t_so_long *so_long)
{
	int	i;

	i = 0;
	ft_printf("Game Closed\n");
	while (so_long->map[i])
	{
		free(so_long->map[i]);
		i++;
	}
	free(so_long->map);
	exit(1);
}
