/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcanta <malcanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 18:14:09 by malcanta          #+#    #+#             */
/*   Updated: 2023/09/06 16:26:13 by malcanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z')
			&& !(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
#include <stdio.h>
int main (){
	char *texto1;
	char *texto2;
	char *texto3;

	texto1 = "Bomdia";
	texto2 = "!@";
	texto3 = "1234";

	printf("%d\n", ft_str_is_alpha(texto1));
	printf("%d\n", ft_str_is_alpha(texto2));
	printf("%d\n", ft_str_is_alpha(texto3));
	
	return 0;
}