#include "binary_trees.h"

/**
 * binary_tree_insert_left - Will insert a node as the left-child of
 *                           another in a binary tree.
 * @parent: Ptr to the node that the left-child will be inserted in.
 * @value: Value to be stored in the new node.
 *
 * Return: NULL if an error occurs or the parent is null
 *         If else, then a pointer to the new node.
 *
 * Description: If the parent already has a left-child, then the new node
 *              will take its place and the old left-child is set as
 *              the left-child of the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
