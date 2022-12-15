#include "binary_trees.h"

/**
 * binary_tree_sibling - This is a function that finds the sibling of a node.
 * @node: is a pointer to the node to find it's sibling.
 *
 * Return: Pointer to the sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !(node->parent))
		return (NULL);
	if (node->parent->left  == node)
		return (node->parent->right);
	if (node->parent->right  == node)
		return (node->parent->left);
	return (NULL);
}
