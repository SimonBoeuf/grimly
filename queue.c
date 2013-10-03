#include "includes.h"

int				ft_is_empty (t_queue *q)
{
    if (!q->start)
        return 1;
    else
        return 0;
}

int 			ft_count_elm (t_queue *q) 
{
    int size;
    t_elm *tmp;

    tmp = q->start;
    size = 0;
    if (!q->start)
        return 0;
    else
    {
    	while (tmp)
    	{
    		tmp = tmp->next;
    		size++;
    	}
    }
    return size;
}

void			ft_queue(t_queue *q, t_elm *elm)
{
	if (q->start)
	{
		elm->next = q->start;
		q->start = elm;
	}
	else
	{
		q->start = elm;
		q->end = elm;
	}
}

t_elm		*ft_unqueue(t_queue *q)
{
	t_elm *tmp;

	if (!q->end)
		return NULL;
	else
	{
		tmp = q->end;
		q->end = q->end->prev;
	}
	return tmp;
}

int			ft_delete_elm(t_queue *q, t_elm *elm)
{
	t_elm	*tmp;

	tmp = q->start;
	while(tmp)
	{
		if (tmp == elm)
		{
			if (tmp == q->start)
			{
				q->start = elm->next;
				free(elm);
				return 1;
			}
			else
			{
				tmp = elm->next;
				free(elm);
				return 1;
			}
		}
		q->start = tmp;
	}
	return 0;
}