/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcanta <malcanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:10:49 by malcanta          #+#    #+#             */
/*   Updated: 2023/09/05 16:11:27 by malcanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*#include <stdio.h>
int main (){
	char texto1[] = "Bomdia";
    char texto2[] = "BOMDIA";
    char texto3[] = "bomdia";

    printf("%s\n", ft_strlowcase(texto1));
    printf("%s\n", ft_strlowcase(texto2));
    printf("%s\n", ft_strlowcase(texto3));
    
    return 0;
}*/