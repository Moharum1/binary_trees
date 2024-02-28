#include "binary_trees.h"

/**
*  binary_tree_delete - Delete the tree created on the heap
*  @tree: The Tree to free
*  Return: None
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_t *left_node = tree->left;
	binary_tree_t *right_node = tree->right;

	free(tree);
	binary_tree_delete(left_node);
	binary_tree_delete(right_node);
}
