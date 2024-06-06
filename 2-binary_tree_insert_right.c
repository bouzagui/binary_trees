#include "binary_trees.h"
/**
 * binary_tree_insert_right - Creates a binary tree node
 * @parent: Pointer to the parent node
 * @value: Value to store in the new node
 * Return: Pointer to the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
if (parent == NULL)
{
return (NULL);
}
binary_tree_t *new = binary_tree_node(parent, value);
if (new == NULL)
{
return (NULL);
}
if (parent->right != NULL)
{
new->right = parent->right;
parent->right->parent = new;
}
parent->right = new;
return (new);
}
