#include "binary_trees.h"
#include <limits.h>

/**
 * is_bst - check if a binary tree is a valid BST using inorder traversal
 * @root: pointer to the root node of the tree
 * @prev: pointer to the previous node's value
 * Return: 1 if valid BST, 0 otherwise
 */
int is_bst(const binary_tree_t *root, int *prev)
{
	/* Check if the tree is empty */
	if (root == NULL)
		return (1);

	/* Recursively check the left subtree */
	if (!is_bst(root->left, prev))
		return (0);

	/* Check if the current node's value is less than or */
	/* equal to the previous value */
	if (root->n <= *prev)
		return (0);

	/* Update the previous value */
	*prev = root->n;

	/* Recursively check the right subtree */
	return (is_bst(root->right, prev));
}

/**
 * binary_tree_is_bst - check if a binary tree is a valid BST
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if valid BST, 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	int prev;

	if (tree == NULL)
		return (0);

	/* Initialize the previous value as INT_MIN */
	prev = INT_MIN;

	/* Check if the tree is a valid BST using inorder traversal */
	return (is_bst(tree, &prev));
}
