#ifndef __CELL_H__
#define __CELL_H__

/*
*Structures et fonctions relatives a la construction des cases
*/

typedef struct	s_cell	t_cell;
{
	int				x;
	int				y;
	int				nbmoves;
	struct	s_cell	*parent;
	struct	s_cell	*left;
	struct	s_cell	*right;
	struct	s_cell	*up;
	struct	s_cell	*bottom;
}				t_cell;

#endif