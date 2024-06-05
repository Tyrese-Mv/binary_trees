#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a binary tree node on the left
 * @parent: pointer to the parent node
 * @value: value of the node
 * Return: new node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent != NULL)
	{
		if (parent->left == NULL)
		{
			parent->left = binary_tree_node(parent, value);
			return (parent->left);
		}
		else
		{
			newNode = binary_tree_node(NULL, value);
			parent->left->parent = newNode;
			newNode->parent = parent;
			newNode->left = parent->left;
			parent->left = newNode;
			return (newNode);
		}
	}
	return (NULL);
}
