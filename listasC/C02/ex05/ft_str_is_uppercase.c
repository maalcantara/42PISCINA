/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcanta <malcanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:29:25 by malcanta          #+#    #+#             */
/*   Updated: 2023/09/05 14:36:57 by malcanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
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

	texto1 = "BOMDIA";
	texto2 = "!@";
	texto3 = " ";
	texto4 = "bomdia";
	
	printf("%d\n", ft_str_is_uppercase(texto1));
	printf("%d\n", ft_str_is_uppercase(texto2));
	printf("%d\n", ft_str_is_uppercase(texto3));
	printf("%d\n", ft_str_is_uppercase(texto4));
	return 0;
}*/