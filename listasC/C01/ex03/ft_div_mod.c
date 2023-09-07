/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcanta <malcanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:59:22 by malcanta          #+#    #+#             */
/*   Updated: 2023/09/06 11:29:45 by malcanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*void ft_div_mod(int a, int b, int *div, int *mod);

int main() {
    int a, b;
    int div_result;
    int mod_result;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    ft_div_mod(a, b, &div_result, &mod_result);

    printf("Divisão: %d\n", div_result);
    printf("Resto: %d\n", mod_result);

    return 0;
}*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
