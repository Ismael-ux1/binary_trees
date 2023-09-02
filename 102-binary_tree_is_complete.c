#include "binary_trees.h"
#include <stdlib.h>

/**
 * count_nodes - count the number of nodes in a binary tree
 * @root: pointer to the root node of the tree
 * Return: number of nodes in the tree
 */
int count_nodes(const binary_tree_t *root)
{
	if (root == NULL)
		return (0);
	return (1 + count_nodes(root->left) + count_nodes(root->right));
}

/**
 * is_complete - check if a binary tree is complete using level-order traversal
 * @root: pointer to the root node of the tree
 * @index: index of the current node
 * @count: number of nodes in the tree
 * Return: 1 if complete, 0 otherwise
 */
int is_complete(const binary_tree_t *root, int index, int count)
{
	/* Check if the tree is empty */
	if (root == NULL)
		return (1);

	/* Check if the index of any node is greater than or */
	/* equal to the number of nodes */
	if (index >= count)
		return (0);

	/* Recursively check the left and right subtrees */
	return (is_complete(root->left, 2 * index + 1, count) &&
		is_complete(root->right, 2 * index + 2, count));
}

/**
 * binary_tree_is_complete - check if a binary tree is complete
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if complete, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int count, index;

	if (tree == NULL)
		return (0);

	/* Count the number of nodes in the tree */
	count = count_nodes(tree);

	/* Initialize the index of the root node as 0 */
	index = 0;

	/* Check if the tree is complete using level-order traversal */
	return (is_complete(tree, index, count));
}
