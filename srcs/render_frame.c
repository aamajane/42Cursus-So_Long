/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_frame.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 13:38:04 by aamajane          #+#    #+#             */
/*   Updated: 2022/05/07 17:27:00 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	render_frame(t_data *data)
{
	if (data->y_win == 0 && data->y_lose == 0)
	{
		render_crystal(data);
		render_enemy(data);
		render_player(data);
		if (data->c_count == 0)
			render_exit(data);
		if (data->p_died == 1)
		{
			render_player_dr(data);
			render_enemy_a(data, data->py, data->px);
		}
		else if (data->p_died == 0)
		{
			render_player_dl(data);
			render_enemy_a(data, data->py, data->px);
		}
	}
	return (0);
}

void	render_crystal(t_data *data)
{
	render_crystal_blue(data);
	render_crystal_green(data);
	render_crystal_pink(data);
	render_crystal_purple(data);
	render_crystal_red(data);
}

void	render_enemy(t_data *data)
{
	if (data->enmy_m == 1)
		render_enemy_sr(data);
	else if (data->enmy_m == 0)
		render_enemy_sl(data);
	if (data->enmy_d == 1)
	{
		if (data->attack == 1)
			render_enemy_d(data, data->py, data->px + 1);
		if (data->attack == 0)
			render_enemy_d(data, data->py, data->px - 1);
	}
}

void	render_player(t_data *data)
{
	if (data->run == 0)
	{
		if (data->attack == 1)
		{
			render_player_ar(data);
			if (data->map[data->py][data->px + 1] == 'N')
				render_attack(data, data->py, data->px + 1);
		}
		else if (data->attack == 0)
		{
			render_player_al(data);
			if (data->map[data->py][data->px - 1] == 'N')
				render_attack(data, data->py, data->px - 1);
		}
		if (data->direct == 1)
			render_player_sr(data);
		else if (data->direct == 0)
			render_player_sl(data);
	}
}

void	render_exit(t_data *data)
{
	if (data->timer[ex] > 5)
	{
		data->index[ex]++;
		if (data->index[ex] == 4)
		{
			open_exit(data);
			return ;
		}
		data->timer[ex] = 0;
	}
	data->y = -1;
	while (data->map[++data->y])
	{
		data->x = -1;
		while (data->map[data->y][++data->x])
		{
			if (data->map[data->y][data->x] == 'E')
			{
				put_img(data, data->img[bg][0], data->x, data->y);
				put_img(data, data->img[ex][data->index[ex]], data->x, data->y);
			}
		}
	}
	data->timer[ex]++;
}
