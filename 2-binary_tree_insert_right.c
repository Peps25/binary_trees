#include "binary_trees.h"

/**
 * binary_tree_insert_right - Will insert a node as the right-child
 *                            of another in a binary tree
 * @parent: Pointer to the node that the right child will be inserted in
 * @value: Value to be stored in the new node
 *
 * Return: NULL if an error occurs or if the parent is null
 *         If else, then a pointer to the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
