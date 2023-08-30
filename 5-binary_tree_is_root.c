#include "binary_trees.h"

/**
 * binary_tree_is_root - Check if a node is a root in a binary tree
 * @node: Pointer to the node to check
 *
 * Return: 1 if the node is a root, otherwise 0
 *
 * Desctiprion: This function determines if a given node is a root node
 * in a binary tree. A root node is a node that has no parent.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	/* Check if the node has no parent */
	return (node->parent == NULL);
}
