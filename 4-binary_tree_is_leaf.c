#include "binary_trees.h"

/**
 * binary_tree_is_leaf - entry point
 *
 * Description: checks if node is leaf
 * @node: node to check
 * Return: 1 if node is leaf, 0 if not or is null
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->right || node->left)
		return (0);

	return (1);
}
