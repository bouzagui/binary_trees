#include "binary_trees.h"

/**
 * find_depth - Measures the depth
 * @node: Pointer to the root node of the tree
 * Return: 1 or 0
 */

int find_depth(const binary_tree_t *node)
{
int depth = 0;

while (node != NULL)
{
depth++;
node = node->left;
}
return (depth);
}

/**
 * is_perfect - finds if the tree is perfect
 * @tree: Pointer to the root node of the tree
 * @depth: Depth of the tree
 * @level: Level of the tree
 * Return: 1 or 0
 */

int is_perfect(const binary_tree_t *tree, int depth, int level)
{
if (tree == NULL)
{
return (0);
}

if (tree->left == NULL && tree->right == NULL)
{
return (depth == level + 1);
}

if (tree->left == NULL || tree->right == NULL)
{
return (0);
}

return (is_perfect(tree->left, depth, level + 1) &&
	is_perfect(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - finds if the tree is perfect
 * @tree: Pointer to the root node of the tree
 * Return: 1 or 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}

int depth = find_depth(tree);

return (is_perfect(tree, depth, 0));
}
