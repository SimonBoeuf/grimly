/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonction.get.entry.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/10/03 14:17:12 by lfouquet          #+#    #+#             */
/*   Updated: 2013/10/03 18:27:48 by lfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

char    *ft_get_by_read(char *result, int source)
{
    int     red;
    int     i;
    int     l_buff;
    char    *buf;

    i = 0;
    l_buff = BUFF;
    buf = malloc(sizeof(char) * BUFF);
    result = malloc(sizeof(char) * BUFF);
    while ((red = read(source, buf, BUFF)))
    {
        if (red != BUFF)
            l_buff = red;
        result = ft_realloc(result, BUFF * (i) + l_buff, BUFF * (i));
        ft_addstr(result, BUFF * i, buf, l_buff);
        i++;
    }
    result = ft_realloc(result, BUFF * (i - 1) + l_buff + 1,
                        BUFF * (i - 1) + l_buff);
    result[BUFF * (i - 1) + l_buff] = '\0';
    return (result);
}



char	*ft_get_lab_by_param(char *str)
{
	int		fd;
	char	*result;
	void	*null;

	null = 0;
	if ((fd = open(str, O_RDONLY)) != -1)
	{
		result = ft_get_by_read(result, fd);
		close(fd);
		return (result);
	}
	else
		return (null);
}

char	**ft_get_all_labs_by_param(char **param, int count_param)
{
	int		i;
	char	**result;

	result = malloc(sizeof(char*) * count_param);
	i = 0;
	while (i < count_param)
	{
		result[i] = ft_get_lab_by_param(param[i]);
		i++;
	}
	return (result);
}
