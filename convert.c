#include "convert.h"

char	**map_from_maze(t_maze *maze)
{
	char	**tab;
	int		i;
	int		j;

	tab = (char**)malloc(sizeof(char*) * maze->height);
	i = 0;
	while(i < maze->height)
	{
		tab[i] = (char*)malloc(maze->width + 1);
		j = 0;
		while (j < maze->width)
		{
			tab[i][j] = ft_char_from_cell(maze, maze->cells->type);
			maze->cells = ft_next_cell(maze);
			j++;
		}
		tab[i][j] = 0;
		i++;
	}
}

t_cell	*ft_next_cell(t_maze *maze)
{
	int	i;
	if (maze->cells->x == maze->height && maze->cells->y == maze->width)
		return NULL;
	if (maze->cells->y == maze->width)
	{
		maze->cells = maze->cells->bottom;
		i = 0;
		while (i < maze->width)
		{
			maze->cells = maze->cells->left;
			i++;
		}
		return maze->cells;
	}
	return maze->cells->right;
}

char	ft_char_from_cell(t_maze *maze, ctype type)
{
	if (type == WALL)
		return maze->walls;
	if (type == TILE)
		return maze->tile;
	if (type == PATH)
		return maze->path;
	if (type == IN)
		return maze->in;
	if (type == OUT)
		return maze->out;
}