#include "binary_trees.h"

/**
* binary_tree_is_leaf - check if binary node is leaf
* @node: root node
* Return: None
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
	{
		return (0);
	}
	if (!node->left && !node->right)
	{
		return (1);
	}

	return (0);
}
