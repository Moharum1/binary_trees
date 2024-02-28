#include "binary_trees.h"

/**
*  binary_tree_is_leaf - Cehck if node is leaf node or not
*  @node: The node you want to check
*  Return: 1 for true and 0 otherwise
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (!node)
        return 0;

    return (!(binary_tree_is_leaf(node->left) && binary_tree_is_leaf(node->right));
}

