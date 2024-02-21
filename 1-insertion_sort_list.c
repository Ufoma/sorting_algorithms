#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list in ascending order
 * using the Insertion sort algorithm
 * @list: Double linked list to sort
 */
void insertion_sort_list(listint_t **list)
{
    listint_t *current; 
    if (list == NULL || *list == NULL || (*list)->next == NULL)
        return;

    current = (*list)->next; /**current = (*list)->next;*/

    while (current != NULL)
    {
        listint_t *insertion_point = current->prev;
        while (insertion_point != NULL && insertion_point->n > current->n)
        {
            swap_nodes(&insertion_point, &current, list);
            print_list(*list);
            insertion_point = current->prev;
        }
        current = current->next;
    }
}

/**
 * swap_nodes - swaps two adjacent nodes in a doubly linked list
 * @left: pointer to the left node
 * @right: pointer to the right node
 * @list: pointer to the head of the list
 */
void swap_nodes(listint_t **left, listint_t **right, listint_t **list)
{
    listint_t *prev_left = (*left)->prev;
    listint_t *next_right = (*right)->next;

    if (prev_left != NULL)
        prev_left->next = *right;
    else
        *list = *right;

    (*right)->prev = prev_left;
    (*right)->next = *left;

    (*left)->prev = *right;
    (*left)->next = next_right;

    if (next_right != NULL)
        next_right->prev = *left;
}

