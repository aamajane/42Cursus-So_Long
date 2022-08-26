/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_enemy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 21:31:14 by aamajane          #+#    #+#             */
/*   Updated: 2022/05/07 17:26:38 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	move_enemy(t_data *data)
{
	if (data->map[data->y][data->x + 1] == 'P' || \
		data->map[data->y][data->x - 1] == 'P')
	{
		if (data->map[data->y][data->x + 1] == 'P')
			data->p_died = 0;
		else if (data->map[data->y][data->x - 1] == 'P')
			data->p_died = 1;
	}
	else if (data->map[data->y - 1][data->x] == '0' || \
			data->map[data->y][data->x + 1] == '0' || \
			data->map[data->y + 1][data->x] == '0' || \
			data->map[data->y][data->x - 1] == '0')
	{
		if (data->map[data->y - 1][data->x] == '0' && data->enmy_m == 0)
			move_enemy_up(data);
		else if (data->map[data->y][data->x + 1] == '0' && data->enmy_m == 0)
			move_enemy_right(data);
		else if (data->map[data->y + 1][data->x] == '0' && data->enmy_m == 1)
			move_enemy_down(data);
		else if (data->map[data->y][data->x - 1] == '0' && data->enmy_m == 1)
			move_enemy_left(data);
	}
}

void	move_enemy_up(t_data *data)
{
	data->enmy_m = 1;
	data->map[data->y][data->x] = '0';
	put_img(data, data->img[bg][0], data->x, data->y);
	data->map[--data->y][data->x] = 'N';
}

void	move_enemy_down(t_data *data)
{
	data->enmy_m = 0;
	data->map[data->y][data->x] = '0';
	put_img(data, data->img[bg][0], data->x, data->y);
	data->map[++data->y][data->x] = 'N';
}

void	move_enemy_right(t_data *data)
{
	data->enmy_m = 1;
	data->map[data->y][data->x] = '0';
	put_img(data, data->img[bg][0], data->x, data->y);
	data->map[data->y][++data->x] = 'N';
}

void	move_enemy_left(t_data *data)
{
	data->enmy_m = 0;
	data->map[data->y][data->x] = '0';
	put_img(data, data->img[bg][0], data->x, data->y);
	data->map[data->y][--data->x] = 'N';
}
