#include "binary_trees.h"

/**
* binary_tree_postorder - delete entire node
* @tree: root node
* @func: function pointer
* Return: None
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return - 1;
	}
	int left = binary_tree_height(tree->left);
	int right = binary_tree_height(tree->right);
	if(left > right)
	{
	int h = 1 + left;
	}
	else
	{
	int h = 1 + right;
	}
	return h;
}
