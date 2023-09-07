/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcanta <malcanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:36:42 by malcanta          #+#    #+#             */
/*   Updated: 2023/09/07 15:01:16 by malcanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str){
    int i = 0;
    while (*str != '\0'){
        str++;
        i++;
    }
    return 0;
}

int main (int argc, char *argv[]){
    for (int i = 1; i < argc; i++) {
        int len = 0;
        while (argv[i][len] != '\0') {
            len++;
        }
        write(1, argv[i], len);
        write(1, "\n", 1);
    }
    return 0;
}
