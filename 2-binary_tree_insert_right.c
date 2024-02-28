#include "binary_trees.h"

/**
*  binary_tree_insert_right - Creates a new node on the right of the tree
*  @parent: parent of the node
*  @value: the value to store inside the Node
*  Return: pointer to the node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *parent_right_node;
	binary_tree_t *right_node;

	if (parent == NULL)
		return (NULL);

	right_node = binary_tree_node(parent, value);

	if (right_node == NULL)
		return (NULL);

	parent_right_node = parent->right;
	if (parent_right_node != NULL)
	{
		right_node->right = parent_right_node;
		parent_right_node->parent = right_node;
	}
	else
	{
		right_node->right = NULL;
	}
	parent->right = right_node;

	return (right_node);
}
