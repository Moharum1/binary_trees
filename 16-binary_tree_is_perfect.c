#include "binary_trees.h"

/**
*  binary_tree_is_perfect - Check if a tree is full
*  @tree: A pointer to a root node
*  Return: int the state of the tree
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (!tree)
		return (0);

	left_height = 0;
	right_height = 0;

	left_height = check_for_tree_height(tree->left);
	right_height = check_for_tree_height(tree->right);
	return (left_height == right_height);
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
