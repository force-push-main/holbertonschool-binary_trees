#include "binary_trees.h"
/**
 * binary_tree_node - entry point
 *
 * Description: creates new child node under passed parent
 * @parent: Pointer to the parent node
 * @value: value to add to new node
 * Return: returns pointer to new child
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *child;

	child = malloc(sizeof(binary_tree_t));

	if (!child)
		return (NULL);

	child->n = value;
	child->left = NULL;
	child->right = NULL;

	if (!parent)
	{
		child->parent = NULL;
		parent = child;
		return (parent);
	}

	child->parent = parent;

	return (child);
}
