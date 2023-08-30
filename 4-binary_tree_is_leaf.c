#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf in a binary tree
 * @node: Pointer to the node to check
 *
 * Return: 1 if the node is a leaf, otherwise 0
 *
 * Description: This function determines if a given node is a leaf node
 * in a binary tree. A leaf node is a node that has no children.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	/* Check if the node has no left and right children */
	return (node->left == NULL && node->right == NULL);
}
