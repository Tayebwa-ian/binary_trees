#include "binary_trees.h"

/**
 *binary_tree_preorder - function throught the tree from root - left -  right
 *@tree: pointer to the current node
 *@func: pointer to function to call each node
 *if tree or function is null, do nothing
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}

