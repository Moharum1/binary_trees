#include "binary_trees.h"

/**
*  binary_tree_balance - Check if the tree is balanced or not
*  @tree: A pointer to a root node
*  Return: int the aboslute diff between left and right branche height
*/
int binary_tree_balance(const binary_tree_t *tree)
{

	if (!tree)
		return (0);

	return (check_for_tree_balance(tree->left)
				- check_for_tree_balance(tree->right));
}


/**
*  check_for_tree_balance - Get the number of tree nodes
*  @node: A pointer to a root node
*  Return: the height of the tree
*/
int check_for_tree_balance(binary_tree_t *node)
{
	int height;

	if (!node)
		return (0);

	height = 1;

	if (check_for_tree_balance(node->left) > check_for_tree_balance(node->right))
		return (height + check_for_tree_balance(node->left));
	else
		return (height + check_for_tree_balance(node->right));
}
