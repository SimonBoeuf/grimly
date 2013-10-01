#ifndef __MAZE_H__
#define __MAZE_H__

#include "misc.h"

/*
*Structures et fonctions relatives a la construction du labyrinthe
*/

typedef struct	s_maze
{
	int		height;
	int		width;
	char	walls;
	char	tile;
	char	path;
	char	in;
	char	out;
	t_cell *cells;
}				t_maze;

#endif