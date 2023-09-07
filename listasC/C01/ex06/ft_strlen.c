/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:30:29 by malcanta          #+#    #+#             */
/*   Updated: 2023/08/29 19:48:26 by malcanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}
/*#include <stdio.h>
int main() {
    char input_string[] = "Hello world";
    int num_characters = ft_strlen(input_string);

    printf("Número de caracteres na string: %d\n", num_characters);

    return 0;
}*/
