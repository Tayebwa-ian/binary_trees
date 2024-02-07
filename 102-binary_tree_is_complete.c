#include "binary_trees.h"

/**
 *binary_tree_is_complete - check if binary tree is complete
 *@tree: pointer to the root node of the tree to check
 *Return: 1 if tree is complete or 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int right, left;

	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	left = binary_tree_is_complete(tree->left);
	right = binary_tree_is_complete(tree->right);
	return (left && right);
}
