#include "binary_trees.h"

/**
 * binary_tree_insert_right -inserts a node as the right-child of another node
 *
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Return: pointer to the created node, or NULL on failure
 * or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* allocate memory for the new node */
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	/* assign value and left child to the new node */
	new_node->n = value;
	new_node->left = NULL;

	/* check if parent has a right child */
	if (parent->right != NULL)
	{
		/* set new node's right child to parent's right child */
		new_node->right = parent->right;
		/* set parent's right child's parent to new node */
		parent->right->parent = new_node;
	}

	/* set parent's right child to new node */
	parent->right = new_node;
	/* set new node's parent to parent */
	new_node->parent = parent;

	return (new_node);
}
