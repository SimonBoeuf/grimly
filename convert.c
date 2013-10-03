#include "includes.h"

t_maze	*ft_maze_from_file(int fd)
{

}

t_graph	*ft_graph_from_maze(t_maze *maze)
{
	int		i;
	int		nbpaths;
	t_graph	*graph;
	t_cell	*cell;
	t_path	*path;

	cell = ft_find_in(maze);
	graph = ft_init_graph(cell);
	nbpaths = ft_get_nb_paths(maze, cell)
	while(cell)
	{
		
	}
}

t_maze	*maze_from_graph(t_maze *maze, t_graph *graph)
{

}

t_cell	**ft_get_path(t_graph *graph)
{
	
}