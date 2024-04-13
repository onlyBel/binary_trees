#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent:pointer to tparent node
 * @value:the value to put in tnew node
 * Return:pointer to the new node, or NULL.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}
