#include "binary_trees.h"

/**
 * depth - calculate the depth of a node
 * @node: pointer to the node
 * Return: depth of the node
 */
int depth(const binary_tree_t *node)
{
	int d = 0;

	while (node != NULL)
	{
		d++;
		node = node->left;
	}
	return (d);
}

/**
 * is_perfect - check if a binary tree is perfect
 * @root: pointer to the root node
 * @d: depth of the tree
 * @level: current level of the tree
 * Return: 1 if perfect, 0 otherwise
 */
int is_perfect(const binary_tree_t *root, int d, int level)
{
	/* Check if the tree is empty */
	if (root == NULL)
		return (1);

	/* Check the presence of children */
	if (root->left == NULL && root->right == NULL)
		return (d == level + 1);

	if (root->left == NULL || root->right == NULL)
		return (0);

	return (is_perfect(root->left, d, level + 1) &&
		is_perfect(root->right, d, level + 1));
}

/**
 * binary_tree_is_perfect - check if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d;

	if (tree == NULL)
		return (0);

	d = depth(tree);

	return (is_perfect(tree, d, 0));
}
