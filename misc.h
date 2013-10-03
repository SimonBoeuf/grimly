#ifndef __MISC_H__
#define __MISC_H__

#include "includes.h"

/*
********************
*Fonctions diverses*
********************
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

#endif