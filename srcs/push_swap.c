/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 23:28:10 by yokitaga          #+#    #+#             */
/*   Updated: 2023/01/19 15:07:02 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main()
{
    t_data *data;
    t_node *current_node;

    int array[]={1,2,3,4,5};

    data=(t_data *)malloc(sizeof(t_data));
    data->stack_a=create_list(array, 5);
    data->stack_len=ft_stack_size(data->stack_a);
    printf("stack size:%d\n", (int)data->stack_len);

    current_node=data->stack_a;
    do{
        printf("%d\n", current_node->value);
        current_node=current_node->next;
    }while(current_node != data->stack_a);
    
    printf("---before swap---\n");
    
    test_push_swap_sa(data->stack_a);
    do{
        printf("%d\n", current_node->value);
        current_node=current_node->next;
    }while(current_node != data->stack_a);
    printf("---after swap---\n");
    return(0);
}

