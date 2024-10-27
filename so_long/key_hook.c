/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seemil <seemil@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 11:06:07 by seemil            #+#    #+#             */
/*   Updated: 2024/05/04 18:14:23 by seemil           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	key_code_1(t_so_long *movement, int x, int y)
{
	movement->moves_number += 1;
	ft_printf("Moves Number : %d\n", movement->moves_number);
	if (movement->map[y + 1][x] == '0' || movement->map[y + 1][x] == 'C')
	{
		if (movement->map[y + 1][x] == 'C')
			movement->c_number++;
		movement->map[y][x] = '0';
		movement->map[y + 1][x] = 'P';
		movement->player_y++;
	}
	if (movement->map[y + 1][x] == 'E')
	{
		if (movement->collectible_count == movement->c_number)
			ft_win_game(movement);
		else
		{
			movement->map[y][x] = '0';
			movement->map[y + 1][x] = 'P';
			movement->player_y++;
		}
	}
}

void	key_code_13(t_so_long *movement, int x, int y)
{
	movement->moves_number += 1;
	ft_printf("Moves Number : %d\n", movement->moves_number);
	if (movement->map[y - 1][x] == '0' || movement->map[y - 1][x] == 'C')
	{
		if (movement->map[y - 1][x] == 'C')
			movement->c_number++;
		movement->map[y][x] = '0';
		movement->map[y - 1][x] = 'P';
		movement->player_y--;
	}
	if (movement->map[y - 1][x] == 'E')
	{
		if (movement->collectible_count == movement->c_number)
			ft_win_game(movement);
		else
		{
			movement->map[y][x] = '0';
			movement->map[y - 1][x] = 'P';
			movement->player_y--;
		}
	}
}

void	key_code_0(t_so_long *movement, int x, int y)
{
	movement->moves_number += 1;
	ft_printf("Moves Number : %d\n", movement->moves_number);
	if (movement->map[y][x - 1] == '0' || movement->map[y][x - 1] == 'C')
	{
		if (movement->map[y][x - 1] == 'C')
			movement->c_number++;
		movement->map[y][x] = '0';
		movement->map[y][x - 1] = 'P';
		movement->player_x--;
	}
	if (movement->map[y][x - 1] == 'E')
	{
		if (movement->collectible_count == movement->c_number)
			ft_win_game(movement);
		else
		{
			movement->map[y][x] = '0';
			movement->map[y][x - 1] = 'P';
			movement->player_x--;
		}
	}
}

void	key_code_2(t_so_long *movement, int x, int y)
{
	movement->moves_number += 1;
	ft_printf("Moves Number : %d\n", movement->moves_number);
	if (movement->map[y][x + 1] == '0' || movement->map[y][x + 1] == 'C')
	{
		if (movement->map[y][x + 1] == 'C')
			movement->c_number++;
		movement->map[y][x] = '0';
		movement->map[y][x + 1] = 'P';
		movement->player_x++;
	}
	if (movement->map[y][x + 1] == 'E')
	{
		if (movement->collectible_count == movement->c_number)
			ft_win_game(movement);
		else
		{
			movement->map[y][x] = '0';
			movement->map[y][x + 1] = 'P';
			movement->player_x++;
		}
	}
}

int	key_hook(int key_code, t_so_long *movement)
{
	int	x;
	int	y;

	x = movement->player_x;
	y = movement->player_y;
	if (key_code == 53)
		ft_game_closed(movement);
	if (key_code == 2 && movement->map[y][x + 1] != '1')
		key_code_2(movement, x, y);
	if (key_code == 0 && movement->map[y][x - 1] != '1')
		key_code_0(movement, x, y);
	if (key_code == 13 && movement->map[y - 1][x] != '1')
		key_code_13(movement, x, y);
	if (key_code == 1 && movement->map[y + 1][x] != '1')
		key_code_1(movement, x, y);
	ft_add_image(movement);
	return (0);
}
