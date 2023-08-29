#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	listint_t *head = NULL;
	int i;

	for (i = 0; i <= 8; i++)
		add_nodeint_end(&head, i * 2);

	print_listint(head);
	printf("-----------------\n");

	for (i = 0; i < 8; i++)
	{
		delete_nodeint_at_index(&head, 0);
		print_listint(head);
		printf("-----------------\n");
	}

	delete_nodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_nodeint_at_index(&head, 0);
	print_listint(head);

	return (0);
}
