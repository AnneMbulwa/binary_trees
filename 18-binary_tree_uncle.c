#include "binary_trees.h"

/**
 *binary_tree_uncle - finds the uncle of a node
 *@node: pointer to the node to find the uncle
 *Return: pointer to the uncle node or 0
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}

#include "binary_trees.h"

/**
 *binary_tree_sibling - finds the sibling of a node
 *@node: pointer to the node to find the sibling
 *Return: sibling if found or 0 if none
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
