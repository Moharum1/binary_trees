#include "binary_trees.h"


/**
*  binary_tree_size - Get the tree size
*  @tree: A pointer to a root node
*  Return: size_t the size of the tree
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
		return (0);

	size = 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);
	return (size);
}
