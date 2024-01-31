#include "binary_trees.h"

/**
 *binary_tree_size - measures the size of a binary tree
 *@tree: pointer to the root node of the tree to measure the size
 *Return: size or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_l, size_r;

	if (!tree)
		return (0);
	size_l = binary_tree_size(tree->left);
	size_r = binary_tree_size(tree->right);
	/* add 1 for the current node */
	return (size_r + size_l + 1);
}
