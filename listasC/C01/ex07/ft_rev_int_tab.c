/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcanta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 10:00:05 by malcanta          #+#    #+#             */
/*   Updated: 2023/08/30 10:30:47 by malcanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < size / 2)
	{
		swap = tab[i];
		tab[i] = tab [size - 1 - i];
		tab[size - 1 - i] = swap;
		i++;
	}
}
/*#include <stdio.h>
int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);

    printf("\nArray inicial: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    ft_rev_int_tab(array, size);

    printf("\nArray invertido: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}*/
