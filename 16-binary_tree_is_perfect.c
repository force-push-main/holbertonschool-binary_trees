#include "binary_trees.h"

/**
 * find_height - entry point
 * @tree: root of tree
 * Description: finds height of subtree
 * Return: height of tree
 */

int find_height(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);

	left = find_height(tree->left);
	right = find_height(tree->right);
	if (left == -1 || right == -1 || abs(left - right) > 0)
		return (-1);

	return ((left > right ? left : right) + 1);
}

/**
 * binary_tree_is_perfect - entry point
 * @tree: root of tree
 * Description: finds if tree is perfect
 * Return: 1 if perfect 0 if not or null
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (find_height(tree) == -1)
		return (0);
	return (1);
}
