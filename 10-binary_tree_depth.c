#include "binary_trees.h"

/**
 * binary_tree_depth - entry point
 *
 * Description: finds depth of node
 * @tree: root of tree
 * Return: depth of node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree || !tree->parent)
		return (0);

	if (tree->parent)
		depth = 1 + binary_tree_depth(tree->parent);

	return (depth);
}
