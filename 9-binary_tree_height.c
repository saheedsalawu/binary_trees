#include "binary_trees.h"

/**
 * binary_tree_height - This is a function that measures
 * the height of a binary tree.
 * @tree: is a pointer to the root node of the tree to measure the height.
 *
 * Return: hieght of the node or 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int a = 0, b = 0, c = 0;

	if (!tree)
		return (c);
	if (tree->left)
	{
		a++;
		a += binary_tree_height(tree->left);
	}
	if (tree->right)
	{
		b++;
		b += binary_tree_height(tree->right);
	}
	if (a > b)
		c = a;
	else
		c = b;
	return (c);
}
