#include "binary_trees.h"


/**
 * binary_tree_depth - function computes depth of a node from root
 * @tree: pointer to the root node of the tree
 * Return: depth of the tree
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t tree_depth = 0;

	if (tree == NULL)
		return (0);
	while (tree->parent)
	{
		tree_depth++;
		tree = tree->parent;
	}
	return (tree_depth);
}
