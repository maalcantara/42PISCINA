/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sky.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcanta <malcanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:22:13 by malcanta          #+#    #+#             */
/*   Updated: 2023/08/27 18:33:43 by malcanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

void print_grid(int grid[4][4]) {
    printf("Matriz:\n");
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", grid[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int input[16];
    
    printf("Digite os 16 valores (de 1 a 4) separados por espaços:\n");
    
    for (int i = 0; i < 16; i++) {
        scanf("%d", &input[i]);
    }
    
    int grid[4][4];
    int input_index = 0;

    // Preenche a matriz com os valores do input
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            grid[i][j] = input[input_index++];
        }
    }

    print_grid(grid);
    
    return 0;
}
