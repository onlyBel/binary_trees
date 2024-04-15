#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with at least onechild in a binary tree
 * @tree:a pointer to the root node of the tree ,count the number of nodes
 * Return:size of the binary tree leaves.
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
        if (tree == NULL)
        {
                return (0);

        }
        if (tree->left != NULL || tree->right != NULL)
        {
                return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

        }
        return (0);
}
