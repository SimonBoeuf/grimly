/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonction.char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/10/03 14:08:13 by lfouquet          #+#    #+#             */
/*   Updated: 2013/10/03 18:26:22 by lfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

void	ft_addstr(char *str, int i, char *to_put, int length)
{
	int		j;

	j = 0;
	while (j < length)
	{
		str[i + j] = to_put[j];
		j++;
	}
}
