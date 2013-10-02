#include "includes.h"

/*
******************************************************************
*Structures et fonctions relatives aux paths reliant les cellules*
******************************************************************
*/

typedef struct			s_path
{
	int		on_path;
	t_cell	*cell1;
	t_cell	*cell2;
	int		dist;
}						t_path;