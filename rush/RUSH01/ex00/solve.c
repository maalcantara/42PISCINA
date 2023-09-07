/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcanta <malcanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 22:15:49 by malcanta          #+#    #+#             */
/*   Updated: 2023/08/27 22:16:21 by malcanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

bool	solve(t_map map, int *parsed_clues)
{
	map.grid[0][0] = parsed_clues[3];
	map.grid[0][1] = parsed_clues[2];
	map.grid[0][2] = parsed_clues[1];
	map.grid[0][3] = parsed_clues[0];
	map.grid[1][0] = parsed_clues[2];
	map.grid[1][1] = parsed_clues[1];
	map.grid[1][2] = parsed_clues[0];
	map.grid[1][3] = parsed_clues[3];
	map.grid[2][0] = parsed_clues[1];
	map.grid[2][1] = parsed_clues[0];
	map.grid[2][2] = parsed_clues[3];
	map.grid[2][3] = parsed_clues[2];
	map.grid[3][0] = parsed_clues[0];
	map.grid[3][1] = parsed_clues[3];
	map.grid[3][2] = parsed_clues[2];
	map.grid[3][3] = parsed_clues[1];
	free(parsed_clues);
	return (true);
}
