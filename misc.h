#ifndef __MISC_H__
#define __MISC_H__

#include "stdlib.h"
#include "unistd.h"

/*
*Fonctions diverses
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

#endif