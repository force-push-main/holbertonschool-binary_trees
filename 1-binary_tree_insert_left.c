#include "binary_trees.h"
/**
 * binary_tree_insert_left - entry point
 *
 * Description: creates new child node as left node of passed parent
 * @parent: Pointer to the parent node
 * @value: value to add to new node
 * Return: returns pointer to new child
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *child;

	if (!parent)
		return (NULL);

	child = malloc(sizeof(binary_tree_t));

	if (!child)
		return (NULL);

	child->n = value;
	child->right = NULL;
	child->parent = parent;

	if (parent->left)
	{
		parent->left->parent = child;
		child->left = parent->left;
		parent->left = child;
		return (child);
	}

	parent->left = child;
	child->left = NULL;

	return (child);
}
