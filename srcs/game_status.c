/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_status.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:17:49 by aamajane          #+#    #+#             */
/*   Updated: 2022/08/21 14:02:50 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	you_win(t_data *data)
{
	data->y_win = 1;
	mlx_clear_window(data->mlx, data->win);
	if (data->width < 500 / 50 || data->height < 400 / 50)
	{
		data->x = data->width / 2 - (125 / 50);
		data->y = data->height / 2 - (100 / 50);
		put_img(data, data->img[ywr][0], data->x, data->y);
	}
	else
	{
		data->x = data->width / 2 - (250 / 50);
		data->y = data->height / 2 - (200 / 50);
		put_img(data, data->img[yw][0], data->x, data->y);
	}
}

void	you_lose(t_data *data)
{
	data->y_lose = 1;
	mlx_clear_window(data->mlx, data->win);
	if (data->width < 500 / 50 || data->height < 400 / 50)
	{
		data->x = data->width / 2 - (125 / 50);
		data->y = data->height / 2 - (100 / 50);
		put_img(data, data->img[ylr][0], data->x, data->y);
	}
	else
	{
		data->x = data->width / 2 - (250 / 50);
		data->y = data->height / 2 - (200 / 50);
		put_img(data, data->img[yl][0], data->x, data->y);
	}
}

void	put_string(t_data *data)
{
	char	*nb;

	if (data->y_win == 1)
		return ;
	nb = ft_itoa(data->mv_count);
	mlx_put_image_to_window(data->mlx, data->win, data->img[wl][0], 0, 0);
	mlx_string_put(data->mlx, data->win, 10, 12, 0xFFFFFF, nb);
	free(nb);
}

void	init_index(t_data *data)
{
	data->i = -1;
	while (++data->i < 33)
		data->index[data->i] = 0;
	data->i = -1;
	while (++data->i < 33)
		data->timer[data->i] = 0;
	data->img_height = 50;
	data->img_width = 50;
	data->mv_count = 0;
	data->c_count = 0;
	data->direct = 1;
	data->attack = -1;
	data->enmy_m = 1;
	data->enmy_d = 0;
	data->purple = 0;
	data->y_lose = 0;
	data->p_died = -1;
	data->y_win = 0;
	data->green = 0;
	data->blue = 0;
	data->pink = 0;
	data->red = 0;
	data->run = 0;
	data->i = -1;
}

int	is_crystal(char c)
{
	if (c == 'B' || c == 'G' || c == 'K' || \
		c == 'L' || c == 'R')
		return (1);
	return (0);
}
