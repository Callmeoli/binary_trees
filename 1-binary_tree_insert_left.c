#include "binary_trees.h"

/**
* binary_tree_insert_left - insert at left of node
* @parent: parent node
* @value: value to be inserted
* Return: inserted node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *tmp;

	if (!parent)
	{
		return (NULL);
	}
	new_node = binary_tree_node(parent, value);
	if (!new_node)
	{
		return (NULL);
	}
	if (parent->left)
	{
		tmp = parent->left;
		parent->left = new_node;
		tmp->parent = new_node;
		new_node->left = tmp;
		return (new_node);
	}
	else if (!parent->left)
	{
		parent->left = new_node;
		new_node->left = NULL;
		new_node->right = NULL;
		return (new_node);
	}
	return (NULL);
}
