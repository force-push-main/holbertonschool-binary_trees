#include "binary_trees.h"

/**
 * binary_tree_inorder- entry point
 *
 * Description: runs func on all nodes in-order
 * @tree: root node
 * @func: function to run on each node
 * Return: returns void
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;
	if (tree->left)
		binary_tree_inorder(tree->left, func);
	func(tree->n);
	if (tree->right)
		binary_tree_inorder(tree->right, func);
}
