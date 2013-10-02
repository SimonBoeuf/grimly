#include "includes.h"

/*
***************************************************************
*Structures et fonctions relatives a la construction des cases*
***************************************************************
*/

typedef enum{
  WALL,
  TILE,
  PATH,
  IN,
  OUT
} ctype;

typedef struct			s_cell
{
	int		num;
	int		dist;
	t_path	**paths;
}						t_cell;