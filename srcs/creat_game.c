/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_game.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 16:19:20 by aamajane          #+#    #+#             */
/*   Updated: 2022/08/20 14:43:35 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	creat_game(t_data *data)
{
	data->width = map_width(data->map);
	data->height = map_height(data->map);
	data->mlx = mlx_init();
	data->win = mlx_new_window(data->mlx, data->width * 50, \
								data->height * 50, "so_long");
	init_map(data);
	mlx_hook(data->win, 2, 0, key_press, data);
	mlx_hook(data->win, 3, 0, key_release, data);
	mlx_hook(data->win, 17, 0, close_win, data);
	mlx_loop_hook(data->mlx, render_frame, data);
	mlx_loop(data->mlx);
}

void	init_map(t_data *data)
{
	init_index(data);
	get_img_path(data);
	init_all_img(data);
	data->y = -1;
	while (data->map[++data->y])
	{
		data->x = -1;
		while (data->map[data->y][++data->x])
		{
			put_img(data, data->img[bg][0], data->x, data->y);
			get_img_map(data);
		}
	}
	put_string(data);
}

void	get_img_map(t_data *data)
{
	if (data->map[data->y][data->x] == '0')
		put_img(data, data->img[bg][0], data->x, data->y);
	else if (data->map[data->y][data->x] == '1')
	{
		put_img(data, data->img[wl][0], data->x, data->y);
		if (data->y > 1 && data->map[data->y - 1][data->x] != '1')
			put_img(data, data->img[wl1][0], data->x, data->y);
	}
	else if (data->map[data->y][data->x] == 'C' || \
			is_crystal(data->map[data->y][data->x]))
		convert_crystal_1(data);
	else if (data->map[data->y][data->x] == 'E')
		put_img(data, data->img[ex][0], data->x, data->y);
	else if (data->map[data->y][data->x] == 'P')
	{
		data->px = data->x;
		data->py = data->y;
		put_img(data, data->img[psr][0], data->x, data->y);
	}
	else if (data->map[data->y][data->x] == 'N')
		put_img(data, data->img[nsr][0], data->x, data->y);
	else if (data->map[data->y][data->x] == 'O')
		put_img(data, data->img[ex][3], data->x, data->y);
}

void	convert_crystal_1(t_data *data)
{
	data->c_count++;
	if (data->blue == 0)
	{
		data->blue = 1;
		data->map[data->y][data->x] = 'B';
		put_img(data, data->img[cb][0], data->x, data->y);
	}
	else if (data->green == 0)
	{
		data->green = 1;
		data->map[data->y][data->x] = 'G';
		put_img(data, data->img[cg][0], data->x, data->y);
	}
	else if (data->pink == 0)
	{
		data->pink = 1;
		data->map[data->y][data->x] = 'K';
		put_img(data, data->img[ck][0], data->x, data->y);
	}
	else if (convert_crystal_2(data))
		return ;
}

int	convert_crystal_2(t_data *data)
{
	if (data->purple == 0)
	{
		data->purple = 1;
		data->map[data->y][data->x] = 'L';
		put_img(data, data->img[cp][0], data->x, data->y);
		return (1);
	}
	else if (data->red == 0)
	{
		data->blue = 0;
		data->green = 0;
		data->pink = 0;
		data->purple = 0;
		data->map[data->y][data->x] = 'R';
		put_img(data, data->img[cr][0], data->x, data->y);
		return (1);
	}
	return (0);
}
