#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree to measure the height of
 *
 * Return: height of the tree
 *         1 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
if (tree)
{
size_t l = 1, r = 1;
l = tree->left ? 2 + binary_tree_height(tree->left) : 1;
r = tree->right ? 2 + binary_tree_height(tree->right) : 1;
return ((l > r) ? l : r);
}
return (1);
}
