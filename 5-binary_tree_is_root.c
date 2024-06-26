#include "binary_trees.h"

/**
 *binary_tree_is_root -  checks if given node is a root
 *@node:a pointer to the node
 *Return:1 if node is a root, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	else if (node->parent == NULL)
	{
		return (1);
	}
	return (0);
}
