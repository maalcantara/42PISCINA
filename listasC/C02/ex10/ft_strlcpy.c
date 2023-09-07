/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   : ft_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcanta <malcanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 18:25:00 by malcanta          #+#    #+#             */
/*   Updated: 2023/09/05 19:15:35 by malcanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	if (size > 0)
	{
		j = 0;
		while (src[j] != '\0' && j < (size - 1))
		{
			dest[j] = src[j];
			j++;
		}
		dest[j] = '\0';
	}
	return (i);
}
/*#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main() {
    char src[] = "Bom, dia";
    char dest[5]; // Defina o tamanho máximo da string de destino aqui

    unsigned int len = ft_strlcpy(dest, src, sizeof(dest));

    printf("String copiada: %s\n", dest);
    printf("Tamanho da string copiada: %u\n", len);

    return 0;
}*/
