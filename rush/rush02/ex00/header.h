/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malcanta <malcanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 21:03:29 by malcanta          #+#    #+#             */
/*   Updated: 2023/09/03 21:08:15 by malcanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
#define HEADER_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>

struct s_dict
{
	char	key[1024];
	char	value[1024];
};

int 	error(int size, char *str, char *str2);
int 	size_file(char *name_file);
char	*ft_strcpy(char *dest, char *src);
void	ft_strstr(char *str, char *to_find, struct s_dict s_dictionario, char *dest);
void    ft_convert(char *name_file, struct s_dict s_dictonario);

#endif
