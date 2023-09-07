/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcanta <malcanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 22:14:44 by malcanta          #+#    #+#             */
/*   Updated: 2023/08/27 22:17:14 by malcanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

void	destroy_map(t_map map)
{
	int	i;

	i = 0;
	while (i < map.size)
	{
		free(map.grid[i]);
		i++;
	}
	free(map.grid);
}
