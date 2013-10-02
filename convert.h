#include "includes.h"

/*
*****************************************************************
*Structures et fonctions relatives aux conversions du labyrinthe*
*****************************************************************
*/

/*
* Construit un maze a partir du fichier pointe par fd
*/
t_maze	*ft_maze_from_file(int fd);

/*
* Construit un graphe a partir du maze passe en parametre
*/
t_graph	*ft_graph_from_maze(t_maze *maze);

/*
* Renvoie une maze a afficher en fonction du graphe passe en parametre
*/
t_maze	*maze_from_graph(t_maze *maze, t_graph *graph);

/*
* Renvoie toutes les cellules du path
*/
t_cell	**ft_get_path(t_graph *graph);
