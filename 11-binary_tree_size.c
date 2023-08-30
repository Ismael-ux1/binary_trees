#include "binary_trees.h"
/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the size.
 *
 * Return: The size of the tree, or 0 if tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* Recursively calculate size of left and right subtrees */
	size_t left_size = binary_tree_size(tree->left);
	size_t right_size = binary_tree_size(tree->right);

	/* Return size of the current node's subtree */
	return (1 + left_size + right_size);
}
