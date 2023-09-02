#include "binary_trees.h"

/**
 * binary_tree_rotate_right - perform a right-rotation on a binary tree
 * @tree: pointer to the root node of the tree to rotate
 * Return: pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new_root, *temp;

	if (tree == NULL || tree->left == NULL)
		return (tree);

	/* Set the new root as the left child of the old root */
	new_root = tree->left;

	/* Set the temp as the right child of the new root */
	temp = new_root->right;

	/* Make the old root as the right child of the new root */
	new_root->right = tree;
	tree->parent = new_root;

	/* Make the temp as the left child of the old root */
	tree->left = temp;
	if (temp != NULL)
		temp->parent = tree;

	/* Update the parent pointer of the new root */
	new_root->parent = NULL;

	return (new_root);
}
