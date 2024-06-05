#include "binary_trees.h"
/**
 * binary_tree_preorder - traverse binary in preorder fashion
 * @tree:  is a pointer to the root node of the tree to traverse
 * @func:  pointer to a function to call for each node.
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func != NULL)
	{
		func(tree->n);
		if (tree != NULL)
		{
			if (tree->left != NULL)
			{
				binary_tree_preorder(tree->left, func);
			}
			if (tree->right != NULL)
			{
				binary_tree_preorder(tree->right, func);
			}
		}
	}
}
