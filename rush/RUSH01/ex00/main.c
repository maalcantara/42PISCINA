/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcanta <malcanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 22:15:31 by malcanta          #+#    #+#             */
/*   Updated: 2023/08/27 22:16:29 by malcanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

int	main(int argc, t_string argv[])
{
	t_map		map;
	t_string	clues;

	map = create_map(SIZE);
	clues = validate_args(argc, argv);
	if (clues && solve(map, parse_clues(clues)))
	{
		print_map(map);
	}
	else
	{
		ft_puts("Error");
	}
	destroy_map(map);
	return (0);
}
