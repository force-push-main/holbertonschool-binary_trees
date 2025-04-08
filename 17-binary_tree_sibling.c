#include "binary_trees.h"

/**
 * binary_tree_sibling - entry point
 * @node: node to find sibling of
 * Description: finds sibling of node
 * Return: finds sibling of node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node->parent || !node)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);

	return (node->parent->left);
}
