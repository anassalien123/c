/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 05:25:27 by marvin            #+#    #+#             */
/*   Updated: 2026/03/20 05:25:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "header.h"
#include <stdlib.h>
#include <stdio.h>

void add_back(t_node **head, int value)
{
    t_node *tmp;
    t_node *new_node;

    new_node = malloc(sizeof(t_node));
    if(!new_node)
        return ;

    new_node->data = value;
    new_node->next = NULL;
    if (*head == NULL)
    {
        *head = new_node;
        return ;
    }
    tmp = *head;
    while (tmp->next)
        tmp = tmp->next;
    tmp->next = new_node;
}

void reverse_list(t_node **head)
{
    t_node *prev;
    t_node *current;
    t_node *next;

    prev = NULL;
    current = *head;
    while(current)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
}

void print_list(t_node *head)
{
    while (head)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main()
{
    t_node *head = NULL;

    add_back(&head, 1);
    add_back(&head, 2);
    add_back(&head, 3);
    add_back(&head, 4);

    print_list(head);
    reverse_list(&head);
    print_list(head);
}