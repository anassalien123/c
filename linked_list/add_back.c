/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_back.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 08:08:49 by marvin            #+#    #+#             */
/*   Updated: 2026/03/19 08:08:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdlib.h>
#include <stdio.h>

void add_back(t_node **head, int value)
{
    t_node *new_node;
    t_node *tmp;

    new_node = malloc(sizeof(t_node));
    if(!new_node)
        return ;

    new_node->data = value;
    new_node->next = NULL;

    if(*head == NULL)
    {
        *head = new_node;
        return ;
    }

    tmp = *head;
    while (tmp->next)
        tmp = tmp->next; 
    tmp->next = new_node;
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
    t_node a,b,c;

    a.data = 1;
    b.data = 2;
    c.data = 3;

    a.next = &b;
    b.next = &c;
    c.next = NULL;

    t_node *head = &a;
    add_back(&head, 4);
    print_list(head);
}