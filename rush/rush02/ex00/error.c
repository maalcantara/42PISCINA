/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcanta <malcanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 21:02:28 by malcanta          #+#    #+#             */
/*   Updated: 2023/09/03 21:09:38 by malcanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			write(1, "Dict error", 11);
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_is_dict(char *str)
{
	char	to_find[6];
	int	i;
	int	j;

	to_find[6] = {".dict"};
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (to_find[j] == str[i + j]
			&& str[i + j] != '\0' && to_find[j] != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (1);
		}
		j = 0;
		i++;
	}
	write(1, "Dict error", 11);
	return (0);
}

int	error(int argc, char *str, char *str2)
{
	if (argc == 2)
	{
		ft_is_numeric(str);
	}
	else if (argc == 3)
	{
		ft_is_dict(str);
		ft_is_numeric(str2);
	}
	else
	{
		write(1, "Dict error", 11);
		return (0);
	}
	return (1);
}
