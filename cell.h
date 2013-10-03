#include "includes.h"

/*
***************************************************************
*Structures et fonctions relatives a la construction des cases*
***************************************************************
*/

typedef enum{
	EMPTY,
	PATH,
	BLOCKED,
	IN,
	OUT
} t_mark;

typedef struct			s_cell
{
	t_cell	*north;
	t_cell	*west;
	t_cell	*east;
	t_cell	*south;
	int		dist;
	t_mark	mark;

}						t_cell;


/*
* Renvoie un tableau de cellules vides correspondant au labyrinthe
*/
t_cell	***cells_from_maze(t_maze *maze);


/*
* Renvoie un pointeur sur une cellule nouvellement cree
*/
t_cell	*ft_init_cell(t_mark mark);

/*
* linke un tableau de cellules
*/
void	ft_link_cells(t_maze *maze, t_cell ***cellmap, int i, int j);