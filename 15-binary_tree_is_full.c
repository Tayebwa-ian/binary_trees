#include "binary_trees.h"

/**
 *binary_tree_is_full - checks if a binary tree is full
 *@tree:  pointer to the root node of the tree to check
 *Return: 1 of true and 0 if false
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if  (!tree)
		return (1);
	if ((tree->left && !tree->right) ||
	    (!tree->left && tree->right))
		return (0);
	return (binary_tree_is_full(tree->left) &&
		binary_tree_is_full(tree->right));
}
