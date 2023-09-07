/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_clues.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcanta <malcanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 22:15:37 by malcanta          #+#    #+#             */
/*   Updated: 2023/08/27 22:16:26 by malcanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	*parse_clues(t_string clues)
{
	int		i;
	int		*parsed_clues;
	char	clue_str[2];

	parsed_clues = (int *)malloc((SIZE * SIZE) * sizeof(int *));
	i = 0;
	while (i < CLUE_COUNT)
	{
		if (clues[i] != ' ')
		{
			clue_str[0] = clues[i];
			clue_str[1] = '\0';
			parsed_clues[i / 2] = ft_atoi(clue_str);
		}
		i++;
	}
	return (parsed_clues);
}
