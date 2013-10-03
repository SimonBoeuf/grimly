/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonction.diverse.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/10/03 14:11:28 by lfouquet          #+#    #+#             */
/*   Updated: 2013/10/03 18:26:50 by lfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

void *ft_realloc(void * ptr, int new_size, int old_size)
{
	char *ptr2;
	char *tmp;
	int i;

	i = 0;
	if (ptr == NULL)
		return malloc(new_size);
	if (old_size <= new_size)
	{
		if ((ptr2 = malloc(new_size)) == NULL)
			return NULL;
		tmp = ptr;
		while ( i <= old_size)
		{
			ptr2[i] = tmp[i];
			i++;
		}
		free(ptr);
		return ptr2;
	}
	else
		return ptr;
}
