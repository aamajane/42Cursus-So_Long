/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_player_attack.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 13:24:03 by aamajane          #+#    #+#             */
/*   Updated: 2022/05/07 17:27:04 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	render_player_ar(t_data *data)
{
	data->direct = -1;
	if (data->timer[par] > 1)
	{
		data->index[par]++;
		if (data->index[par] == 12)
		{
			data->index[par] = 0;
			data->attack = -1;
			data->direct = 1;
			return ;
		}
		data->timer[par] = 0;
	}
	put_img(data, data->img[bg][0], data->px, data->py);
	put_img(data, data->img[par][data->index[par]], data->px, data->py);
	data->timer[par]++;
}

void	render_player_al(t_data *data)
{
	data->direct = -1;
	if (data->timer[pal] > 1)
	{
		data->index[pal]++;
		if (data->index[pal] == 12)
		{
			data->index[pal] = 0;
			data->attack = -1;
			data->direct = 0;
			return ;
		}
		data->timer[pal] = 0;
	}
	put_img(data, data->img[bg][0], data->px, data->py);
	put_img(data, data->img[pal][data->index[pal]], data->px, data->py);
	data->timer[pal]++;
}

void	render_attack(t_data *data, int y, int x)
{
	if (data->timer[pa] > 1)
	{
		data->index[pa]++;
		if (data->index[pa] == 15)
		{
			data->index[pa] = 0;
			return ;
		}
		data->timer[pa] = 0;
	}
	put_img(data, data->img[pa][data->index[pa]], x, y);
	data->timer[pa]++;
}
