#include "binary_trees.h"

/**
 * binary_tree_rotate_right - This is a function that performs a
 * rightt-rotation on a binary tree.
 * @tree: is a pointer to the root node of the tree to rotate.
 *
 * Return: a pointer to the new root node once rotated.
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *temp, *newn;

	if (!tree)
		return (NULL);
	if (!(tree->left))
		return (tree);
	newn = tree->left;
	temp = tree->left;
	tree->left = temp->right;
	if (tree->left)
		tree->left->parent = tree;
	temp->right = tree;
	tree->parent = temp;
	return (newn);
}
