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
 * binary_tree_is_perfect - checks if the binary tree is perfect
 * left subtree is equal to right subtree and leaf nodes
 * @tree: pointer to the node of tree
 * Return:  0 if tree is NULL
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h_left, h_right;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	h_left = binary_tree_height1(tree->left);
	h_right = binary_tree_height1(tree->right);
	if (h_left == h_right)
	{
		if (binary_tree_is_perfect(tree->left) &&
			       binary_tree_is_perfect(tree->right))
			return (1);
	}
	return (0);
}
