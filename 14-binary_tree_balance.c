#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 * Return: Balance factor
*/

int binary_tree_balance(const binary_tree_t *tree)
{
int balance = 0;

if (tree == NULL)
{
return (0);
}
int left = binary_tree_height(tree->left);
int right = binary_tree_height(tree->right);
balance = left - right;
return (balance);
}
