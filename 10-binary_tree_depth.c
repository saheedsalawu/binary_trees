#include "binary_trees.h"

/**
 * binary_tree_depth - Thia is a function that measures the depth
 * of a node in a binary tree.
 * @tree: is a pointer to the node to measure the depth.
 *
 * Return: depth of the node or 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int a = 0;

	if (!tree)
		return (a);
	while (tree->parent)
	{
		a++;
		tree = tree->parent;
	}
	return (a);
}
