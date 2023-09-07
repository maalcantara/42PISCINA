/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcanta <malcanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 22:15:43 by malcanta          #+#    #+#             */
/*   Updated: 2023/08/27 22:16:23 by malcanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

void	ft_putchar(char c);

void	print_map(t_map map)
{
	int	i;
	int	j;

	i = 0;
	while (i < map.size)
	{
		j = 0;
		while (j < map.size - 1)
		{
			ft_putchar(map.grid[i][j] + '0');
			ft_putchar(' ');
			j++;
		}
		ft_putchar(map.grid[i][j] + '0');
		ft_putchar('\n');
		i++;
	}
}
