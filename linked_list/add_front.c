/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_front.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 07:51:17 by marvin            #+#    #+#             */
/*   Updated: 2026/03/19 07:51:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdlib.h>
#include <stdio.h>

void add_front(t_node **head, int value)
{
    t_node *new_node;

    new_node = malloc(sizeof(t_node));
    if(!new_node)
        return;
    
    new_node->data = value;
    new_node->next = *head;
    *head = new_node;
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

    // a.data = 1;
    // b.data = 2;
    // c.data = 3;

    // a.next = &b;
    // b.next = &c;
    // c.next = NULL;

    t_node *head = NULL;

    add_front(&head, 3);
    print_list(head);
    add_front(&head, 2);
    print_list(head);
    add_front(&head, 1);
    print_list(head);
}