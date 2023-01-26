/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   6_free_all.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 21:54:38 by yokitaga          #+#    #+#             */
/*   Updated: 2023/01/26 13:42:18 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void free_stack_and_data(t_data *data)
{
    t_node *current;
    
    current = data->stack_a;
    while (current->end == false)
    {
        current = current->next;
        free(current->prev);
    }
    free(current->prev);
    free(current);
    free(data);
}