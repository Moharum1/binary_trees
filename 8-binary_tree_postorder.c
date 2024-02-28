#include "binary_trees.h"

/**
*  binary_tree_postorder - Go through a tree using post order and apply func
*		to each tree element
*  @tree: A pointer to a root node
*  @func: A function pointer to a func that takes int and return Nothing
*  Return: None
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
