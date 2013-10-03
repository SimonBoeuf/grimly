#include "includes.h"

/*
****************************************************************
*Structures et fonctions relatives a la construction de la file*
****************************************************************
*/

typedef struct	s_queue
{
	t_elm	*start;
	t_elm	*end;
}				t_queue;

int		ft_is_empty(t_queue *q);

int		ft_count_elm(t_queue *q);

void	ft_queue(t_queue *q, t_elm *elm);

t_elm	*ft_unqueue(t_queue *q);

int		ft_delete_elm(t_queue *q, t_elm *elm);