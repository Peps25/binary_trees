#include "binary_trees.h"

/**
 * _realloc - Will reallocate a memory block
 * @ptr: Pointer to the previous memory block
 * @old_size: Size of the old memory block
 * @new_size: Size of the new memory block
 *
 * Return: Pointer to the new memory block, or else NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int min_size = old_size < new_size ? old_size : new_size;
	unsigned int ui;

	if (new_size == old_size)
		return (ptr);
	if (ptr != NULL)
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
		new_ptr = malloc(new_size);
		if (new_ptr != NULL)
		{
			for (ui = 0; ui < min_size; ui++)
				*((char *)new_ptr + ui) = *((char *)ptr + ui);
			free(ptr);
			return (new_ptr);
		}
		free(ptr);
		return (NULL);
	}
	else
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}
}

/**
 * heap_to_sorted_array - Will create a sorted array from a max binary heap tree
 * @heap: Pointer to the max binary heap
 * @size: Pointer to the resulting array's size value
 *
 * Return: Pointer to the array, or else NULL
 */
int *heap_to_sorted_array(heap_t *heap, size_t *size)
{
	int *array = NULL;
	heap_t *root;
	int val;
	size_t n = 0;

	if (heap != NULL)
	{
		root = heap;
		while (root != NULL)
		{
			val = heap_extract(&root);
			array = _realloc(array, sizeof(int) * n, sizeof(int) * (n + 1));
			*(array + n) = val;
			n++;
		}
	}
	if (size != NULL)
		*size = n;
	return (array);
}
