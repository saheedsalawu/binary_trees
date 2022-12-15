#include "binary_trees.h"

/**
 * binary_tree_delete - This is a function that deletes an entire binary tree
 * @tree: is a pointer to the root node of the tree to delete
 *
 * Return: Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *current, *parent;

	if (!tree)
		return;
	current = tree;
	while (1)
	{
		parent = current->parent;
		if (current->left)
			current = current->left;
		else if (current->right)
			current = current->right;
		else if (!(current->left) && !(current->right))
		{
			if (parent)
			{
				if  (parent->left == current)
					parent->left = NULL;
				else if (parent->right == current)
					parent->right = NULL;
			}
			free(current);
			current = parent;
			if (current)
				parent = current->parent;
		}
		if (!current)
			break;
	}
}
