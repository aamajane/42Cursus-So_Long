/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_player_stand.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 17:22:12 by aamajane          #+#    #+#             */
/*   Updated: 2022/05/07 17:27:17 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	render_player_sr(t_data *data)
{
	data->direct = 1;
	data->run = 0;
	if (data->timer[psr] > 5)
	{
		data->index[psr]++;
		if (data->index[psr] == 6)
			data->index[psr] = 0;
		data->timer[psr] = 0;
	}
	put_img(data, data->img[bg][0], data->px, data->py);
	put_img(data, data->img[psr][data->index[psr]], data->px, data->py);
	data->timer[psr]++;
}

void	render_player_sl(t_data *data)
{
	data->direct = 0;
	data->run = 0;
	if (data->timer[psl] > 5)
	{
		data->index[psl]++;
		if (data->index[psl] == 6)
			data->index[psl] = 0;
		data->timer[psl] = 0;
	}
	put_img(data, data->img[bg][0], data->px, data->py);
	put_img(data, data->img[psl][data->index[psl]], data->px, data->py);
	data->timer[psl]++;
}

void	render_player_dr(t_data *data)
{
	data->direct = 1;
	data->run = 1;
	if (data->timer[pdr] > 5)
	{
		data->index[pdr]++;
		if (data->index[pdr] == 10)
			you_lose(data);
		data->timer[pdr] = 0;
	}
	if (data->y_lose == 0)
	{
		put_img(data, data->img[bg][0], data->px, data->py);
		put_img(data, data->img[pdr][data->index[pdr]], data->px, data->py);
	}
	data->timer[pdr]++;
}

void	render_player_dl(t_data *data)
{
	data->direct = 0;
	data->run = 1;
	if (data->timer[pdl] > 5)
	{
		data->index[pdl]++;
		if (data->index[pdl] == 10)
			you_lose(data);
		data->timer[pdl] = 0;
	}
	if (data->y_lose == 0)
	{
		put_img(data, data->img[bg][0], data->px, data->py);
		put_img(data, data->img[pdl][data->index[pdl]], data->px, data->py);
	}
	data->timer[pdl]++;
}
