#include "binary_trees.h"

/**
 * binary_tree_insert_left - Creates a binary tree node
 * @parent: Pointer to the parent node
 * @value: Value to store in the new node
 * Return: Pointer to the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
	{
		return (NULL);
	}
	new = binary_tree_node(parent, value);
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = value;
	new->parent = parent;
	new->left = parent->left;
	new->right = NULL;
	if (parent->left)
	{
		new->left->parent = new;
	}
	parent->left = new;
	return (new);
}
