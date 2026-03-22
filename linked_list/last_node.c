/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 17:53:42 by marvin            #+#    #+#             */
/*   Updated: 2026/03/21 17:53:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdio.h>

t_node *last_node(t_node *head)
{
    if (head == NULL)
        return (0);
    while (head->next != NULL)
    {
        head = head->next;
    }
    return (head);
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

    t_node *head = last_node(&a);
    printf("%d", head->data);

    // t_node *last = last_node(&a);
    
    // if (last)
    //     printf("Last value: %d\n", last->data);
    // else
    //     printf("List is empty\n");

    // return (0);
}