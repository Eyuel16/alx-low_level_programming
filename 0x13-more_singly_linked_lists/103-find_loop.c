#include "lists.h"
/**
 * mul - multipy a and b
 *
 * @a: integer 1
 * @b: integer 2
 * Return: the product of a and b
 */
int mul(int a, int b)
{
return (a * b);
}
#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: list of type listint_t
 *
 * Return: address of node where loop starts, or NULL if no loop exists
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = (fast->next)->next;

		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}

			return (slow);
		}
	}

	return (NULL);
}
