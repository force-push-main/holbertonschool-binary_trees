#include "binary_trees.h"

int find_height(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);

	left = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
	right = tree->right ? 1 + binary_tree_balance(tree->right) : 0;

	return (left > right ? left : right);
}

/**
 * binary_tree_balance - entry point
 * @tree: root of tree
 * Description: finds balance factor of tree
 * Return: balance factor of tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);

	left = tree->left ? 1 + find_height(tree->left) : 0;
	right = tree->right ? 1 + find_height(tree->right) : 0;

	return (left - right);
}
