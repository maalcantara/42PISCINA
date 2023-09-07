/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcanta <malcanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 12:47:57 by malcanta          #+#    #+#             */
/*   Updated: 2023/09/07 13:30:40 by malcanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int ft_strlen(char *str){
    int i = 0;
    while(*str != '\0'){
        str++;
        i++;
    }
    return i;
}
int main(int argc, char *argv[]) {
    if (argc > 0) {
        write(1, argv[0], ft_strlen(argv[0]));
        write(1, "\n", 1);
    }
    return 0;
}
