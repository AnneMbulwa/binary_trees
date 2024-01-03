#include "binary_trees.h"

/**
 *binary_tree_node - creates a binary tree node
 *@parent: pointer to the parent node of the node to create
 *@value: value of new node
 *Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = malloc(sizeof(binary_tree_t));

	if (temp == NULL)
		return (NULL);
	temp->n = value;
	temp->parent = parent;
	temp->left = temp->right = NULL;

	return (temp);
}
