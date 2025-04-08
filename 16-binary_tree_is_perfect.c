#include "binary_trees.h"

/**
 * find_height - entry point
 * @tree: root of tree
 * Description: finds height of subtree
 * Return: height of tree
 */

int find_height(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);
	left = tree->left ? find_height(tree->left) + 1 : 0;
	right = tree->right ? find_height(tree->right) + 1 : 0;

	return (left > right ? left : right);
}

/**
 * is_full - entry point
 * @tree: root of tree
 * Description: finds if tree is full
 * Return: 1 if full 0 if not or null
 */

int is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (is_full(tree->left) != is_full(tree->right))
		return (0);
	return (1);
}


/**
 * binary_tree_is_perfect - entry point
 * @tree: root of tree
 * Description: finds if tree is perfect
 * Return: 1 if perfect 0 if not or null
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);

	left = tree->left ? find_height(tree->left) + 1 : 0;
	right = tree->right ? find_height(tree->right) + 1 : 0;

	if ((left - right == 0) && is_full(tree))
		return (1);

	return (0);
}
