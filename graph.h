#include "includes.h"

/*
***************************************************************
*Structures et fonctions relatives a la construction du graphe*
***************************************************************
*/

typedef struct	s_graph
{
	int		**nbcells;
	t_cell	**cells;
	t_cell	*in;
}				t_graph;

/*
* Initialise un nouveau graphe
*/
t_graph	*ft_init_graph();