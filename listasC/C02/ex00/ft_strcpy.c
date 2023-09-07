/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcanta <malcanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:20:07 by malcanta          #+#    #+#             */
/*   Updated: 2023/09/05 13:00:52 by malcanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*original_dest;
	int		i;

	i = 0;
	original_dest = dest;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (original_dest);
}
/*#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src);

int main() {
    char source[] = "Hello world.";
    char destination_ft[20];
    char destination_orig[20];

    ft_strcpy(destination_ft, source);
    strcpy(destination_orig, source);

    printf("String original: %s\n", source);
    printf("Função copiada ft_strcpy: %s\n", destination_ft);
    printf("Função original strcpy: %s\n", destination_orig);

    return 0;
}*/