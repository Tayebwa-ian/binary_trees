#include "binary_trees.h"

/**
*binary_tree_insert_left -  inserts a left child for the root node
*@parent: pointer to root node whose left child is beign created
*@value: value of the left child
*Return: pointer to the left child, or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	 binary_tree_t *new_node, *temp;

	if (parent == NULL)
		return (NULL);
	new_node = binary_tree_node(parent, value);
	if (parent->left)
	{
		temp = parent->left;
		temp->parent = new_node;
		new_node->left = temp;
	}
	parent->left = new_node;
	return (new_node);
}
