#include "binary_trees.h"

/**
 * binary_tree_is_bst - This is a function that checks if a binary tree
 * is a valid Binary Search Tree.
 * @tree:  is a pointer to the root node of the tree to check.
 *
 * Return: 0 or 1
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	binary_tree_t *par;

	if (!tree)
		return (0);
	if (tree->left)
	{
		if (tree->n >= tree->left->n)
		{
			if (tree->right)
			{
				if (tree->n <= tree->right->n)
				{
					if (tree->parent)
					{
						if (tree->parent->right == tree)
						{
							par = tree->parent;
							while (par)
							{
								if (par->n > tree->left->n || par->n > tree->right->n)
									return (0);
								par = par->parent;
							}
						}
						else if (tree->parent->left == tree)
						{
							par = tree->parent;
							while (par)
							{
								if (tree->parent->n < tree->left->n || tree->parent->n < tree->right->n)
									return (0);
								par = par->parent;
							}
						}
					}
					if (!binary_tree_is_bst(tree->left))
						return (0);
					if (!binary_tree_is_bst(tree->right))
						return (0);
				}

			}
			else
			{
				if (tree->parent)
					{
						if (tree->parent->right == tree)
						{
							par = tree->parent;
							while (par)
							{
								if (tree->parent->n > tree->left->n)
									return (0);
								par = par->parent;
							}
						}
						else if (tree->parent->left == tree)
						{
							par = tree->parent;
							while (par)
							{
								if (tree->parent->n < tree->left->n)
									return (0);
								par = par->parent;
							}
						}
					}
				if (!binary_tree_is_bst(tree->left))
					return (0);
			}
		}
		else
			return (0);
	}
	else if (tree->right)
	{
		if (tree->n <= tree->right->n)
		{
			if (tree->parent)
				{
					if (tree->parent->right == tree)
					{
						par = tree->parent;
						while (par)
						{
							if (tree->parent->n > tree->right->n)
								return (0);
							par = par->parent;
						}
					}
					else if (tree->parent->left == tree)
					{
						par = tree->parent;
						while (par)
						{
							if (tree->parent->n < tree->right->n)
								return (0);
							par = par->parent;
						}
					}
				}
			if (!binary_tree_is_bst(tree->right))
				return (0);
		}
		else
			return (0);
	}
	else
		return (1);
	return (1);
}
