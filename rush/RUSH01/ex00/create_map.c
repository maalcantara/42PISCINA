/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcanta <malcanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 22:14:35 by malcanta          #+#    #+#             */
/*   Updated: 2023/08/27 22:17:17 by malcanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

t_map	create_map(int size)
{
	t_map	map;
	int		i;
	int		j;

	map.size = size;
	map.grid = (int **)malloc(size * sizeof(int *));
	i = 0;
	while (i < size)
	{
		map.grid[i] = (int *)malloc(size * sizeof(int *));
		j = 0;
		while (j < size)
		{
			map.grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (map);
}
