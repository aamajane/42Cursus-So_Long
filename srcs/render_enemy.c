/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_enemy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 22:06:26 by aamajane          #+#    #+#             */
/*   Updated: 2022/08/26 18:01:36 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	render_enemy_sr(t_data *data)
{
	if (data->timer[nsr] > 5)
	{
		data->index[nsr]++;
		if (data->index[nsr] == 6)
			data->index[nsr] = 0;
		data->timer[nsr] = 0;
	}
	data->y = -1;
	while (data->map[++data->y])
	{
		data->x = -1;
		while (data->map[data->y][++data->x])
		{
			if (data->map[data->y][data->x] == 'N')
			{
				put_img(data, data->img[bg][0], data->x, data->y);
				put_img(data, data->img[nsr][data->index[nsr]], \
						data->x, data->y);
				if (data->timer[mnr] > 100 && data->enmy_d == 0 && \
					data->p_died == -1)
					move_enemy(data);
			}
		}
	}
	extra_enemy_ft(data, 1);
}

void	render_enemy_sl(t_data *data)
{
	if (data->timer[nsl] > 5)
	{
		data->index[nsl]++;
		if (data->index[nsl] == 6)
			data->index[nsl] = 0;
		data->timer[nsl] = 0;
	}
	data->y = -1;
	while (data->map[++data->y])
	{
		data->x = -1;
		while (data->map[data->y][++data->x])
		{
			if (data->map[data->y][data->x] == 'N')
			{
				put_img(data, data->img[bg][0], data->x, data->y);
				put_img(data, data->img[nsl][data->index[nsl]], \
						data->x, data->y);
				if (data->timer[mnl] > 100 && data->enmy_d == 0 && \
					data->p_died == -1)
					move_enemy(data);
			}
		}
	}
	extra_enemy_ft(data, 0);
}

void	render_enemy_d(t_data *data, int y, int x)
{
	if (data->timer[nd] > 5)
	{
		data->index[nd]++;
		if (data->index[nd] == 3)
		{
			data->index[nd] = 0;
			data->enmy_d = 0;
			data->map[y][x] = '0';
			put_img(data, data->img[bg][0], x, y);
			return ;
		}
		data->timer[nd] = 0;
	}
	put_img(data, data->img[bg][0], x, y);
	put_img(data, data->img[nd][data->index[nd]], x, y);
	data->timer[nd]++;
}

void	render_enemy_a(t_data *data, int y, int x)
{
	if (data->timer[na] > 5)
	{
		data->index[na]++;
		if (data->index[na] == 12)
		{
			data->index[na] = 0;
			return ;
		}
		data->timer[na] = 0;
	}
	if (data->map[data->py][data->px + 1] == 'N')
		mlx_put_image_to_window(data->mlx, data->win, \
		data->img[na][data->index[na]], x * 50 + 25, y * 50);
	else if (data->map[data->py][data->px - 1] == 'N')
		mlx_put_image_to_window(data->mlx, data->win, \
		data->img[na][data->index[na]], x * 50 - 25, y * 50);
	else if (data->map[data->py + 1][data->px] == 'N')
		mlx_put_image_to_window(data->mlx, data->win, \
		data->img[na][data->index[na]], x * 50, y * 50 + 25);
	else if (data->map[data->py - 1][data->px] == 'N')
		mlx_put_image_to_window(data->mlx, data->win, \
		data->img[na][data->index[na]], x * 50, y * 50 - 25);
	data->timer[na]++;
}

void	extra_enemy_ft(t_data *data, int choise)
{
	if (choise == 1)
	{
		if (data->timer[mnr] > 100)
			data->timer[mnr] = 0;
		data->timer[nsr]++;
		data->timer[mnr]++;
	}
	else if (choise == 0)
	{
		if (data->timer[mnl] > 100)
			data->timer[mnl] = 0;
		data->timer[nsl]++;
		data->timer[mnl]++;
	}
}
