#include "binary_trees.h"

/**
 * binary_tree_depth - Will measure the depth of a node in binary tree
 * @tree: Pointer to the node to measure the depth
 *
 * Return: 0 if tree is NULL, or else return the depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
