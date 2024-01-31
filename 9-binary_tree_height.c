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
 * binary_tree_height - function computes maximum height of node from root
 * @tree: pointer to the root node of the tree
 * Return: 0 if tree is null
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	int right_height;
	int left_height;

	if (tree == NULL)
		return (0);
	right_height = binary_tree_height(tree->right);
	left_height = binary_tree_height(tree->left);
	if (tree->left == NULL && tree->right == NULL)
		return (max(left_height, right_height));
	return (1 + right_height);
}
