/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sum_list.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 17:10:34 by marvin            #+#    #+#             */
/*   Updated: 2026/03/21 17:10:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "header.h"
#include <stdio.h>

int sum_list(t_node *head)
{
    int sum;

    sum = 0;
    while(head)
    {
        sum += head->data;
        head = head->next;
    }
    return (sum);
}

int main()
{
    t_node *head;
    t_node a,b,c;

    a.data = 1;
    b.data = 2;
    c.data = 3;

    a.next = &b;
    b.next = &c;
    c.next = NULL;

    head = &a;
    printf("%d ", sum_list(head));
}