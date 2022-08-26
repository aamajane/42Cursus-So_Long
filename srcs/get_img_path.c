/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_img_path.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 20:49:19 by aamajane          #+#    #+#             */
/*   Updated: 2022/05/07 17:25:59 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	get_img_path(t_data *data)
{
	get_background_path(data);
	get_crystall_path(data);
	get_enemy_path(data);
	get_attack_path(data);
	get_player_stand_path(data);
	get_player_run_hor_path(data);
	get_player_run_ver_path(data);
	get_player_lose_path(data);
	get_player_attack_path(data);
}

void	get_background_path(t_data *data)
{
	data->path[bg][0] = "assets/0.xpm";
	data->path[wl][0] = "assets/1.xpm";
	data->path[wl1][0] = "assets/11.xpm";
	data->path[bl][0] = "assets/b.xpm";
	data->path[yw][0] = "assets/yw.xpm";
	data->path[yl][0] = "assets/yl.xpm";
	data->path[ywr][0] = "assets/ywr.xpm";
	data->path[ylr][0] = "assets/ylr.xpm";
	data->path[ex][0] = "assets/e1.xpm";
	data->path[ex][1] = "assets/e2.xpm";
	data->path[ex][2] = "assets/e3.xpm";
	data->path[ex][3] = "assets/e4.xpm";
	data->path[na][0] = "assets/na1.xpm";
	data->path[na][1] = "assets/na2.xpm";
	data->path[na][2] = "assets/na3.xpm";
	data->path[na][3] = "assets/na4.xpm";
	data->path[na][4] = "assets/na5.xpm";
	data->path[na][5] = "assets/na6.xpm";
	data->path[na][6] = "assets/na7.xpm";
	data->path[na][7] = "assets/na8.xpm";
	data->path[na][8] = "assets/na9.xpm";
	data->path[na][9] = "assets/na10.xpm";
	data->path[na][10] = "assets/na11.xpm";
	data->path[na][11] = "assets/na12.xpm";
}

void	get_crystall_path(t_data *data)
{
	data->path[cb][0] = "assets/cb1.xpm";
	data->path[cb][1] = "assets/cb2.xpm";
	data->path[cb][2] = "assets/cb3.xpm";
	data->path[cb][3] = "assets/cb4.xpm";
	data->path[cg][0] = "assets/cg2.xpm";
	data->path[cg][1] = "assets/cg3.xpm";
	data->path[cg][2] = "assets/cg4.xpm";
	data->path[cg][3] = "assets/cg1.xpm";
	data->path[ck][0] = "assets/ck3.xpm";
	data->path[ck][1] = "assets/ck4.xpm";
	data->path[ck][2] = "assets/ck1.xpm";
	data->path[ck][3] = "assets/ck2.xpm";
	data->path[cp][0] = "assets/cp4.xpm";
	data->path[cp][1] = "assets/cp1.xpm";
	data->path[cp][2] = "assets/cp2.xpm";
	data->path[cp][3] = "assets/cp3.xpm";
	data->path[cr][0] = "assets/cr1.xpm";
	data->path[cr][1] = "assets/cr2.xpm";
	data->path[cr][2] = "assets/cr3.xpm";
	data->path[cr][3] = "assets/cr4.xpm";
}

void	get_enemy_path(t_data *data)
{
	data->path[nsr][0] = "assets/nsr1.xpm";
	data->path[nsr][1] = "assets/nsr2.xpm";
	data->path[nsr][2] = "assets/nsr3.xpm";
	data->path[nsr][3] = "assets/nsr4.xpm";
	data->path[nsr][4] = "assets/nsr5.xpm";
	data->path[nsr][5] = "assets/nsr6.xpm";
	data->path[nsr][6] = "assets/nsr7.xpm";
	data->path[nsr][7] = "assets/nsr8.xpm";
	data->path[nsl][0] = "assets/nsl1.xpm";
	data->path[nsl][1] = "assets/nsl2.xpm";
	data->path[nsl][2] = "assets/nsl3.xpm";
	data->path[nsl][3] = "assets/nsl4.xpm";
	data->path[nsl][4] = "assets/nsl5.xpm";
	data->path[nsl][5] = "assets/nsl6.xpm";
	data->path[nsl][6] = "assets/nsl7.xpm";
	data->path[nsl][7] = "assets/nsl8.xpm";
	data->path[nd][0] = "assets/nd1.xpm";
	data->path[nd][1] = "assets/nd2.xpm";
	data->path[nd][2] = "assets/nd3.xpm";
}

void	get_attack_path(t_data *data)
{
	data->path[pa][0] = "assets/pa1.xpm";
	data->path[pa][1] = "assets/pa2.xpm";
	data->path[pa][2] = "assets/pa3.xpm";
	data->path[pa][3] = "assets/pa4.xpm";
	data->path[pa][4] = "assets/pa5.xpm";
	data->path[pa][5] = "assets/pa6.xpm";
	data->path[pa][6] = "assets/pa7.xpm";
	data->path[pa][7] = "assets/pa8.xpm";
	data->path[pa][8] = "assets/pa9.xpm";
	data->path[pa][9] = "assets/pa10.xpm";
	data->path[pa][10] = "assets/pa11.xpm";
	data->path[pa][11] = "assets/pa12.xpm";
	data->path[pa][12] = "assets/pa13.xpm";
	data->path[pa][13] = "assets/pa14.xpm";
	data->path[pa][14] = "assets/pa15.xpm";
}
