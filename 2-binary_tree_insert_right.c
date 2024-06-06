#include "binary_trees.h"
/**
 * binary_tree_insert_right - Creates a binary tree node
 * @parent: Pointer to the parent node
 * @value: Value to store in the new node
 * Return: Pointer to the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
	new->right = parent->right;
	new->left = NULL;
	if (parent->right)
	{
		new->parent->right = new;
	}
	parent->right = new;
	return (new);
}
