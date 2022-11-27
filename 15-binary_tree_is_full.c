#include "binary_trees.h"
/* Returns the height of a binary tree */


/**
 * binary_tree_is_full - Entry point
 * @tree: binary tree
 * Return: Always is_full (Success)
 */
int binary_tree_is_full(const binary_tree_t *tree)
{

	/* If tree is empty then return true */
if (tree == NULL)
{
	return (1);
}

if (tree->left == NULL && tree->right == NULL)
{
	return (1);
}
if ((tree->left) && (tree->right))
{
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
return (0);
}

