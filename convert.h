#ifndef __CONVERT_H__
#define __CONVERT_H__

/*
*Structures et fonctions relatives a la conversion du labyrinthe en graphe
*/

/*
* construit un maze a partir du fichier pointe par fd
*/
t_maze	*ft_maze_from_file(int fd);

/*
* renvoie une map a afficher a partir du maze passe en parametre
*/
char	**map_from_maze(t_maze *maze);

#endif