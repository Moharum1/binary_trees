#include "binary_trees.h"

/**
*  binary_tree_nodes - Get the number of tree nodes
*  @tree: A pointer to a root node
*  Return: size_t the no of nodes in the tree
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes;

	if (!tree)
		return (0);

	nodes = 0;
	if (tree->left || tree->right)
		nodes++;

	nodes += binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
	return (nodes);
}
