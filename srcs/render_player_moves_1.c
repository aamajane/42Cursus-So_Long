/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_player_moves_1.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 17:21:24 by aamajane          #+#    #+#             */
/*   Updated: 2022/05/07 17:27:08 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	render_player_rur(t_data *data)
{
	data->direct = 1;
	data->run = 1;
	if (data->index[prur] == 3)
		data->index[prur] = 0;
	put_img(data, data->img[bg][0], data->px, data->py);
	put_img(data, data->img[prur][data->index[prur]], data->px, data->py);
	data->index[prur]++;
}

void	render_player_rul(t_data *data)
{
	data->direct = 0;
	data->run = 1;
	if (data->index[prul] == 3)
		data->index[prul] = 0;
	put_img(data, data->img[bg][0], data->px, data->py);
	put_img(data, data->img[prul][data->index[prul]], data->px, data->py);
	data->index[prul]++;
}

void	render_player_rdr(t_data *data)
{
	data->direct = 1;
	data->run = 1;
	if (data->index[prdr] == 3)
		data->index[prdr] = 0;
	put_img(data, data->img[bg][0], data->px, data->py);
	put_img(data, data->img[prdr][data->index[prdr]], data->px, data->py);
	data->index[prdr]++;
}

void	render_player_rdl(t_data *data)
{
	data->direct = 0;
	data->run = 1;
	if (data->index[prdl] == 3)
		data->index[prdl] = 0;
	put_img(data, data->img[bg][0], data->px, data->py);
	put_img(data, data->img[prdl][data->index[prdl]], data->px, data->py);
	data->index[prdl]++;
}
