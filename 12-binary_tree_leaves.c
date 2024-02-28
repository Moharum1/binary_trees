#include "binary_trees.h"

/**
*  binary_tree_leaves - Get the number of tree leafs
*  @tree: A pointer to a root node
*  Return: size_t the no of leafs in the tree
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leafs;

	if (!tree)
		return (0);

	leafs = 0;
	if (!(tree->left || tree->right))
		leafs++;

	leafs += binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	return (leafs);
}
