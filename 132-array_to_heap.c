#include "binary_trees.h"

/**
 * array_to_heap - Will create a max binary heap tree from an array
 * @array: Pointer to the array of values
 * @size: Length of the array
 *
 * Return: Pointer to the max binary heap tree, or else NULL.
 */
heap_t *array_to_heap(int *array, size_t size)
{
	size_t ui;
	heap_t *root = NULL;

	if (array != NULL)
	{
		for (ui = 0; ui < size; ui++)
		{
			heap_insert(&root, *(array + ui));
		}
	}
	return (root);
}
