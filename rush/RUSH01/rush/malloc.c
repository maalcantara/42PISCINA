/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcanta <malcanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:27:04 by malcanta          #+#    #+#             */
/*   Updated: 2023/08/26 15:55:24 by malcanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main () 
{
	int *arr; //usa ponteiros por não saber a quantidade de eleventos contidos no vetor
	int n;

	printf("Tamanho do array: ");
	scanf("%d", &n); //leitura da quantidade de elementos que  array vai conter

	//malloc = memory allocation
	
	arr = (int *)malloc(n * sizeof(int));; //sizeof retorna a quantidade em bytes do int, e depois multiplicar pela quantidade de elementos recebidos pelo user no terminal.
	
	if (!arr){
		printf("Não foi possível criar a memória para esse array.\n");
		return 1; //retornar um valor diferente de 0 para caracterizar o erro.
	}

	//laço de repetição
	for (int i = 0; i < n; i++){
		arr[i] = i;
	}
	for (int i = 0; i < n; i++){
		printf("%d", arr[i]);
	}
	
	//liberar a memoória que foi alocada
	free(arr);

	return 0;
}
