#include "binary_trees.h"

/**
 *binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *@tree: pointer to the root node of the tree to count the number of nodes
 *Return: Number of node or 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes_l, nodes_r;

	if (!tree)
		return (0);
	nodes_l = binary_tree_nodes(tree->left);
	nodes_r = binary_tree_nodes(tree->right);
	if (tree->right || tree->left)
		return (nodes_l + nodes_r + 1);
	return (0);
}
