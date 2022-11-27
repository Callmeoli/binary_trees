/* C program to check if a tree is height-balanced or not */
#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/* Returns the height of a binary tree */
int height(const binary_tree_t *node);

/**
 * binary_tree_balance - Entry point
 * @tree: binary tree
 * Return: Always balance (Success)
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	/* for height of left subtree */
	int lh;

	/* for height of right subtree */
	int rh;

	/* If tree is empty then return true */
	if (tree == NULL)
		return (1);

	/* Get the height of left and right sub trees */
	lh = height(tree->left);
	rh = height(tree->right);

		return ((lh - rh));

	/* If we reach here then tree is not height-balanced */

	return (0);
}

/**
 * max - Entry point
 * @a: varicable
 * @b: varaiable 2
 * Return: Always number (Success)
 */
int max(int a, int b) { return (a >= b) ? a : b; }

/**
 * height - Entry point
 * @node: node of tree
 * Return: Always 0 (Success)
 */
int height(const binary_tree_t *node)
{

	if (node == NULL)
		return (0);

	return (1 + max(height(node->left), height(node->right)));
}
