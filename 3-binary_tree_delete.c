#include "binary_trees.h"

/**
 * binary_tree_delete - entry point
 *
 * Description: deletes binary tree
 * @tree: root of tree
 * Return: returns void
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	if (tree->left)
		binary_tree_delete(tree->left);

	if (tree->right)
		binary_tree_delete(tree->right);

	free(tree);
}
