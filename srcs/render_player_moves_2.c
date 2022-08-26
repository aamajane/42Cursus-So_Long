/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_player_moves_2.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 19:49:05 by aamajane          #+#    #+#             */
/*   Updated: 2022/05/07 17:27:13 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	render_player_rr(t_data *data)
{
	data->direct = 1;
	data->run = 1;
	if (data->index[prr] == 8)
		data->index[prr] = 0;
	put_img(data, data->img[bg][0], data->px, data->py);
	put_img(data, data->img[prr][data->index[prr]], data->px, data->py);
	data->index[prr]++;
}

void	render_player_rl(t_data *data)
{
	data->direct = 0;
	data->run = 1;
	if (data->index[prl] == 8)
		data->index[prl] = 0;
	put_img(data, data->img[bg][0], data->px, data->py);
	put_img(data, data->img[prl][data->index[prl]], data->px, data->py);
	data->index[prl]++;
}
