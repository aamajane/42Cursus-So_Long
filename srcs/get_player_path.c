/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_player_path.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:59:31 by aamajane          #+#    #+#             */
/*   Updated: 2022/05/07 17:26:11 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	get_player_stand_path(t_data *data)
{
	data->path[psr][0] = "assets/psr1.xpm";
	data->path[psr][1] = "assets/psr2.xpm";
	data->path[psr][2] = "assets/psr3.xpm";
	data->path[psr][3] = "assets/psr4.xpm";
	data->path[psr][4] = "assets/psr5.xpm";
	data->path[psr][5] = "assets/psr6.xpm";
	data->path[psl][0] = "assets/psl1.xpm";
	data->path[psl][1] = "assets/psl2.xpm";
	data->path[psl][2] = "assets/psl3.xpm";
	data->path[psl][3] = "assets/psl4.xpm";
	data->path[psl][4] = "assets/psl5.xpm";
	data->path[psl][5] = "assets/psl6.xpm";
}

void	get_player_run_hor_path(t_data *data)
{
	data->path[prr][0] = "assets/prr1.xpm";
	data->path[prr][1] = "assets/prr2.xpm";
	data->path[prr][2] = "assets/prr3.xpm";
	data->path[prr][3] = "assets/prr4.xpm";
	data->path[prr][4] = "assets/prr5.xpm";
	data->path[prr][5] = "assets/prr6.xpm";
	data->path[prr][6] = "assets/prr7.xpm";
	data->path[prr][7] = "assets/prr8.xpm";
	data->path[prl][0] = "assets/prl1.xpm";
	data->path[prl][1] = "assets/prl2.xpm";
	data->path[prl][2] = "assets/prl3.xpm";
	data->path[prl][3] = "assets/prl4.xpm";
	data->path[prl][4] = "assets/prl5.xpm";
	data->path[prl][5] = "assets/prl6.xpm";
	data->path[prl][6] = "assets/prl7.xpm";
	data->path[prl][7] = "assets/prl8.xpm";
}

void	get_player_run_ver_path(t_data *data)
{
	data->path[prur][0] = "assets/prur1.xpm";
	data->path[prur][1] = "assets/prur2.xpm";
	data->path[prur][2] = "assets/prur3.xpm";
	data->path[prul][0] = "assets/prul1.xpm";
	data->path[prul][1] = "assets/prul2.xpm";
	data->path[prul][2] = "assets/prul3.xpm";
	data->path[prdr][0] = "assets/prdr1.xpm";
	data->path[prdr][1] = "assets/prdr2.xpm";
	data->path[prdr][2] = "assets/prdr3.xpm";
	data->path[prdl][0] = "assets/prdl1.xpm";
	data->path[prdl][1] = "assets/prdl2.xpm";
	data->path[prdl][2] = "assets/prdl3.xpm";
}

void	get_player_lose_path(t_data *data)
{
	data->path[pdr][0] = "assets/pdr1.xpm";
	data->path[pdr][1] = "assets/pdr2.xpm";
	data->path[pdr][2] = "assets/pdr3.xpm";
	data->path[pdr][3] = "assets/pdr4.xpm";
	data->path[pdr][4] = "assets/pdr5.xpm";
	data->path[pdr][5] = "assets/pdr6.xpm";
	data->path[pdr][6] = "assets/pdr7.xpm";
	data->path[pdr][7] = "assets/pdr8.xpm";
	data->path[pdr][8] = "assets/pdr9.xpm";
	data->path[pdr][9] = "assets/pdr10.xpm";
	data->path[pdl][0] = "assets/pdl1.xpm";
	data->path[pdl][1] = "assets/pdl2.xpm";
	data->path[pdl][2] = "assets/pdl3.xpm";
	data->path[pdl][3] = "assets/pdl4.xpm";
	data->path[pdl][4] = "assets/pdl5.xpm";
	data->path[pdl][5] = "assets/pdl6.xpm";
	data->path[pdl][6] = "assets/pdl7.xpm";
	data->path[pdl][7] = "assets/pdl8.xpm";
	data->path[pdl][8] = "assets/pdl9.xpm";
	data->path[pdl][9] = "assets/pdl10.xpm";
}

void	get_player_attack_path(t_data *data)
{
	data->path[par][0] = "assets/par1.xpm";
	data->path[par][1] = "assets/par2.xpm";
	data->path[par][2] = "assets/par3.xpm";
	data->path[par][3] = "assets/par4.xpm";
	data->path[par][4] = "assets/par5.xpm";
	data->path[par][5] = "assets/par6.xpm";
	data->path[par][6] = "assets/par7.xpm";
	data->path[par][7] = "assets/par8.xpm";
	data->path[par][8] = "assets/par9.xpm";
	data->path[par][9] = "assets/par10.xpm";
	data->path[par][10] = "assets/par11.xpm";
	data->path[par][11] = "assets/par12.xpm";
	data->path[pal][0] = "assets/pal1.xpm";
	data->path[pal][1] = "assets/pal2.xpm";
	data->path[pal][2] = "assets/pal3.xpm";
	data->path[pal][3] = "assets/pal4.xpm";
	data->path[pal][4] = "assets/pal5.xpm";
	data->path[pal][5] = "assets/pal6.xpm";
	data->path[pal][6] = "assets/pal7.xpm";
	data->path[pal][7] = "assets/pal8.xpm";
	data->path[pal][8] = "assets/pal9.xpm";
	data->path[pal][9] = "assets/pal10.xpm";
	data->path[pal][10] = "assets/pal11.xpm";
	data->path[pal][11] = "assets/pal12.xpm";
}
