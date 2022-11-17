#include "binary_trees.h"

/**
* binary_tree_insert_left - insert at left of node
* @parent: parent node
* @value: value to be inserted
* Return: inserted node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
	{
		return (NULL);
	}
    new->n = value;
    parent->left = new;
    new->left = NULL;
    new->right = NULL;
    return (new);
}