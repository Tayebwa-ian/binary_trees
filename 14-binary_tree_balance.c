#include "binary_trees.h"

/**
 * binary_tree_height1 - function computes maximum height of node from root
 * @tree: pointer to the root node of the tree
 * Return: 0 if tree is null
*/

int binary_tree_height1(const binary_tree_t *tree)
{
	int right_height, left_height;

	if (tree == NULL)
		return (0);
	right_height = binary_tree_height1(tree->right);
	left_height = binary_tree_height1(tree->left);
	if  (left_height >= right_height)
		return (1 + left_height);
	return (1 + right_height);
}

/**
 * binary_tree_balance - computes difference between left and right leaves
 * @tree: pointer to the node of tree
 * Return: difference  or 0 if tree is NULL
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int height_left, height_right;

	if (tree == NULL)
		return (0);
	height_left = binary_tree_height1(tree->left);
	height_right = binary_tree_height1(tree->right);
	return (height_left - height_right);
}
