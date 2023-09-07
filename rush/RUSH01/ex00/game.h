/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcanta <malcanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 22:15:24 by malcanta          #+#    #+#             */
/*   Updated: 2023/08/27 22:17:44 by malcanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_H
# define GAME_H
# include "utils.h"

typedef struct s_map
{
	int	**grid;
	int	size;
}	t_map;

t_map	create_map(int size);
void	destroy_map(t_map map);
void	print_map(t_map map);
int		*parse_clues(t_string clues);
bool	solve(t_map map, int *parsed_clues);

#endif
