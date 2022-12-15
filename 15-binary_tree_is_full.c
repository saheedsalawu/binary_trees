#include "binary_trees.h"

/**
 * binary_tree_is_full - This is a function that checks
 * if a binary tree is full.
 * @tree: is the pointer to the tree to be checked.
 * Return: 0 or 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!((!(tree->left) && !(tree->right)) || (tree->left && tree->right)))
		return (0);
	if (tree->left)
	{
		if (!binary_tree_is_full(tree->left))
			return (0);
	}
	if (tree->right)
	{
		if (!binary_tree_is_full(tree->right))
			return (0);
	}
	return (1);
}
