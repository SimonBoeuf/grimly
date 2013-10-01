#ifndef __CONVERT_H__
#define __CONVERT_H__

#include "maze.h"

/*
* Structures et fonctions relatives a la conversion du labyrinthe en graphe
*/

/*
* Construit un maze a partir du fichier pointe par fd
*/
t_maze	*ft_maze_from_file(int fd);

/*
* Renvoie une map a afficher a partir du maze passe en parametre
*/
char	**map_from_maze(t_maze *maze);

/*
* Renvoie la prochaine cellule du labyrinthe a afficher
*/
t_cell	*ft_next_cell(t_maze *maze);

/*
* Renvoie le caractere correspondant a la cellule
*/
char	ft_char_from_cell(t_maze *maze, ctype type);

#endif