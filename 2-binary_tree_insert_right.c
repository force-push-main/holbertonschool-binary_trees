#include "binary_trees.h"

/**
 * binary_tree_insert_right - entry point
 *
 * Description: creates new child node right of passed parent
 * @parent: Pointer to the parent node
 * @value: value to add to new node
 * Return: returns pointer to new child
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *child;

	if (!parent)
		return (NULL);

	child = malloc(sizeof(binary_tree_t));

	if (!child)
		return (NULL);

	child->n = value;
	child->left = NULL;
	child->parent = parent;

	if (parent->right)
	{
		child->right = parent->right;
		child->right->parent = child;
		child->parent->right = child;
		return (child);
	}

	parent->right = child;
	return (child);

}
