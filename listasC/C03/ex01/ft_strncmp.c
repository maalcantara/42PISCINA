/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcanta <malcanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:20:27 by malcanta          #+#    #+#             */
/*   Updated: 2023/09/06 16:04:25 by malcanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0)
	{
		if(*s1 != *s2)
			return (*s1 - *s2);
		else if (*s1 == '\0' || *s2 == '\0')
			return (0);
	s1++;
	s2++;
	n--;
    }
	return (0);
}
int main() {
    char str1[] = "Boa tarde";
    char str2[] = "Boa noite";
    
    int result = ft_strncmp(str1, str2, 9); // Comparar os primeiros 5 caracteres
    
    if (result == 0) {
        printf("As primeiras 5 letras são iguais.\n");
    } else if (result < 0) {
        printf("str1 vem antes de str2.\n");
    } else {
        printf("str2 vem antes de str1.\n");
    }
    
    return 0;
}