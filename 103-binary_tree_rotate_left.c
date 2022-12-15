#include  "binary_trees.h"

/**
 * binary_tree_rotate_left - This is a function that performs a
 * left-rotation on a binary tree.
 * @tree: is a pointer to the root node of the tree to rotate.
 *
 * Return: a pointer to the new root node once rotated.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *temp, *newn;

	if (!tree)
		return (NULL);
	if (!(tree->right))
		return (tree);
	newn = tree->right;
	temp = tree->right;
	tree->right = temp->left;
	if (tree->right)
		tree->right->parent = tree;
	temp->left = tree;
	tree->parent = temp;
	return (newn);
}
