#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: The height of the tree, or 0 if tree is NULL
 *
 * Description: This function calculates the height of a binary tree,
 * which is the lengt of the longest path from the root node to a leaf.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (tree == NULL)
		return (0);

	/* Recursively calculate the height of the left and right subtrees */
	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	/* Return the maximum of the left and right subtree heights */
	 /* plus 1 for the current node */
	return (height_left > height_right ? height_left + 1 : height_right + 1);
}
