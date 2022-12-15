#include "binary_trees.h"

/**
 * binary_tree_insert_right - This is  a function that
 * inserts a node as the right-child of another node.
 * @parent:  is a pointer to the node to insert the right-child in
 * @value: is the value to store in the new node
 *
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *New, *initial;

	if (!parent)
		return (NULL);
	initial = parent->right;
	New = binary_tree_node(parent->right, value);
	if (!New)
		return (NULL);
	New->right = initial;
	if (initial)
		initial->parent = New;
	parent->right = New;
	New->parent = parent;
	return (New);
}
