#include "binary_trees.h"

/**
 * binary_trees_ancestor - This is a function  that finds the
 * lowest common ancestor of two nodes.
 * @first: is the pointer to the forst node.
 * @second: is the pointer to the second node.
 *
 * Return: pointer to the lowest common ancestor of two nodes.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *temp;

	if (!(first) || !(second))
		return (NULL);
	if (first->parent == second)
		return (second);
	else if (first == second->parent)
		return (first);
	while (first)
	{
		temp = second;
		while (temp)
		{
			if (temp == first)
				return (first);
			temp = temp->parent;
		}
		first = first->parent;
	}
	return (NULL);
}
