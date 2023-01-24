/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_sort_7_or_more.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:50:45 by yokitaga          #+#    #+#             */
/*   Updated: 2023/01/24 21:29:28 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//クイックソートでやる

void    quick_sort(t_data *data, size_t index_1, size_t index_2)
{
    t_node *current;
    size_t i;
    size_t  stack_a_len;
    
    stack_a_len = ft_stack_size(data->stack_a);
    i =0;
    current = data->stack_a;
    while (i <stack_a_len)
    {
        if (current->sorted_index > index_1)
        {
            operation_pb(data);
            if (current->sorted_index > index_2)
                operation_rb(data);
        }
        else
            operation_ra(data);
        current = data->stack_a;
        i++;
    }
}

void sort_7_or_more(t_data *data)
{
    quick_sort(data, data->index_second_quater, data->index_third_quater);
}
    