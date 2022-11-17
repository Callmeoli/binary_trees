#include "binary_trees.h"

/**
* binary_tree_insert_right - insert at right of node
* @parent: parent node
* @value: value to be inserted
* Return: inserted node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
	if (parent->right)
	{
		tmp = parent->right;
		parent->right = new_node;
		tmp->parent = new_node;
		new_node->right = tmp;
		return (new_node);
	}
	else if (!parent->right)
	{
		parent->right = new_node;
		new_node->right = NULL;
		new_node->right = NULL;
		return (new_node);
	}
	return (NULL);
}
