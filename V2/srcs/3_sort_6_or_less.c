/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_sort_6_or_less.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 22:06:20 by yokitaga          #+#    #+#             */
/*   Updated: 2023/01/22 18:28:11 by yokitaga         ###   ########.fr       */
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
void sort_3_or_less(t_data *data, t_node *stack)
{
    t_node *current;
    
    current = stack;
    if (data->stack_len == 2)
        operation_sa(data);
    if (current->value <  current->next->value)
    {
        operation_rra(data);
        if (confirm_sorted(&(data->stack_a)) == false)
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
①4つの場合
・index 0をbに移動した場合：pb + 3_or_less(最大2手) + paだけ
0 1 2 3
・index 1をbに移動した場合：pb + 3_or_less(最大2手) + pa + saだけ
1 0 2 3 → 0 1 2 3
・index 2をbに移動した場合：pb + 3_or_less(最大2手) + pa + 4手
2 0 1 3 → sa → 0 2 1 3 → ra → 2 1 3 0 → sa → 1 2 3 0 → rra → 0 1 2 3
2 0 1 3 → rra：3 2 0 1 → sa：2 3 0 1 → ra：3 0 1 2 → ra：0 1 2 3
・index3をbに移動した場合：pb + 3_or_less(最大2手) + pa + ra
3 0 1 2 → 0 1 2 3

②5つの場合
・index 0を挿入
0 1 2 3 4
・index 1を挿入：4つの場合 + sa
1 0 2 3 4 → 0 1 2 3 4
・index 2を挿入：4つの場合 + sa + ra + sa + rra
2 0 1 3 4 → 0 2 1 3 4 → 2 1 3 4 0 → 1 2 3 4 0 → 0 1 2 3 4
・index 3を挿入：4つの場合 + rra + sa + ra + ra
3 0 1 2 4 → 4 3 0 1 2 → 3 4 0 1 2 → 4 0 1 2 3 → 0 1 2 3 4
・index 4を挿入：4つの場合 + ra
4 0 1 2 3 → 0 1 2 3 4

③6つの場合

*/
void sort_4(t_data *data)
{
    size_t  head_index;

    head_index = data->stack_a->index;
    operation_pb(data);
    if (confirm_sorted(&(data->stack_a)) == false)
        sort_3_or_less(data, data->stack_a);
    operation_pa(data);
    if (head_index == 1)
        operation_sa(data);
    else if (head_index == 2)
    {
        operation_sa(data);
        operation_ra(data);
        operation_sa(data);
        operation_rra(data);
    }    
    else if (head_index == 3)
        operation_ra(data); 
}

void sort_5(t_data *data)
{
    size_t head_index;
    
    head_index = data->stack_a->index;
    operation_pb(data);
    if (confirm_sorted(&(data->stack_a)) == false)
        sort_4(data);
    operation_pa(data);
    if (head_index == 1)
        operation_sa(data);
    else if (head_index == 2)
    {
        operation_sa(data);
        operation_ra(data);
        operation_sa(data);
        operation_rra(data);
    }
    else if (head_index == 3)
    {
        operation_rra(data);
        operation_sa(data);
        operation_ra(data);
        operation_ra(data);
    }
    else 
        operation_ra(data);
}