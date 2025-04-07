#include "binary_trees.h"

/**
 * binary_tree_preorder - entry point
 *
 * Description: pre-order traverses tree and runs function
 * @tree: Pointer to the parent node
 * @func: function to run on each node
 * Return: returns void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);

	if (tree->left)
		binary_tree_preorder(tree->left, func);

	if (tree->right)
		binary_tree_preorder(tree->right, func);
}
