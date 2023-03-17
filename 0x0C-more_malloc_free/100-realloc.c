#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to current memory block
 * @old_size: the allocated space for ptr
 * @new_size: new size for the new memory block
 *
 * Return: pointer to the new allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *r, *optr;
	unsigned int i, size;

	/* cast old pointer void *, to char * to do arithmetic */
	optr = ptr;
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	r = malloc(new_size);
	if (r == NULL)
		return (NULL);
	size = new_size >= old_size ? old_size : new_size;
	for (i = 0; ptr != NULL && i < size; i++)
		r[i] = optr[i];
	free(optr);
	return (r);
}
