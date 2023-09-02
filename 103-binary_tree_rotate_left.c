#include "binary_trees.h"

/**
 * binary_tree_rotate_left - perform a left-rotation on a binary tree
 * @tree: pointer to the root node of the tree to rotate
 * Return: pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new_root, *temp;

	if (tree == NULL || tree->right == NULL)
		return (tree);

	/* Set the new root as the right child of the old root */
	new_root = tree->right;

	/* Set the temp as the left child of the new root */
	temp = new_root->left;

	/* Make the old root as the left child of the new root */
	new_root->left = tree;
	tree->parent = new_root;

	/* Make the temp as the right child of the old root */
	tree->right = temp;
	if (temp != NULL)
		temp->parent = tree;

	/* Update the parent pointer of the new root */
	new_root->parent = NULL;

	return (new_root);
}
