/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_win_game.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seemil <seemil@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 12:20:26 by seemil            #+#    #+#             */
/*   Updated: 2024/05/04 18:06:22 by seemil           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_win_game(t_so_long *so_long)
{
	int	i;

	i = 0;
	ft_printf("YOU WIN\n");
	while (so_long->map[i])
	{
		if (so_long->map[i] != NULL)
			free(so_long->map[i]);
		i++;
	}
	free(so_long->map);
	exit(1);
}
