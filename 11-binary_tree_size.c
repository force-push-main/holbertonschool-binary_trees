#include "binary_trees.h"

/**
 * binary_tree_size - entry point
 *
 * Description: finds size of tree
 * @tree: root of tree
 * Return: size of tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
