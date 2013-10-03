/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonction.get.entry.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfouquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/10/03 18:25:14 by lfouquet          #+#    #+#             */
/*   Updated: 2013/10/03 18:30:25 by lfouquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHAR_H__
#define __CHAR_H__

#include <fcntl.h>

/*
** Taille du buffer qd on utilise read
*/
#define BUFF 6

char	*ft_get_stdin(char *result);
char	*ft_get_lab_by_param(char *str);
char	**ft_get_all_labs_by_param(char **param, int count_param);
char	*ft_get_by_read(char *result, int source);
#endif
