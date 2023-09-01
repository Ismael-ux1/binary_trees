#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to check
 * Return: If the tree is perfect, it returns 1. Otherwise, it returns 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left && tree->right)
	{
		left_height = binary_tree_is_perfect(tree->left);
		right_height = binary_tree_is_perfect(tree->right);
		return (left_height && right_height);
	}

	return (0);
}
