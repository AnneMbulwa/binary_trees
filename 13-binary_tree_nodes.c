#include "binary_trees.h"

/**
 *binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *@tree: pointer to the root node of the tree to count the number of nodes
 *Return: nodes with 1 child or 0 otherwise
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t sum = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		sum += binary_tree_nodes(tree->left) + 1
			+ binary_tree_leaves(tree->right);

	return (sum);
}
