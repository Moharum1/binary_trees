#include "binary_trees.h"

/**
*  binary_tree_insert_left - Creates a new node on the left of the tree
*  @parent: parent of the node
*  @value: the value to store inside the Node
*  Return: pointer to the node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *parent_left_node;

	if (parent == NULL)
		return (NULL);

	binary_tree_t *left_node = malloc(sizeof(binary_tree_t));

	if (left_node == NULL)
		return (NULL);

	left_node->parent = parent;
	left_node->n = value;
	left_node->right = NULL;

	parent_left_node = parent->left;
	if (parent_left_node != NULL)
	{
		left_node->left = parent_left_node;
		parent_left_node->parent = left_node;
	}
	else
	{
		left_node->left = NULL;
	}
	parent->left = left_node;

	return (left_node);
}
