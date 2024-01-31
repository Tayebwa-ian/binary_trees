#include "binary_trees.h"

/**
 * max - function compare two intergers to find the maximum
 * @a: first interger
 * @b: second interger value
 * Return: the maximum or greater of a and b
*/

int max(int a, int b)
{
	return ((a > b) ? a : b);
}

/**
 * binary_tree_is_leaf - function checks if node is  leaf or not
 * @node: node to be checked
 * Return: 1 if node if leaf, 0 if not
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}


/**
 * binary_tree_height - function computes maximum height of node from root
 * @tree: pointer to the root node of the tree
 * Return: 0 if tree is null
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	int right_height;
	int left_height;

	if (tree == NULL || binary_tree_is_leaf(tree))
		return (0);
	right_height = binary_tree_height(tree->right);
	left_height = binary_tree_height(tree->left);
	if (binary_tree_is_leaf(tree))
		return (max(left_height, right_height));
	return (1 + right_height);
}
