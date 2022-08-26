/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:04:51 by aamajane          #+#    #+#             */
/*   Updated: 2022/05/07 17:26:43 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	move_up(t_data *data)
{
	if (data->map[data->py - 1][data->px] == '0' || \
		is_crystal(data->map[data->py - 1][data->px]))
	{
		if (is_crystal(data->map[data->py - 1][data->px]))
			data->c_count--;
		data->map[data->py][data->px] = '0';
		put_img(data, data->img[bg][0], data->px, data->py);
		data->map[--data->py][data->px] = 'P';
		if (data->direct == 1)
			render_player_rur(data);
		else
			render_player_rul(data);
		data->mv_count++;
	}
	else if (data->map[data->py - 1][data->px] == '1' || \
			data->map[data->py - 1][data->px] == 'E')
		correct_direction(data, 1);
	else if (data->map[data->py - 1][data->px] == 'O')
	{
		put_img(data, data->img[bg][0], data->px, data->py);
		put_img(data, data->img[psr][0], data->px, --data->py);
		you_win(data);
	}
	else if (data->map[data->py - 1][data->px] == 'N')
		data->p_died = 1;
}

void	move_down(t_data *data)
{
	if (data->map[data->py + 1][data->px] == '0' || \
		is_crystal(data->map[data->py + 1][data->px]))
	{
		if (is_crystal(data->map[data->py + 1][data->px]))
			data->c_count--;
		data->map[data->py][data->px] = '0';
		put_img(data, data->img[bg][0], data->px, data->py);
		data->map[++data->py][data->px] = 'P';
		if (data->direct == 1)
			render_player_rdr(data);
		else
			render_player_rdl(data);
		data->mv_count++;
	}
	else if (data->map[data->py + 1][data->px] == '1' || \
			data->map[data->py + 1][data->px] == 'E')
		correct_direction(data, 0);
	else if (data->map[data->py + 1][data->px] == 'O')
	{
		put_img(data, data->img[bg][0], data->px, data->py);
		put_img(data, data->img[psl][0], data->px, ++data->py);
		you_win(data);
	}
	else if (data->map[data->py + 1][data->px] == 'N')
		data->p_died = 0;
}

void	move_right(t_data *data)
{
	if (data->map[data->py][data->px + 1] == '0' || \
		is_crystal(data->map[data->py][data->px + 1]))
	{
		if (is_crystal(data->map[data->py][data->px + 1]))
			data->c_count--;
		data->map[data->py][data->px] = '0';
		put_img(data, data->img[bg][0], data->px, data->py);
		data->map[data->py][++data->px] = 'P';
		render_player_rr(data);
		data->mv_count++;
	}
	else if (data->map[data->py][data->px + 1] == '1' || \
			data->map[data->py][data->px + 1] == 'E')
		render_player_rr(data);
	else if (data->map[data->py][data->px + 1] == 'O')
	{
		put_img(data, data->img[bg][0], data->px, data->py);
		put_img(data, data->img[psr][0], ++data->px, data->py);
		you_win(data);
	}
	else if (data->map[data->py][data->px + 1] == 'N')
		data->p_died = 1;
}

void	move_left(t_data *data)
{
	if (data->map[data->py][data->px - 1] == '0' || \
		is_crystal(data->map[data->py][data->px - 1]))
	{
		if (is_crystal(data->map[data->py][data->px - 1]))
			data->c_count--;
		data->map[data->py][data->px] = '0';
		put_img(data, data->img[bg][0], data->px, data->py);
		data->map[data->py][--data->px] = 'P';
		render_player_rl(data);
		data->mv_count++;
	}
	else if (data->map[data->py][data->px - 1] == '1' || \
			data->map[data->py][data->px - 1] == 'E')
		render_player_rl(data);
	else if (data->map[data->py][data->px - 1] == 'O')
	{
		put_img(data, data->img[bg][0], data->px, data->py);
		put_img(data, data->img[psl][0], --data->px, data->py);
		you_win(data);
	}
	else if (data->map[data->py][data->px - 1] == 'N')
		data->p_died = 0;
}

void	correct_direction(t_data *data, int choise)
{
	if (choise == 1)
	{
		if (data->direct == 1)
			render_player_rur(data);
		else
			render_player_rul(data);
	}
	else if (choise == 0)
	{
		if (data->direct == 1)
			render_player_rdr(data);
		else
			render_player_rdl(data);
	}
}
