#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a binary tree node on the right
 * @parent: pointer to the parent node
 * @value: value of the node
 * Return: new node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent != NULL)
	{
		if (parent->right == NULL)
		{
			parent->right = binary_tree_node(parent, value);
			return (parent->right);
		}
		else
		{
			newNode = binary_tree_node(NULL, value);
			parent->right->parent = newNode;
			newNode->parent = parent;
			newNode->right = parent->right;
			parent->right = newNode;
			return (newNode);
		}
	}
	return (NULL);
}
