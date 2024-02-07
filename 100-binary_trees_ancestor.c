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
	binary_tree_t *temp;

	if (first && second)
	{
		while (first)
		{
			temp = (binary_tree_t *)second;
			while (temp)
			{
				if (first == temp)
					return ((binary_tree_t *)first);
				else if (first->parent == temp->parent)
					return (first->parent);
				else if (first == temp->parent)
					return ((binary_tree_t *)first);
				else if (temp == first->parent)
					return ((binary_tree_t *)temp);
				temp = temp->parent;
			}
			first = first->parent;
		}
	}
	return (NULL);
}
