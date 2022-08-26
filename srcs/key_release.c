/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_release.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 21:35:29 by aamajane          #+#    #+#             */
/*   Updated: 2022/05/07 17:26:29 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	key_release(int keycode, t_data *data)
{
	if (data->y_win == 0 && data->y_lose == 0 && \
		data->p_died == -1)
	{
		if (keycode == RIGHT || keycode == RIGHT_1)
			render_player_sr(data);
		else if (keycode == LEFT || keycode == LEFT_1)
			render_player_sl(data);
		else if ((keycode == UP || keycode == UP_1) && \
			data->direct == 1)
			render_player_sr(data);
		else if ((keycode == UP || keycode == UP_1) && \
			data->direct == 0)
			render_player_sl(data);
		else if (key_release_2(keycode, data))
			return (0);
	}
	return (0);
}

int	key_release_2(int keycode, t_data *data)
{
	if ((keycode == DOWN || keycode == DOWN_1) && \
		data->direct == 1)
	{
		render_player_sr(data);
		return (1);
	}
	else if ((keycode == DOWN || keycode == DOWN_1) && \
		data->direct == 0)
	{
		render_player_sl(data);
		return (1);
	}
	else if (keycode == SPACE)
	{
		if (data->attack == 1 && data->map[data->py][data->px + 1] == 'N')
			data->enmy_d = 1;
		else if (data->attack == 0 && data->map[data->py][data->px - 1] == 'N')
			data->enmy_d = 1;
		return (1);
	}
	return (0);
}

int	close_win(t_data *data)
{
	mlx_destroy_window(data->mlx, data->win);
	exit(0);
}

void	open_exit(t_data *data)
{
	data->c_count = -1;
	data->y = -1;
	while (data->map[++data->y])
	{
		data->x = -1;
		while (data->map[data->y][++data->x])
			if (data->map[data->y][data->x] == 'E')
				data->map[data->y][data->x] = 'O';
	}
}
