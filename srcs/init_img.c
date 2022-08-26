/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_img.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 20:12:40 by aamajane          #+#    #+#             */
/*   Updated: 2022/05/07 17:26:17 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	init_all_img(t_data *data)
{
	data->img[bg][0] = xpm_img(data, data->img[bg][0], data->path[bg][0]);
	data->img[wl][0] = xpm_img(data, data->img[wl][0], data->path[wl][0]);
	data->img[wl1][0] = xpm_img(data, data->img[wl1][0], data->path[wl1][0]);
	data->img[bl][0] = xpm_img(data, data->img[bl][0], data->path[bl][0]);
	data->img[yw][0] = xpm_img(data, data->img[yw][0], data->path[yw][0]);
	data->img[yl][0] = xpm_img(data, data->img[yl][0], data->path[yl][0]);
	data->img[ywr][0] = xpm_img(data, data->img[ywr][0], data->path[ywr][0]);
	data->img[ylr][0] = xpm_img(data, data->img[ylr][0], data->path[ylr][0]);
	init_all_img_2(data);
}

void	init_all_img_2(t_data *data)
{
	while (++data->i < 4)
		data->img[cb][data->i] = \
		xpm_img(data, data->img[cb][data->i], data->path[cb][data->i]);
	data->i = -1;
	while (++data->i < 4)
		data->img[cg][data->i] = \
		xpm_img(data, data->img[cg][data->i], data->path[cg][data->i]);
	data->i = -1;
	while (++data->i < 4)
		data->img[ck][data->i] = \
		xpm_img(data, data->img[ck][data->i], data->path[ck][data->i]);
	data->i = -1;
	while (++data->i < 4)
		data->img[cp][data->i] = \
		xpm_img(data, data->img[cp][data->i], data->path[cp][data->i]);
	data->i = -1;
	while (++data->i < 4)
		data->img[cr][data->i] = \
		xpm_img(data, data->img[cr][data->i], data->path[cr][data->i]);
	data->i = -1;
	while (++data->i < 4)
		data->img[ex][data->i] = \
		xpm_img(data, data->img[ex][data->i], data->path[ex][data->i]);
	init_all_img_3(data);
}

void	init_all_img_3(t_data *data)
{
	data->i = -1;
	while (++data->i < 6)
		data->img[psr][data->i] = \
		xpm_img(data, data->img[psr][data->i], data->path[psr][data->i]);
	data->i = -1;
	while (++data->i < 6)
		data->img[psl][data->i] = \
		xpm_img(data, data->img[psl][data->i], data->path[psl][data->i]);
	data->i = -1;
	while (++data->i < 8)
		data->img[prr][data->i] = \
		xpm_img(data, data->img[prr][data->i], data->path[prr][data->i]);
	data->i = -1;
	while (++data->i < 8)
		data->img[prl][data->i] = \
		xpm_img(data, data->img[prl][data->i], data->path[prl][data->i]);
	data->i = -1;
	while (++data->i < 3)
		data->img[prur][data->i] = \
		xpm_img(data, data->img[prur][data->i], data->path[prur][data->i]);
	data->i = -1;
	while (++data->i < 3)
		data->img[prul][data->i] = \
		xpm_img(data, data->img[prul][data->i], data->path[prul][data->i]);
	init_all_img_4(data);
}

void	init_all_img_4(t_data *data)
{
	data->i = -1;
	while (++data->i < 3)
		data->img[prdr][data->i] = \
		xpm_img(data, data->img[prdr][data->i], data->path[prdr][data->i]);
	data->i = -1;
	while (++data->i < 3)
		data->img[prdl][data->i] = \
		xpm_img(data, data->img[prdl][data->i], data->path[prdl][data->i]);
	data->i = -1;
	while (++data->i < 10)
		data->img[pdr][data->i] = \
		xpm_img(data, data->img[pdr][data->i], data->path[pdr][data->i]);
	data->i = -1;
	while (++data->i < 10)
		data->img[pdl][data->i] = \
		xpm_img(data, data->img[pdl][data->i], data->path[pdl][data->i]);
	data->i = -1;
	while (++data->i < 12)
		data->img[par][data->i] = \
		xpm_img(data, data->img[par][data->i], data->path[par][data->i]);
	data->i = -1;
	while (++data->i < 12)
		data->img[pal][data->i] = \
		xpm_img(data, data->img[pal][data->i], data->path[pal][data->i]);
	init_all_img_5(data);
}

void	init_all_img_5(t_data *data)
{
	data->i = -1;
	while (++data->i < 8)
		data->img[nsr][data->i] = \
		xpm_img(data, data->img[nsr][data->i], data->path[nsr][data->i]);
	data->i = -1;
	while (++data->i < 8)
		data->img[nsl][data->i] = \
		xpm_img(data, data->img[nsl][data->i], data->path[nsl][data->i]);
	data->i = -1;
	while (++data->i < 3)
		data->img[nd][data->i] = \
		xpm_img(data, data->img[nd][data->i], data->path[nd][data->i]);
	data->i = -1;
	while (++data->i < 15)
		data->img[pa][data->i] = \
		xpm_img(data, data->img[pa][data->i], data->path[pa][data->i]);
	data->i = -1;
	while (++data->i < 12)
		data->img[na][data->i] = \
		xpm_img(data, data->img[na][data->i], data->path[na][data->i]);
}
