/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcanta <malcanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 22:15:55 by malcanta          #+#    #+#             */
/*   Updated: 2023/08/27 22:17:37 by malcanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H
# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>
# include <stdio.h>
# define ARG_COUNT 2
# define SIZE 4
# define CLUE_COUNT 31

typedef char	*t_string;

enum e_args
{
	col1up,
	col2up,
	col3up,
	col4up,
	col1down,
	col2down,
	col3down,
	col4down,
	row1left,
	row2left,
	row3left,
	row4left,
	row1right,
	row2right,
	row3right,
	row4right,
};

int			ft_atoi(t_string str);
void		ft_putchar(char c);
void		ft_puts(t_string str);
int			ft_strlen(t_string str);
t_string	validate_args(int argc, t_string argv[]);

#endif
