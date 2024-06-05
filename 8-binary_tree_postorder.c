#include "binary_trees.h"
/**
 * binary_tree_postorder - traverse binary in preorder fashion
 * @tree:  is a pointer to the root node of the tree to traverse
 * @func:  pointer to a function to call for each node.
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree->left != NULL)
	{
		binary_tree_postorder(tree->left, func);
	}
	if (tree->right != NULL)
	{
		binary_tree_postorder(tree->right, func);
	}
	if (func != NULL)
	{
		func(tree->n);
	}
}
