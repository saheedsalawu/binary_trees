#include "binary_trees.h"

/**
 * binary_tree_node - This is a function that creates a binary tree node
 * @parent: is a pointer to the parent node of the node to create
 * @value:  is the value to put in the new node
 *
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *New;

	New = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (!New)
		return (NULL);

	New->parent = parent;
	New->left = NULL;
	New->right = NULL;
	New->n = value;

	parent = New;
	return (New);
}
