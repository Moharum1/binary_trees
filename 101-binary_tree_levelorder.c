#include "binary_trees.h"

/**
 * binary_tree_levelorder - print the nodes element in a lever-order
 * @tree: root node
 * @func: function to use
 * Return: Nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_print(tree, func, 0);
}

/**
 * binary_print - helper func that goes thorugh the tree
 * @tree: root node
 * @func: function to use
 * @order: the current height of the tree
 * Return: Nothing
 */
void binary_print(const binary_tree_t *tree, void (*func)(int), int order)
{
	binary_tree_t *left_node;
	binary_tree_t *right_node;

	if (!tree || !func)
		return;

	if (order == 0)
	{
		func(tree->n);
	}

	left_node = tree->left;
	right_node = tree->right;

	if (left_node)
	{
		func(left_node->n);
	}

	if (right_node)
	{
		func(right_node->n);
	}

	binary_print(left_node, func, order += 1);
	binary_print(right_node, func, order += 1);
}
