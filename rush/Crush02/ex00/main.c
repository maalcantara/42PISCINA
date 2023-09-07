/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnatanae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 11:36:43 by cnatanae          #+#    #+#             */
/*   Updated: 2023/09/03 11:45:18 by cnatanae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char *argv[])
{
	char *dict;
	struct s_dict s_dictonario;
	if(!error(argc, argv[1], argv[2]))
		return (0);
	ft_convert("numbers.dict", s_dictonario);
	
	return (0);


}
