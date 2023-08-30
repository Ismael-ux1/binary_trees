#include "binary_trees.h"
/**
 * binary_tree_inorder - Performs in-order traversal on a binary tree
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to the function to call for each node's value
 *
 * Description: This function traveres a binary tree using the
 * in-order: traversal algorithm. For each node encountered, the
 * specified function is called, passing the value of the node as a paremeter
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* Traverse the left subtree */
	binary_tree_inorder(tree->left, func);

	/* Call the function on the current node's value */
	func(tree->n);

	/* Traverse the right subtree */
	binary_tree_inorder(tree->right, func);
}

