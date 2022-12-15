#include "binary_trees.h"

/**
 * binary_tree_is_leaf - This is a function that checks if a node is a leaf.
 * @node: is a pointer to the node to check
 *
 * Return: 0 or 1
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int a;

	if (!node)
		a = 0;
	else
	{
		if (!(node->left) && !(node->right))
			a = 1;
		else
			a = 0;
	}
	return (a);
}
