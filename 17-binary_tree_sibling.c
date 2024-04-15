#include "binary_trees.h"

/**
 * binary_tree_sibling - finds thesibling of a node
 * @node: pointer to the node
 * Return: a pointer to the sibling node
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    binary_tree_t *sibling;

    if (node == NULL || node->parent == NULL
    || node->parent->left == NULL || node->parent->right)
    {
        return (NULL);
    }

    if (node->parent->left == node)
    {
        return (node->parent->right);
    }
    else
    {
        return (node->parent->left);
    }
}
