/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcanta <malcanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 22:16:03 by malcanta          #+#    #+#             */
/*   Updated: 2023/08/27 22:16:15 by malcanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

bool	validate_input(t_string clues);
bool	validate_argc(int argc);
bool	validate_strlen(t_string clues);
bool	validate_format(t_string clues);

t_string	validate_args(int argc, t_string argv[])
{
	char	*clues;

	if (!validate_argc(argc))
	{
		return (NULL);
	}
	clues = argv[1];
	if (!(validate_strlen(clues) && validate_format(clues)))
	{
		return (NULL);
	}
	if (!validate_input(clues))
	{
		return (NULL);
	}
	return (clues);
}

bool	validate_argc(int argc)
{
	if (argc != ARG_COUNT)
	{
		return (false);
	}
	return (true);
}

bool	validate_strlen(t_string clues)
{
	if (ft_strlen(clues) != CLUE_COUNT)
	{
		return (false);
	}
	return (true);
}

bool	validate_format(t_string clues)
{
	int	i;

	while (clues[i] != '\0')
	{
		if (i % 2 == 0)
		{
			if (!(clues[i] >= '1' && clues[i] <= (SIZE + '0')))
			{
				return (false);
			}
		}
		else
		{
			if (clues[i] != ' ')
			{
				return (false);
			}
		}
		i++;
	}
	return (true);
}

bool	validate_input(t_string clues)
{
	int			i;
	t_string	valid;

	valid = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
	i = 0;
	while (i < CLUE_COUNT)
	{
		if (clues[i] != valid[i])
		{
			return (false);
		}
		i++;
	}
	return (true);
}
