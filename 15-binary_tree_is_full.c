#include "binary_trees.h"

/**
*  binary_tree_is_full - Check if a tree is full
*  @tree: A pointer to a root node
*  Return: int the state of the tree
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int state;

	if (!tree)
		return (0);

	state = 0;
	if (tree->left && tree->right)
		state = 1;
	if (!tree->left && !tree->right)
		state = 1;
	else
		state = -1;

	state = state
				+ binary_tree_is_full(tree->left) + binary_tree_is_full(tree->right);
	return (state);
}

/**
*  check_for_tree_height - Calculate the no of nodes in a tree
*  @node: A pointer to a root node
*  Return: int the height of the tree
*/
int check_for_tree_height(binary_tree_t *node)
{
	int height;

	if (!node)
		return (0);

	height = 0;
	if (node->left || node->right)
		height++;

	return (height + check_for_tree_height(node->left)
				+ check_for_tree_height(node->right));
}

