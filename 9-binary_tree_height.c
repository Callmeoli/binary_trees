#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_hieght- calculate binary tree height
 * @tree: binary tree
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->left && !node->right && node)
		return (1);
	return (0);
}

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h, left, right;
	if( !tree || binary_tree_is_leaf(tree))
	{
		return 0;
	}
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left > right)
	{
		h = 1 + left;
	}
	else
	{
		h = 1 + right;
	}
	return (h);
}