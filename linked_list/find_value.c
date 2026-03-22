/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_value.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 17:33:31 by marvin            #+#    #+#             */
/*   Updated: 2026/03/21 17:33:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdlib.h>
#include <stdio.h>

int find_value(t_node *head, int value)
{
    while (head)
    {
        if(head->data == value)
            return (1);
        head = head->next;
    }
    return (0);
}
int main()
{
    t_node a;
    a.data = 1;
    a.next = NULL;

    t_node *head = &a;
    printf("%d", find_value(head,1));
}