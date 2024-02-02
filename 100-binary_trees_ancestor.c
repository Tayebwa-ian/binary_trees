#include "binary_trees.h"

/**
 *binary_trees_ancestor - finds the lowest common ancestor of two nodes
 *@first: pointer to the first node
 *@second: pointer to the second node
 *Return: pointer to the ancestor or NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	if (first && second)
	{
		if (first->parent->parent == second->parent->parent)
			return (first->parent->parent);
	}
	return (NULL);
}
