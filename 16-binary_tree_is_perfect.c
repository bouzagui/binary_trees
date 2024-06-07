#include "binary_trees.h"

/**
 * full - Measures the fullness
 * @tree: Pointer to the root node of the tree to measure the height
 * Return: 1 or 0
 */

int full(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}

if (tree->left == NULL && tree->right == NULL)
{
return (1);
}

if (tree->left != NULL && tree->right != NULL)
{
return (full(tree->left) && full(tree->right));
}
return (0);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 * Return: 1 if the tree is perfect, 0 otherwise
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
	{
		return (0);
	}
	left_height = full(tree->left);
	right_height = full(tree->right);

	return (left_height == right_height);
}
