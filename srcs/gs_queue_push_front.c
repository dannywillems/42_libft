#include "gs_queue.h"
#include "gs_queue_prototypes.h"

void		gs_queue_push_front(t_queue *queue, void *data)
{
	t_dnode *tmp;

	if (queue && (tmp = gs_dnode_create(data)))
	{
		if (gs_queue_isempty(queue))
		{
			queue->head = tmp;
			queue->tail = tmp;
		}
		else
		{
			queue->head->previous = tmp;
			tmp->next = queue->head;
			queue->head = tmp;
		}
		queue->size += 1;
	}
}
