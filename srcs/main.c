/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 13:18:40 by aamajane          #+#    #+#             */
/*   Updated: 2022/05/07 17:26:34 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	main(int ac, char **av)
{
	t_data	data;

	if (ac != 2)
		ft_putendl_fd("Error\nInvalid number of arguments", 2);
	else
	{
		if (!check_map_extension(av[1]))
			return (0);
		data.map = read_map(av[1]);
		if (!data.map || !check_map(data.map))
			return (0);
		creat_game(&data);
	}
	return (0);
}
