/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcanta <malcanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:48:50 by malcanta          #+#    #+#             */
/*   Updated: 2023/09/05 15:59:32 by malcanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}
/*#include <stdio.h>
int main (){
	char *texto1;
	char *texto2;
	char *texto3;

	texto1 = "Bomdia";
	texto2 = "!@";
	texto3 = "";

	printf("%d\n", ft_str_is_printable(texto1));
	printf("%d\n", ft_str_is_printable(texto2));
	printf("%d\n", ft_str_is_printable(texto3));
	
	return 0;
}*/