#include "binary_trees.h"
/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: pointer to the root node of the tree to delete
 *
 * Description: This function recursively deletes the nodes
 * in the binary tree starting from the given root.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	/* Recursively delete left and right subtree */
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	/* Free the current node */
	free(tree);
}
