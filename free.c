#include "shell.h"
/**
 * freeing - Frees memory allocated for a 2D array.
 * @array_2d: The 2D array to be freed.
 *
 * This function deallocates memory previously allocated for a 2D array
 * and its individual elements. It prevents memory leaks by releasing
 * all resources associated with the array.
 *
 * @array_2d: A pointer to a 2D array of strings (char**).
 */
void freeing(char **array_2d)
{
	int i = 0;

	if (!array_2d)
		return;
	while (array_2d[i])
	{
		free(array_2d[i]);
		array_2d[i] = NULL;
		i++;
	}
	free(array_2d);
	array_2d = NULL;
}
