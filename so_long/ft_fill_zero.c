/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_zero.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seemil <seemil@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 14:51:07 by seemil            #+#    #+#             */
/*   Updated: 2024/05/04 17:58:42 by seemil           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_fill_zero(t_so_long *so_long)
{
	so_long->map_x = 0;
	so_long->map_y = 0;
	so_long->player_x = 0;
	so_long->player_y = 0;
	so_long->collectible_count = 0;
	so_long->exit_count = 0;
	so_long->player_count = 0;
	so_long->moves_number = 0;
	so_long->c_number = 0;
}
