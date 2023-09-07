/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcanta <malcanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 17:20:46 by malcanta          #+#    #+#             */
/*   Updated: 2023/09/06 11:00:48 by malcanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_ultimate_div_mod(int *a, int *b);

int main() {
    int a, b;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("\nValores iniciais:\n");
    printf("a: %d\n", a);
    printf("b: %d\n", b);

    ft_ultimate_div_mod(&a, &b);

    printf("\nResultados:\n");
    printf("Divisão: %d\n", a);
    printf("Módulo/resto: %d\n\n", b);

    return 0;
}
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	if (*b != 0)
	{
		div = *a / *b;
		mod = *a % *b;
		*a = div;
		*b = mod;
	}
}
