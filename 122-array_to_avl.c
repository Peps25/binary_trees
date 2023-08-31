#include "binary_trees.h"

/**
 * array_to_avl - Will build AVL tree from an array
 * @array: Pointer to the first element of the array to be converted
 * @size: Number of elements in @array
 *
 * Return: Pointer to the root node of the created AVL, otherwise NULL if failed
 */
avl_t *array_to_avl(int *array, size_t size)
{
	avl_t *tree = NULL;
	size_t ui, j;

	if (array == NULL)
		return (NULL);

	for (ui = 0; ui < size; ui++)
	{
		for (j = 0; j < ui; j++)
		{
			if (array[j] == array[ui])
				break;
		}
		if (j == i)
		{
			if (avl_insert(&tree, array[ui]) == NULL)
				return (NULL);
		}
	}

	return (tree);
}
