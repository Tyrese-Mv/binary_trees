#include "binary_trees.h"

/**
 * max - returns the maximum value
 * @left: left
 * @right: right
 * Return:  max
*/
size_t max(size_t left, size_t right)
{
	return (left > right ? left : right);
}

/**
 * binary_tree_height - measures the height of the binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of the tree or 0 if null
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_height, left_height;

	if (tree == NULL)
		return (0);

	left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (max(left_height, right_height));
}
