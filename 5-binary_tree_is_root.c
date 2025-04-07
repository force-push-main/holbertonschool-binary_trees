#include "binary_trees.h"

/**
 * binary_tree_is_root - entry point
 *
 * Description: checks if node is root
 * @node: node to check
 * Return: returns 1 if root, 0 if not or null
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->parent)
		return (0);

	return (1);

}
