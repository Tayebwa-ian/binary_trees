#include "binary_trees.h"

/**
 * binary_tree_postorder - fucntion goes through tree from left, right, root
 * @tree: pointer to current node of tree to tranverse
 * @func: pointer to function to call each node
 * if tree or function is null, do nothing
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
