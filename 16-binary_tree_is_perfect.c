#include "binary_trees.h"

/**
 * binary_tree_size - This is a function that measures
 * the size of a binary tree.
 * @tree:  is a pointer to the root node of the tree to measure the size.
 *
 * Return: size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int a = 0;

	if (!tree)
		return (0);
	a++;
	a += binary_tree_size(tree->left);
	a += binary_tree_size(tree->right);
	return (a);
}

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

/**
 * binary_tree_is_perfect - This is a function that checks if
 * a binary tree is perfect.
 * @tree: is a pointer to tree to be checked
 *
 * Return: 0 or 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int node;
	int sizee;

	if (!tree)
		return (0);
	if (!(tree->left) && !(tree->right))
		return (1);

	sizee = binary_tree_size(tree);
	node = binary_tree_nodes(tree);
	if ((sizee + 1) == (1 << node))
		return (1);
	else
		return (0);
	return (0);
}
