/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcanta <malcanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:39:34 by malcanta          #+#    #+#             */
/*   Updated: 2023/09/06 13:18:49 by malcanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 != *s2)
		return (-1);
	else if (*s1 < *s2)
		return (1);
	return (0);
}
/*#include <stdio.h>
int main() {
    char s1[] = "olá";
    char s2[] = "tchau";
    int result = ft_strcmp(s1, s2);
    if (result == 0) {
        printf("As strings são iguais.\n");
    } else if (result < 0) {
        printf("A primeira string vem antes da segunda.\n");
    } else {
        printf("A segunda string vem antes da primeira.\n");
    }
    return 0;
}*/