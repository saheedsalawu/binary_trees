#include "binary_trees.h"

/**
 * binary_tree_nodes - This is a function that counts
 * the nodes with at least 1 child in a binary tree.
 * @tree:  is a pointer to the root node of the
 * tree to count the number of leaves.
 *
 * Return: the number of leaves in the tree or 0.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int a = 0;

	if (!tree)
		return (0);
	if ((tree->left) || (tree->right))
		a = 1;
	a += binary_tree_nodes(tree->left);
	a += binary_tree_nodes(tree->right);
	return (a);
}
