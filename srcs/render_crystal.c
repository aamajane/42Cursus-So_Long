/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_crystal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 22:03:57 by aamajane          #+#    #+#             */
/*   Updated: 2022/05/07 17:26:51 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	render_crystal_blue(t_data *data)
{
	if (data->timer[cb] > 10)
	{
		data->index[cb]++;
		if (data->index[cb] == 4)
			data->index[cb] = 0;
		data->timer[cb] = 0;
	}
	data->y = -1;
	while (data->map[++data->y])
	{
		data->x = -1;
		while (data->map[data->y][++data->x])
		{
			if (data->map[data->y][data->x] == 'B')
			{
				put_img(data, data->img[bg][0], data->x, data->y);
				put_img(data, data->img[cb][data->index[cb]], data->x, data->y);
			}
		}
	}
	data->timer[cb]++;
}

void	render_crystal_green(t_data *data)
{
	if (data->timer[cg] > 10)
	{
		data->index[cg]++;
		if (data->index[cg] == 4)
			data->index[cg] = 0;
		data->timer[cg] = 0;
	}
	data->y = -1;
	while (data->map[++data->y])
	{
		data->x = -1;
		while (data->map[data->y][++data->x])
		{
			if (data->map[data->y][data->x] == 'G')
			{
				put_img(data, data->img[bg][0], data->x, data->y);
				put_img(data, data->img[cg][data->index[cg]], data->x, data->y);
			}
		}
	}
	data->timer[cg]++;
}

void	render_crystal_pink(t_data *data)
{
	if (data->timer[ck] > 10)
	{
		data->index[ck]++;
		if (data->index[ck] == 4)
			data->index[ck] = 0;
		data->timer[ck] = 0;
	}
	data->y = -1;
	while (data->map[++data->y])
	{
		data->x = -1;
		while (data->map[data->y][++data->x])
		{
			if (data->map[data->y][data->x] == 'K')
			{
				put_img(data, data->img[bg][0], data->x, data->y);
				put_img(data, data->img[ck][data->index[ck]], data->x, data->y);
			}
		}
	}
	data->timer[ck]++;
}

void	render_crystal_purple(t_data *data)
{
	if (data->timer[cp] > 10)
	{
		data->index[cp]++;
		if (data->index[cp] == 4)
			data->index[cp] = 0;
		data->timer[cp] = 0;
	}
	data->y = -1;
	while (data->map[++data->y])
	{
		data->x = -1;
		while (data->map[data->y][++data->x])
		{
			if (data->map[data->y][data->x] == 'L')
			{
				put_img(data, data->img[bg][0], data->x, data->y);
				put_img(data, data->img[cp][data->index[cp]], data->x, data->y);
			}
		}
	}
	data->timer[cp]++;
}

void	render_crystal_red(t_data *data)
{
	if (data->timer[cr] > 10)
	{
		data->index[cr]++;
		if (data->index[cr] == 4)
			data->index[cr] = 0;
		data->timer[cr] = 0;
	}
	data->y = -1;
	while (data->map[++data->y])
	{
		data->x = -1;
		while (data->map[data->y][++data->x])
		{
			if (data->map[data->y][data->x] == 'R')
			{
				put_img(data, data->img[bg][0], data->x, data->y);
				put_img(data, data->img[cr][data->index[cr]], data->x, data->y);
			}
		}
	}
	data->timer[cr]++;
}
