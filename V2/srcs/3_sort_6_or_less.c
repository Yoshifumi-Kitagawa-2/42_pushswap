/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_sort_6_or_less.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 22:06:20 by yokitaga          #+#    #+#             */
/*   Updated: 2023/01/21 18:14:23 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_3_or_less(t_data *data)
{
    if (data->stack_len == 2)
        operation_sa(data);
}

/*
void sort_between_4_and_6(t_data *data)
{
    
}
*/