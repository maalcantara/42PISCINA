/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcanta <malcanta@student42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:55:54 by malcanta          #+#    #+#             */
/*   Updated: 2023/09/05 14:22:24 by malcanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
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
	char *texto4;

	texto1 = "Bomdia";
	texto2 = "!@";
	texto3 = " ";
	texto4 = "bomdia";
	
	printf("%d\n", ft_str_is_lowercase(texto1));
	printf("%d\n", ft_str_is_lowercase(texto2));
	printf("%d\n", ft_str_is_lowercase(texto3));
	printf("%d\n", ft_str_is_lowercase(texto4));
	return 0;
}*/
