#include "includes.h"

void	ft_display_maze(t_maze *maze)
{
	int		i;
	int		j;

	i = 0;
	while (i < maze->height)
	{
		j = 0;
		while (j < maze->width)
		{
			ft_putchar(maze->map[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}