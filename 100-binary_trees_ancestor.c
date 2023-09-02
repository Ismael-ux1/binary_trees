#include "binary_trees.h"

/**
 * depth - calculate the depth of a node
 * @node: pointer to the node
 * Return: depth of the node
 */
int depth(const binary_tree_t *node)
{
	int d = 0;

	while (node != NULL)
	{
		d++;
		node = node->parent;
	}
	return (d);
}

/**
 * binary_trees_ancestor - find the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest common ancestor node, or NULL if not found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	int d1, d2;

	if (first == NULL || second == NULL)
		return (NULL);

	d1 = depth(first);
	d2 = depth(second);

	/* Move the deeper node up until both nodes have the same depth */
	while (d1 > d2)
	{
		first = first->parent;
		d1--;
	}
	while (d2 > d1)
	{
		second = second->parent;
		d2--;
	}

	/* Move both nodes up until they meet at the LCA */
	while (first != second)
	{
		first = first->parent;
		second = second->parent;
	}

	return ((binary_tree_t *)first);
}
