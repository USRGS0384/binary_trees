#include "binary_trees.h"
/**
 * array_to_heap -function create a heap tree from array
 * @array: array reference
 * @size: size of array
 * Return: pointer to tree
 */
heap_t *array_to_heap(int *array, size_t size)
{
	unsigned int i;
	heap_t *root = NULL;

	for (i = 0; i < size; i++)
		heap_insert(&root, array[i]);

	return (NULL);
}
