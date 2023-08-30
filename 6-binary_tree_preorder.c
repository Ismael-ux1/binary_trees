#include "binary_trees.h"
/**
 * binary_tree_preorder - Performs pre-order traversal on a binary tree
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to the function to call for each node's value
 *
 * Description: This function traverses a binary tree using the
 * pre-order traversal algorithm. For each node encountered, the
 * specified function is called, passing the value of the node as a parameter.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	/* call the function on the current node's value */
	func(tree->n);

	/* Traverse the left subtree */
	binary_tree_preorder(tree->left, func);

	/* Traverse the right subtree */
	binary_tree_preorder(tree->right, func);
}
