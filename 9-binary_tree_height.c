#include "binary_trees.h"


/**
*  binary_tree_height - Get the tree height
*  @tree: A pointer to a root node
*  Return: size_t the height of the tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (!tree)
		return (0);

	left_height = 0;
	right_height = 0;

	if (tree->left)
		left_height++;

	if (tree->right)
		right_height++;

	left_height = left_height + binary_tree_height(tree->left);
	right_height = right_height + binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}
