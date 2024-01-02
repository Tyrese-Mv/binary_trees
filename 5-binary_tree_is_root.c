#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if node has parent
 * @node: the parent node to be checked
 * Return: 0 on failure and 1 on success
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL)
	{
		if (node->parent == NULL)
			return (1);
	}
	return (0);
}
