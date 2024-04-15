#include "binary_trees.h"

/**
 * binary_tree_is_perfect -  checks ifbinary tree is perfect
 * @tree:pointer to the root node of the tree
 * Return:0 or 1 if perfect
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
        size_t height, size;

        height = binary_tree_height(tree);
        size = binary_tree_size(tree);

    return (binary_tree_is_full(tree) && size == (size_t)((1 << height) - 1));
}
