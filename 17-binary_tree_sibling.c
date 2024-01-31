#include "binary_trees.h"

/**
 *binary_tree_sibling - finds the sibling of a node
 *@node: pointer to the node to find the sibling
 *Return: pointer to the sibling node or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *temp;

	temp = NULL;
	if (node && node->parent)
	{
		if (node->parent->left == node)
			temp = node->parent->right;
		else if (node->parent->right == node)
			temp = node->parent->left;
		return (temp);
	}
	return (NULL);
}
