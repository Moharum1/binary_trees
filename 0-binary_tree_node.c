#include "binary_trees.h"

/**
*  binary_tree_node - Creates a new tree on the heap
*  @parent: parent of the node
*  @value: the value to store inside the Node
*  Return: pointer to the binary tree
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *leaf = malloc(sizeof(binary_tree_t));

	if (leaf == NULL)
		return (NULL);

	leaf->parent = parent;
	leaf->n = value;
	leaf->left = NULL;
	leaf->right = NULL;

	return (leaf);
}
