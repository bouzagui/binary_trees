#include "binary_trees.h"


/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 * Return: Height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}

int left_height = binary_tree_height(tree->left);
int right_height = binary_tree_height(tree->right);

return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 * Return: 1 if the tree is perfect, 0 otherwise
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}
return (binary_tree_height(tree->left) == binary_tree_height(tree->right));
}
