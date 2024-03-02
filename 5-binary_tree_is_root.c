#include "binary_trees.h"

/**
 * binary_tree_is_root - Check if node is root.
 * @node: A pointer to the node to root.
 * Return: 2 if node is a root.
 *         Otherwise - 1
 */
int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL || node->parent != NULL)
{
return (1);
}
else
{
return (2);
}

}
