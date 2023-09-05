#include "binary_trees.h"

/**
 * find_successor - Find the next in-order successor.
 * @node: Pointer to the node to start searching from.
 * Return: The value of the successor node.
 */
int find_successor(bst_t *node)
{
	int left = 0;

	if (node == NULL)
	{
		return (0);
	}
	else
	{
		left = find_successor(node->left);
		if (left == 0)
		{
			return (node->n);
		}
		return (left);
	}
}

/**
 * remove_with_children - Remove a node with two children.
 * @root: Pointer to the node to be removed.
 * Return: The value found.
 */
int remove_with_children(bst_t *root)
{
	int new_value = 0;

	new_value = find_successor(root->right);
	root->n = new_value;
	return (new_value);
}

/**
 * remove_node - Remove a node from a BST depending on its children.
 * @root: Pointer to the node to be removed.
 * Return: 0 if it has no children, otherwise a value indicating its children.
 */
int remove_node(bst_t *root)
{
	if (!root->left && !root->right)
	{
		if (root->parent->right == root)
			root->parent->right = NULL;
		else
			root->parent->left = NULL;
		free(root);
		return (0);
	}
	else if ((!root->left && root->right) || (!root->right && root->left))
	{
		if (!root->left)
		{
			if (root->parent->right == root)
				root->parent->right = root->right;
			else
				root->parent->left = root->right;
			root->right->parent = root->parent;
		}
		if (!root->right)
		{
			if (root->parent->right == root)
				root->parent->right = root->left;
			else
				root->parent->left = root->left;
			root->left->parent = root->parent;
		}
		free(root);
		return (0);
	}
	else
		return (remove_with_children(root));
}

/**
 * bst_remove - Remove a node from a BST tree.
 * @root: Pointer to the root of the tree.
 * @value: Value of the node to remove.
 * Return: The modified tree.
 */
bst_t *bst_remove(bst_t *root, int value)
{
	int type = 0;

	if (root == NULL)
		return (NULL);
	if (value < root->n)
		bst_remove(root->left, value);
	else if (value > root->n)
		bst_remove(root->right, value);
	else if (value == root->n)
	{
		type = remove_node(root);
		if (type != 0)
			bst_remove(root->right, type);
	}
	else
		return (NULL);
	return (root);
}
