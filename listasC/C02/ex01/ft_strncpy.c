/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcanta <malcanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:48:25 by malcanta          #+#    #+#             */
/*   Updated: 2023/09/04 18:12:34 by malcanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	char			*original_dest;

	original_dest = dest;
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (original_dest);
}
/*#include <stdio.h>
int main (){
	char source[] = "Bom dia!";
	char destination[] = "boa noite";
	
	ft_strncpy(destination, source, 5);

	printf("Origem: %s\n", source);
	printf("Cópia (ft_strcpy): %s\n", destination);

	return 0;
}*/
