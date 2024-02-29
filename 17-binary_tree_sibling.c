#include "binary_trees.h"

/**
*  binary_tree_sibling - Get the sibling of a given node
*  @node: A pointer to a root node
*  Return: pointer to the sibling node
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (!node || !node->parent)
		return (NULL);

	parent = node->parent;

	if (parent->left && parent->left != node)
		return (parent->left);
	else if (parent->right && parent->right != node)
		return (parent->right);
	else
		return (NULL);
}
