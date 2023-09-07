/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcanta <malcanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 10:42:10 by malcanta          #+#    #+#             */
/*   Updated: 2023/08/30 11:42:18 by malcanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	num;

	i = 0;
	while (i < size)
	{
		num = 0;
		while (num < size - i - 1)
		{
			if (tab[num] > tab[num + 1])
				ft_swap(&tab[num], &tab[num + 1]);
			num++;
		}
		i++;
	}
}
/*#include <stdio.h>
int main()
{
    int array[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(array) / sizeof(array[0]);

    printf("\nArray inicial: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    ft_sort_int_tab(array, size);

    printf("\nArray ordenado: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}*/
