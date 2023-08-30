#include "binary_trees.h"
/**
   * binary_tree_insert_left - inserts a node as the left-child of another node
   * @parent: poiner to the node to insert the left-child in
   * @value: value to store in the new node
   * Return: pointer to the created node,
   * or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* check if parent is NULL */
	if (parent == NULL)
		return (NULL);

	/* allocate memory for the new node */
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	/* assign value and right child to the new node */
	new_node->n = value;
	new_node->right = NULL;

	/* check if parent has a left child */
	if (parent->left != NULL)
	{
		/* set new node's left child to parent's left child */
		new_node->left = parent->left;
		/* set parent's left child's parent to new node */
		parent->left->parent = new_node;
	}
	else
	{
		/* set new node's left child to NULL */
		new_node->left = NULL;
	}
	/* set parent's left child to new node */
	parent->left  = new_node;
	/* set new node's parent to parent */
	new_node->parent = parent;
		return (new_node);
}
