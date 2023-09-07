/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcanta <malcanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:03:14 by malcanta          #+#    #+#             */
/*   Updated: 2023/09/05 16:09:47 by malcanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
/*#include <stdio.h>
int main (){
	char texto1[] = "Bomdia";
    char texto2[] = "BOMDIA";
    char texto3[] = "bomdia";

    printf("%s\n", ft_strupcase(texto1));
    printf("%s\n", ft_strupcase(texto2));
    printf("%s\n", ft_strupcase(texto3));
    
    return 0;
}*/