#include "display.h"

void	ft_display_maze(t_maze *maze)
{
	char	**map;
	int		i;
	int		j;

	map = map_from_maze(maze);
	i = 0;
	while (i < maze->height)
	{
		j = 0;
		while (j < maze->width)
		{
			ft_putchar(map[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}