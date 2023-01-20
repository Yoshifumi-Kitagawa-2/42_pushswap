/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5_confirm_sorted.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 22:08:47 by yokitaga          #+#    #+#             */
/*   Updated: 2023/01/20 22:13:37 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool confirm_sorted(t_data *data)
{
    bool check;
    t_node *current_node;

    check = true;
    current_node = data->stack_a;
    while (current_node->end != true)
    {
        if (current_node->value < current_node->next->value)
        {
            check = false;
            break;
        }
        current_node = current_node->next;
    }
    return (check);
}