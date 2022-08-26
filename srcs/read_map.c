/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 15:04:19 by aamajane          #+#    #+#             */
/*   Updated: 2022/08/21 15:49:34 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

char	**read_map(char *arg)
{
	char	**map;
	int		fd;
	int		i;

	fd = open(arg, O_RDONLY);
	if (fd == -1)
	{
		ft_putendl_fd("Error\nCan't open map or map does't exist", 2);
		return (NULL);
	}
	map = (char **)malloc(sizeof(char *) * 100);
	if (!map)
		return (NULL);
	i = 0;
	map[i] = get_next_line(fd);
	if (!map[i])
	{
		ft_putendl_fd("Error\nCan't read map or empty map", 2);
		return (NULL);
	}
	while (map[i++])
		map[i] = get_next_line(fd);
	close(fd);
	return (map);
}

int	map_height(char **map)
{
	int	height;

	height = 0;
	while (map[height])
		height++;
	return (height);
}

int	map_width(char **map)
{
	int	width;

	width = ft_strlen(map[0]);
	return (width);
}

void	init_count(t_var *count)
{
	count->c = 0;
	count->e = 0;
	count->p = 0;
	count->i = -1;
}
