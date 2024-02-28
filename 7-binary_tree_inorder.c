#include "binary_trees.h"

/**
*  binary_tree_inorder - Go through a tree using inorder and apply func
*		to each tree element
*  @tree: A pointer to a root node
*  @func: A function pointer to a func that takes int and return Nothing
*  Return: None
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
