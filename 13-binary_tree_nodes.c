#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *
 * @tree: tree root
 * Return: number of parent nodes in a the tree or 0 if tree is NULL;
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	else
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

}
