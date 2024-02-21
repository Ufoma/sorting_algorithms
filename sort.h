#ifndef SORT_H
#define SORT_H

#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/***0-bubble_sort.c file***/
void bubble_sort(int *array, size_t size);

/****print_arry.c file****/
void print_array(const int *array, size_t size);

/*****print_list.c file*****/
void print_list(const listint_t *list);

/*****1-insertion_sort_list.c file*****/
void insertion_sort_list(listint_t **list);
void swap_nodes(listint_t **left, listint_t **right, listint_t **list);

/****2-selection_sort.c file*****/
void selection_sort(int *array, size_t size);

#endif
