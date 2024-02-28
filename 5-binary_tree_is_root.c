#include "binary_trees.h"

/**
*  binary_tree_is_root - Cehck if node is root node or not
*  @node: The node you want to check
*  Return: 1 for true and 0 otherwise
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	return (!node->parent);
}
