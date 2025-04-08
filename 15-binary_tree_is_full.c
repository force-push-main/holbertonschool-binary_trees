#include "binary_trees.h"

/**
 * binary_tree_is_full - entry point
 * @tree: root of tree
 * Description: finds if tree is full
 * Return: 1 if full, 0 if not or null
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (binary_tree_is_full(tree->left) != binary_tree_is_full(tree->right))
		return (0);
	return (1);
}
