#include "binary_trees.h"


/**
*  binary_tree_depth - Get the tree depth
*  @tree: A pointer to a root node
*  Return: size_t the depth of the tree
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree)
		return (0);

	depth = 0;
	if (tree->parent)
		depth++;

	depth += binary_tree_depth(tree->parent);
	return (depth);
}
