#include "binary_trees.h"

/**
 * binary_tree_levelorder - This is a function that goes through
 * a binary tree using level-order traversal.
 * @tree: is a pointer to the tree tp traverse
 * @func: is a pointer to call for each node
 *
 * Return: Nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	if (tree->parent == NULL)
		func(tree->n);
	if (tree->left)
		func(tree->left->n);
	if (tree->right)
		func(tree->right->n);
	binary_tree_levelorder(tree->left, func);
	binary_tree_levelorder(tree->right, func);
}
