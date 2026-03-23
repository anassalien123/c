/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_back_no_tmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 18:09:50 by marvin            #+#    #+#             */
/*   Updated: 2026/03/21 18:09:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdio.h>
#include <stdlib.h>

void add_back(t_node **head, int value)
{
    t_node *new_node;

    new_node = malloc(sizeof(t_node));
    if(!new_node)
        return ;
    
    
}