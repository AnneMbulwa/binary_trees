#include "binary_trees.h"

/**
 *binary_tree_insert_left - inserts a node as the left-child of another node
 *@parent: pointer to the parent node
 *@value: value of new node
 *Return: return a pointer to the created node, or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNodeLeft = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);

	if (newNodeLeft == NULL)
		return (NULL);
	newNodeLeft->n = value;
	newNodeLeft->parent = parent;
	newNodeLeft->left = parent->left;
	parent->left = newNodeLeft;
	newNodeLeft->right = NULL;

	if (newNodeLeft->left)
		newNodeLeft->left->parent = newNodeLeft;
	return (newNodeLeft);
}
