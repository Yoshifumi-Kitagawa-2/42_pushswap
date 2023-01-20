/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_init_data.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:42:59 by yokitaga          #+#    #+#             */
/*   Updated: 2023/01/20 21:48:58 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_data *init_data(int array[])
{
    t_data *data;
    
    data=(t_data *)malloc(sizeof(t_data));
    if (data == NULL)//既にmallocしたもの解放する処理必要だろうけどまだ何もしてない
    {
        ft_printf("MALLOC ERROR AT INIT DATA\n");
        return (NULL);
    }
    data->stack_a=create_stack(array);
    data->stack_b=NULL;
    data->stack_len=ft_stack_size(data->stack_a);
    ft_stack_last(data->stack_a);
    return (data);
}

t_node *create_node(int value)
{
    t_node *new_node;

    new_node=(t_node *)malloc(sizeof(t_node));
    new_node->value=value;
    new_node->prev=NULL;
    new_node->next=NULL;
    return(new_node);
}
//双方向循環リスト作成

t_node *create_stack(int array[])
{
    t_node *head;
    t_node *tail;
    int i;

    i=1;
    head=create_node(array[0]);
    tail=head;
    while(array[i] != '\0')
    {
        t_node *new_node;
        new_node=create_node(array[i]);
        tail->next=new_node;
        new_node->prev=tail;
        tail=new_node;
        i++;
    }
    head->prev=tail;
    tail->next=head;
    return(head);
}