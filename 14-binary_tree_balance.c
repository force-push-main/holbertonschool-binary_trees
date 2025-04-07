#include "binary_trees.h"

/**
 * binary_tree_balance - entry point
 * @tree: root of tree
 * Description: finds balance factor of tree
 * Return: balance factor of tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int h_left, h_right;

	if (!tree)
		return (0);

	h_left = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
	h_right = tree->right ? 1 + binary_tree_balance(tree->right) : 0;

	return (h_left - h_right);
}
