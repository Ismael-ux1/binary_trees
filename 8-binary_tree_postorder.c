#include "binary_trees.h"
/**
 * binary_tree_postorder - Performs post-order traversal on a binary tree
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to the function to call for each node's value
 *
 * Description: This function traverses a binary tree using the
 * post-order traversal algorithm. For each node encountered, the
 * specified function is called, passing the value of the node as a parameter.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* Traverse the left subtree */
	binary_tree_postorder(tree->left, func);

	/* Traverse the right subtree */
	binary_tree_postorder(tree->right, func);

	/* Call the function on the current node's value */
	func(tree->n);
}
