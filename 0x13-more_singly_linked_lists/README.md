This is a readme file for more linked list task

# Advance Task 12
Here, the best answer is to use the following code

```
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints linked list elements
 * @head: pointer to the head
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
        int len = 0;
        const listint_t *node;

        for (node = head; node; node = node->next)
        {
                len++;
                printf("[%p] %d\n", (void *)node, node->n);
                if (node <= node->next)
                {
                        printf("-> [%p] %d\n",
                                        (void *)node->next, node->next->n);
                        return (len);
                }
        }
        return (len);
}

```
However, the code checker keep saying case: list of nodes not aligned (in memory) failed.
For now, don't know how to fix that.
