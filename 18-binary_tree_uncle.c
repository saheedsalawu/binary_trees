#include "binary_trees.h"

/**
 * binary_tree_uncle - This is a function that finds the uncle of a node.
 * @node: is a pointer to the node to find the uncle.
 *
 * Return: Pointer to the uncle node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !(node->parent))
		return (NULL);
	if (!(node->parent->parent))
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	if (node->parent->parent->right == node->parent)
		return (node->parent->parent->left);
	return (NULL);
}
