#include "binary_trees.h"

/**
 * binary_tree_height_b - This is a function that measures the
 * height of a binary tree.
 * @tree: is a pointer to the root node of the tree to measure the height.
 *
 * Return: hieght of the node or 0.
 */
size_t binary_tree_height_b(const binary_tree_t *tree)
{
	int a = 0, b = 0, c = 0;

	if (!tree)
		return (c);
	c = 1;
	if (tree->left)
	{
		a += binary_tree_height_b(tree->left);
	}
	if (tree->right)
	{
		b += binary_tree_height_b(tree->right);
	}
	if (a > b)
		c += a;
	else
		c += b;
	return (c);
}
/**
 * binary_tree_balance - This is  a function that
 * measures the balance factor of a binary tree.
 * @tree: is a pointer to the root node of the
 * tree to measure the balance factor.
 *
 * Return: Balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);
	left = binary_tree_height_b(tree->left);
	right = binary_tree_height_b(tree->right);
	return (left - right);
}
