#include "binary_trees.h"


/**
 * binary_tree_uncle - find the uncle of the node
 * @node: node in binary tree
 * Return: pointer to the uncle node or NULL
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle = node->parent->parent;

	if (node == NULL || node->parent == NULL || uncle == NULL)
		return (NULL);
	if (uncle->right == node->parent)
		return (uncle->left);
	else if (uncle->left == node->parent)
		return (uncle->right);
	return (NULL);
}
