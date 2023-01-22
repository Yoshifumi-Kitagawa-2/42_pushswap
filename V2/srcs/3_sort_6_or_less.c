/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_sort_6_or_less.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 22:06:20 by yokitaga          #+#    #+#             */
/*   Updated: 2023/01/22 15:38:36 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
・3個の場合
1 2 3 →何もしない(cofirmed sortedで弾かれる)
2 3 1 →rra：1 2 3
1 3 2 →rra：2 1 3→sa：1 2 3

2 1 3 →sa：1 2 3
3 1 2 →ra：1 2 3
3 2 1 →ra：2 1 3→sa：1 2 3
*/
//OK
void sort_3_or_less(t_data *data)
{
    t_node *current;
    current = data->stack_a;
    if (data->stack_len == 2)
        operation_sa(data);
    if (current->value <  current->next->value)
    {
        operation_rra(data);
        if (confirm_sorted(data) == false)
            operation_sa(data); 
    }
    else if (current->next->value < current->next->next->value)
    {
        if (current->value < current->next->next->value)
            operation_sa(data);
        else
            operation_ra(data);
    }
    else
    {
        operation_ra(data);
        operation_sa(data);
    }
}

/*
void sort_between_4_and_6(t_data *data)
{
    
}
*/