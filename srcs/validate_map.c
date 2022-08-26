/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 13:23:55 by aamajane          #+#    #+#             */
/*   Updated: 2022/08/21 15:48:51 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	check_map_extension(char *arg)
{
	if (ft_strncmp(arg + ft_strlen(arg) - 4, ".ber", 4))
	{
		ft_putendl_fd("Error\nInvalid map extension", 2);
		return (0);
	}
	return (1);
}

int	check_map(char **map)
{
	if (!check_map_rectangular(map))
	{
		ft_putendl_fd("Error\nMap is not rectangular", 2);
		return (0);
	}
	if (!check_map_wall(map))
	{
		ft_putendl_fd("Error\nInvalid map wall", 2);
		return (0);
	}
	if (!check_map_char(map))
	{
		ft_putendl_fd("Error\nInvalid map or missing characters", 2);
		return (0);
	}
	return (1);
}

int	check_map_rectangular(char **map)
{
	int	i;

	i = -1;
	while (map[++i])
		if (ft_strlen(map[0]) != ft_strlen(map[i]))
			return (0);
	return (1);
}

int	check_map_wall(char **map)
{
	int	height;
	int	width;
	int	i;

	height = map_height(map);
	width = map_width(map);
	i = -1;
	while (++i < width)
		if (map[0][i] != '1' || map[height - 1][i] != '1')
			return (0);
	i = -1;
	while (map[++i])
		if (map[i][0] != '1' || map[i][width - 1] != '1')
			return (0);
	return (1);
}

int	check_map_char(char **map)
{
	t_var	nb;

	init_count(&nb);
	while (map[++nb.i])
	{
		nb.j = -1;
		while (map[nb.i][++nb.j])
		{
			if (map[nb.i][nb.j] != '0' && map[nb.i][nb.j] != '1' && \
				map[nb.i][nb.j] != 'C' && map[nb.i][nb.j] != 'E' && \
				map[nb.i][nb.j] != 'P' && map[nb.i][nb.j] != 'N')
				return (0);
			if (map[nb.i][nb.j] == 'C')
				nb.c++;
			if (map[nb.i][nb.j] == 'E')
				nb.e++;
			if (map[nb.i][nb.j] == 'P')
				nb.p++;
		}
	}
	if (nb.p != 1 || nb.c == 0 || nb.e == 0)
		return (0);
	return (1);
}
