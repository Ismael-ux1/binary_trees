#include "binary_trees.h"

/**
 * insert_node - inserts a node in a Binary Search Tree
 * @root: pointer to the root node of the BST to insert the node
 * @node: pointer to the node to be inserted
 *
 * Return: pointer to the inserted node, or NULL on failure
 */
bst_t *insert_node(bst_t *root, bst_t *node)
{
bst_t *current = root;

while (current != NULL)
{
if (node->n < current->n)
{
if (current->left == NULL)
{
current->left = node;
node->parent = current;
return (node);
}
current = current->left;
}
else if (node->n > current->n)
{
if (current->right == NULL)
{
current->right = node;
node->parent = current;
return (node);
}
current = current->right;
}
else
{
free(node);
return (NULL);
}
}
return (NULL);
}
