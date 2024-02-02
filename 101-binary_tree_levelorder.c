#include "binary_trees.h"

/**
 *createQueue - create an empty queue
 *Return: pointer to created queue or NULL if it fails
 */
queue_t *createQueue()
{
	queue_t queue = malloc(sizeof(queue_t));

	if (!queue)
		return NULL;
	queue->front = NULL;
	queue->end = NULL;
	return (queue);
}

/**
 *push - insert an element in a queue
 *@queue: the queue to insert into
 *@data: data to insert in the queue
 *Return: void
 */
void push(queue_t *queue, binary_tree_t *data)
{
	qnode_t *node = malloc(sizeof(qnode_t));

	if (queue && data)
	{
		node->value = data;
		node->next = NULL
		if (!queue->front)
		{
			queue->front = node;
			queue->end = node;
			return;
		}
		queue->end->next = value;
		queue->end = value;
	}
}

/**
 *pop - remove an element from a queue
 *@queue: the queue
 *Return: the point to the poped element
 */
binary_tree_t *pop(queue_t *queue)
{
	binary_tree_t *temp_data;
	qnode_t *temp_node;

	if (queue)
	{
		temp_data = queue->front->value;
		temp_node = queue->front;
		if (!queue->front->next)
			queue->end = NULL;
		queue->front = queue->front->next;
		free(temp_node);
		return (temp_data);
	}
	return (NULL);
}

/**
 *binary_tree_levelorder - goes through a binary tree using level-order
 *@tree: pointer to the root node of the tree to traverse
 *@func:  pointer to a function to call for each node
 *Return: void
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		
	}
}
