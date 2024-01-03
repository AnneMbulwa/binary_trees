#include "binary_trees.h"

/**
 *binary_tree_insert_right - inserts a node as the right-child of another node
 *@parent: pointer to the parent node
 *@value: value of new node
 *Return: pointer to the created node, or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNodeRight = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);

	if (newNodeRight == NULL)
		return (NULL);

	newNodeRight->n = value;
	newNodeRight->parent = parent;
	newNodeRight->right = parent->right;
	newNodeRight->left = NULL;
	parent->right = newNodeRight;

	if (newNodeRight->right)
		newNodeRight->right->parent = newNodeRight;

	return (newNodeRight);
}
