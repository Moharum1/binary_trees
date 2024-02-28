#include "binary_trees.h"

/**
*  binary_tree_preorder - Go through a tree using preorder and apply func
*		to each tree element
*  @tree: A pointer to a root node
*  @func: A function pointer to a func that takes int and return Nothing
*  Return: None
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
