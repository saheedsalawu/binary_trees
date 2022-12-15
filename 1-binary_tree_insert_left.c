#include "binary_trees.h"

/**
 * binary_tree_insert_left - This is  a function that
 * inserts a node as the left-child of another node.
 * @parent:  is a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 *
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *New, *initial;

	if (!parent)
		return (NULL);
	initial = parent->left;
	New = binary_tree_node(parent->left, value);
	if (!New)
		return (NULL);
	New->left = initial;
	if (initial)
		initial->parent = New;
	parent->left = New;
	New->parent = parent;
	return (New);
}
