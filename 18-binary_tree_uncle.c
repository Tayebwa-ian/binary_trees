#include "binary_trees.h"


/**
 * binary_tree_uncle - find the uncle of the node
 * @node: node in binary tree
 * Return: pointer to the uncle node or NULL
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grand;

	if (node && node->parent)
	{
		grand = node->parent->parent;
		if (grand)
		{
			if (grand->right == node->parent)
				return (grand->left);
			else if (grand->left == node->parent)
				return (grand->right);
		}
	}
	return (NULL);
}
