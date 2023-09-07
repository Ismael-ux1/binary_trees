C - Binary tree 

# Binary Trees in C

This repository contains C code related to Binary Trees. It includes implementations of various binary tree operations, such as insertion, deletion, traversal, and validation, along with explanations and examples.



## Introduction

Binary trees are hierarchical data structures used in computer science for various purposes, such as organizing data, searching, and sorting. This repository provides C code examples and explanations for working with binary trees.

## Data structures

Basic Binary Tree

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;


## Binary Search Tree

typedef struct binary_tree_s bst_t;

## AVL Tree

typedef struct binary_tree_s avl_t;


## Max Binary Heap

typedef struct binary_tree_s heap_t;



### Basic Binary Tree

- `binary_tree_node.h`: Defines the structure of a basic binary tree node.
- `binary_tree_print.c`: C function that prints binary trees
- `0-binary_tree_node.c`: Creates a new binary tree node.
- `1-binary_tree_insert_left.c`: Inserts a node as the left child of a given node.
- `2-binary_tree_insert_right.c`: Inserts a node as the right child of a given node.
- `3-binary_tree_delete.c`: Deletes an entire binary tree.
- `4-binary_tree_is_leaf.c`: Checks if a node is a leaf.
- `5-binary_tree_is_root.c`: Checks if a node is the root of a tree.
- `6-binary_tree_preorder.c`: Traverses a binary tree using the preorder method.
- `7-binary_tree_inorder.c`: Traverses a binary tree using the inorder method.
- `8-binary_tree_postorder.c`: Traverses a binary tree using the postorder method.
- `9-binary_tree_height.c`: Computes the height of a binary tree.
- `10-binary_tree_depth.c`: Computes the depth of a given node in a binary tree.
- `11-binary_tree_size.c`: Computes the size (number of nodes) of a binary tree.
- `12-binary_tree_leaves.c`: Counts the leaves in a binary tree.
- `13-binary_tree_nodes.c`: Counts the nodes with at least one child in a binary tree.
- `14-binary_tree_balance.c`: Computes the balance factor of a binary tree.
- `15-binary_tree_is_full.c`: Checks if a binary tree is full.
- `16-binary_tree_is_perfect.c`: Checks if a binary tree is perfect.
- `17-binary_tree_sibling.c`: Finds the sibling of a given node in a binary tree.
- `18-binary_tree_uncle.c`: Finds the uncle of a given node in a binary tree.

### Binary Search Tree (BST)

- `binary_trees.h`: Header file for BST-specific functions.
- `100-binary_tree_is_bst.c`: Checks if a binary tree is a valid Binary Search Tree (BST).
- `101-bst_insert.c`: Inserts a value into a Binary Search Tree.
- `102-bst_array_to_avl.c`: Converts an array into a Binary Search Tree (BST).
- `103-array_to_bst.c`: Converts an array into a Balanced Binary Search Tree (BST).
- `104-bst_search.c`: Searches for a value in a Binary Search Tree (BST).
- `105-bst_remove.c`: Removes a node from a Binary Search Tree (BST).

## Binary Tree Operations

- [Basic Binary Tree Operations](#basic-binary-tree)
  - Creating a new binary tree node
  - Inserting nodes
  - Traversal (preorder, inorder, postorder)
  - Computing height and depth
  - Counting nodes, leaves, and more

- [Binary Search Tree Operations](#binary-search-tree-bst)
  - Validating if a tree is a BST
  - Inserting and removing nodes
  - Searching for values
  - Converting arrays to BSTs


## Usage

1. Clone this repository:
   ```bash
   git clone https://github.com/yourusername/binary-trees.git
   cd binary-trees


Contributing

Contributions are welcome! Feel free to open issues or pull requests for any improvements or additional features you'd like to see.
