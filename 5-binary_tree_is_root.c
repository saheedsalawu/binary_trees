#include "binary_trees.h"

/**
 * binary_tree_is_root - This is a function that checks if
 * a given node is a root.
 * @node: is a pointer to the node to check.
 *
 * Return: 0 or 1
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	int a;

	if (!node)
		a = 0;
	else
	{
		if (!(node->parent))
			a = 1;
		else
			a = 0;
	}
	return (a);
}
