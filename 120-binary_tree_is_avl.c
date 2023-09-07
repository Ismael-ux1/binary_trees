#include "binary_trees.h"
#include <limits.h>

/**
 * find_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the tree. If tree is NULL, return 0.
 */
size_t find_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	size_t left_height = find_height(tree->left);
	size_t right_height = find_height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * is_valid_avl - Checks if a binary tree is a valid AVL tree.
 * @tree: A pointer to the root node of the tree to check.
 * @min: The minimum allowable value for nodes in the tree.
 * @max: The maximum allowable value for nodes in the tree.
 *
 * Return: 1 if tree is a valid AVL tree, and 0 otherwise.
 */
int is_valid_avl(const binary_tree_t *tree, int min, int max)
{
	if (!tree)
		return (1);

	if (tree->n <= min || tree->n >= max)
		return (0);

	size_t left_height = find_height(tree->left);
	size_t right_height = find_height(tree->right);

	if (left_height - right_height > 1 || right_height - left_height > 1)
		return (0);

	return (is_valid_avl(tree->left, min, tree->n) &&
		is_valid_avl(tree->right, tree->n, max));
}

/**
 * binary_tree_is_avl - Checks if a binary tree is a valid AVL tree.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if tree is a valid AVL tree, and 0 otherwise.
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (is_valid_avl(tree, INT_MIN, INT_MAX));
}
