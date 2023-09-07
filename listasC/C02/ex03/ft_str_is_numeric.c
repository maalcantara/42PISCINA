/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcanta <malcanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:13:19 by malcanta          #+#    #+#             */
/*   Updated: 2023/09/05 13:49:27 by malcanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
/*#include <stdio.h>
int main (){
	char *num1;
	char *num2;
	char *texto;
	char *texto1;
	
	num1 = "1989";
	num2 = "-5458";
	texto = "bom dia";
	texto1 = "bom4dia";
	
	printf("%d\n", ft_str_is_numeric(num1));
	printf("%d\n", ft_str_is_numeric(num2));
	printf("%d\n", ft_str_is_numeric(texto));
	printf("%d\n", ft_str_is_numeric(texto1));
}*/