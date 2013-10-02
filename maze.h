#include "includes.h"

/*
*******************************************************************
*Structures et fonctions relatives a la construction du labyrinthe*
*******************************************************************
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
	char	**map;
}				t_maze;