/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_press.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 18:26:14 by aamajane          #+#    #+#             */
/*   Updated: 2022/08/20 14:37:35 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	key_press(int keycode, t_data *data)
{
	if (keycode == ESC)
		close_win(data);
	if (data->y_win == 0 && data->y_lose == 1 && \
		keycode == ENTRE)
	{
		data->y_lose = 0;
		data->p_died = -1;
		init_map(data);
	}
	key_press_2(keycode, data);
	return (0);
}

void	key_press_2(int keycode, t_data *data)
{
	if (data->y_win == 0 && data->y_lose == 0 && \
		data->p_died == -1 && data->attack == -1)
	{
		if (keycode == SPACE)
		{
			if (data->direct == 1)
				data->attack = 1;
			else if (data->direct == 0)
				data->attack = 0;
		}
		else if (keycode == UP || keycode == UP_1)
		{
			move_up(data);
			put_string(data);
		}
		else if (keycode == DOWN || keycode == DOWN_1)
		{
			move_down(data);
			put_string(data);
		}
		else if (key_press_3(keycode, data))
			return ;
	}
}

int	key_press_3(int keycode, t_data *data)
{
	if (keycode == RIGHT || keycode == RIGHT_1)
	{
		if (data->direct == 0 && data->run == 0)
		{
			render_player_sl(data);
			data->run = 1;
		}
		else
			move_right(data);
		put_string(data);
		return (1);
	}
	else if (keycode == LEFT || keycode == LEFT_1)
	{
		if (data->direct == 1 && data->run == 0)
		{
			render_player_sr(data);
			data->run = 1;
		}
		else
			move_left(data);
		put_string(data);
		return (1);
	}
	return (0);
}

void	*xpm_img(t_data *data, void *img, char *path)
{
	img = mlx_xpm_file_to_image(data->mlx, path, \
								&data->img_width, &data->img_height);
	return (img);
}

void	put_img(t_data *data, void *img, int x, int y)
{
	mlx_put_image_to_window(data->mlx, data->win, img, x * 50, y * 50);
}
