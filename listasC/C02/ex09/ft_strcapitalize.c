/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcanta <malcanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:16:55 by malcanta          #+#    #+#             */
/*   Updated: 2023/09/05 19:08:46 by malcanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_alpha(char c)
{
	if (!(c >= 'A' && c <= 'Z')
		&& !(c >= 'a' && c <= 'z'))
		return (0);
	return (1);
}

int	ft_char_is_num(char c)
{
	if (!(c >= '0' && c <= '9'))
		return (0);
	return (1);
}

char	ft_to_upper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

char	ft_to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0)
			str[0] = ft_to_upper(str[0]);
		else if (!ft_char_is_alpha(str[i - 1]) && !ft_char_is_num(str[i - 1])
			&& ft_char_is_alpha(str[i]))
			str[i] = ft_to_upper(str[i]);
		else
			str[i] = ft_to_lower(str[i]);
		i++;
	}
	return (str);
}
/*#include <stdio.h>
int main() {
	char str1[] = "oi, tUdo beM? 42paLAvras quarenta-e-duas; cinquenta+e+um";

	printf("%s\n", ft_strcapitalize(str1));

	return 0;
}*/
