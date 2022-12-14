#include "lists.h"

/**
 * insert_node - function that inserts a number into a sorted
 * singly linked list.
 * @head: head of the list.
 * @number: number to insert.
 * Return: the address of the new node, or NULL if it failed.
 */

/**
 * APPROACH!
 * insert_node - To insert in the middle, we need my data to be less than
 * the previous one in the list and greater than the next one, it is not
 * enough to validate only one option, take into account checkers when
 * inserting at the beginning or end, besides saving the data already
 * existing in the list in a temporary pointer so that they are not lost
 * when entering the new ones.
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new_node = NULL, *current_node;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = number;

	if (*head == NULL || (*head)->n >= new_node->n)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		current_node = *head;

		while (current_node->next && current_node->next->n < new_node->n)
			current_node = current_node->next;

		new_node->next = current_node->next;
		current_node->next = new_node;
	}

	return (new_node);
}
