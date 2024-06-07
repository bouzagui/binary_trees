#include "binary_trees.h"

/**
 * height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 * Return: Height of the tree
 */

int height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}

	left = height(tree->left);
	right = height(tree->right);
	if (left > right)
	{
		return (left + 1);
	}
	else
	{
		return (right + 1);
	}
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
	left_height = height(tree->left);
	right_height = height(tree->right);

	return (left_height == right_height);
}
