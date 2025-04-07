#include "binary_trees.h"

/**
 * binary_tree_postorder - entry point
 *
 * Description: runs func on tree in postorder
 * @tree: root of tree
 * @func: function to run on tree
 * Return: void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	if (tree->left)
		binary_tree_postorder(tree->left, func);
	if (tree->right)
		binary_tree_postorder(tree->right, func);
	func(tree->n);
}
