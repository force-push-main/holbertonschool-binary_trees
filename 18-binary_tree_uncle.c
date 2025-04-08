#include "binary_trees.h"

/**
 * binary_tree_uncle - entry point
 * @node: node to find uncle of
 * Description: finds uncle of node
 * Return: uncle or null
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	if (node->parent != node->parent->parent->left)
		return (node->parent->parent->left);
	else
		return (node->parent->parent->right);

}
