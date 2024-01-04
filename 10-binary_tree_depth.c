#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of node in the binary tree
 * @tree: pointer to the node of the tree to measure the depth.
 * Return: height of the tree or 0 if null
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t parent;

	if (tree == NULL)
		return (0);
	parent = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0;
	return (parent);
}
