#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - calculate binary tree depth
 * @node: binary tree
 * Return: 0 or 1
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->parent)
		return (1);
	return (0);
}
/**
 * binary_tree_depth- calculate binary tree depth
 * @tree: binary tree
 * Return: 0 or 1
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{

	if (!tree || binary_tree_is_root(tree))
	{
		return (0);
	}
	return (1 + binary_tree_depth(tree->parent));
}
