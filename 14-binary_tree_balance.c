#include "binary_trees.h"

/**
 * height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 * Return: Height of the tree
 */

int height(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}

int left_height = height(tree->left);
int right_height = height(tree->right);

return ((left_height > right_height ? left_height : right_height) + 1);
}


/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 * Return: Balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}

int left_height = height(tree->left);
int right_height = height(tree->right);

return (left_height - right_height);
}
