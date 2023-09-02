#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_levelorder - go through a binary tree
 * using level-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *node;
	binary_tree_t **queue;
	size_t front, back;

	if (tree == NULL || func == NULL)
		return;

	/* Allocate memory for the queue */
	queue = malloc(sizeof(binary_tree_t *) * 1024);
	if (queue == NULL)
		return;

	/* Initialize the queue with the root node */
	front = 0;
	back = 0;
	queue[back++] = (binary_tree_t *)tree;

	/* Dequeue nodes and vist them until the queue is empty */
	while (front < back)
	{
		node = queue[front++];
		func(node->n);

		/* Enqueue the left child if it exists */
		if (node->right != NULL)
			queue[back++] = node->right;
	}

	/* Free the queue */
	free(queue);
}
