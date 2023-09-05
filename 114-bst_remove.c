#include "binary_trees.h"

/**
 * bst_remove - Removes a node from a Binary Search Tree (BST).
 * @root: Pointer to the root node of the tree where the node will be removed.
 * @value: Value to remove from the tree.
 *
 * Return: Pointer to the new root node of the tree after removing the value.
 */
bst_t *bst_remove(bst_t *root, int value)
{
	if (!root)
		return (NULL);

	if (value < root->n)
		root->left = bst_remove(root->left, value);
	else if (value > root->n)
		root->right = bst_remove(root->right, value);
	else
	{
		if (!root->left)
		{
			bst_t *temp = root->right;

			free(root);
			return (temp);
		}
		else if (!root->right)
		{
			bst_t *temp = root->left;

			free(root);
			return (temp);
		}

		bst_t *temp = find_min(root->right);

		root->n = temp->n;
		root->right = bst_remove(root->right, temp->n);
	}
	return (root);
}

/**
 * find_min - Finds the node with the minimum value in a BST.
 * @node: Pointer to the root node to search from.
 *
 * Return: Pointer to the node with the minimum value.
 */
bst_t *find_min(bst_t *node)
{
	while (node->left)
		node = node->left;
	return (node);
}
