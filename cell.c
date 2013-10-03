#include "includes.h"

t_cell	***cells_from_maze(t_maze *maze)
{
	int	i;
	int	j;
	t_cell ***cellmap;

	cellmap = (t_cell***)malloc(sizeof(t_cell**) * maze->height);
	i = 0;
	while (i < maze->height)
	{
		cellmap[i] = (t_cell**)malloc(sizeof(t_cell*) * maze->width);
		j = 0;
		while (i <maze->width)
		{
			ft_link_cells(maze, cellmap, i, j);
			j++;
		}
		i++;
	}
	return cellmap;
}

t_cell	*ft_init_cell(t_mark mark)
{
	t_cell *cell;

	cell = (t_cell*)malloc(sizeof(t_cell));
	cell->north = NULL;
	cell->west = NULL;
	cell->east = NULL;
	cell->south = NULL;
	cell->dist = 0;
	cell->mark = mark;

	return cell;
}

void	ft_link_cells(t_maze *maze, t_cell ***cellmap, int i, int j)
{
	if (maze->map[i][j] == maze->tile)
		cellmap[i][j] = ft_init_cell(EMPTY);
	if (maze->map[i - 1][j] == maze->tile)
		cellmap[i][j]->west = cellmap[i - 1][j];
	if (maze->map[i + 1][j] == maze->tile)
		cellmap[i][j]->east = cellmap[i + 1][j];
	if (maze->map[i][j + 1] == maze->tile)
		cellmap[i][j]->north = cellmap[i][j + 1];
	if (maze->map[i][j - 1] == maze->tile)
		cellmap[i][j]->south = cellmap[i][j - 1];
}