/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_op1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:42:11 by yokitaga          #+#    #+#             */
/*   Updated: 2023/01/19 18:52:35 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//sa
//OK
//引数にhead->nextを渡すと
//memo:12345→13245
//先頭を入れるとバグる→スタック作る時に番兵ノード入れたら解決しそう
void push_swap_sa(t_node **stack_head)
{
    t_node *current;
    t_node *next;

    if(stack_head == NULL)
        return ;
    if(*stack_head == NULL)
        return ;
    current = *stack_head;
    if (current->end == true)
        return ;
    next=current->next;
    if(ft_stack_size(*stack) > 2)
    {
        next->prev=current->prev;
        current->next=next->next;
        current->prev->next=next;
        next->next->prev=current;
    }
    current->prev=next;
    next->next=current;
    if (next->end == true)
    {
        next->end = false;
        current->end = true;
    }
    *stack_head=next;
}

//以下ra
//OK
void push_swap_ra(t_node **stack_head)
{
    if(stack_head==NULL)
        return ;
    if(*stack_head==NULL)
        return ;
    (*stack_head)->prev->end=false;
    (*stack_head)->end=true;
    *stack_head=(*stack_head)->next;
}
//rra
void push_swap_rra(t_node **stack_head)
{
    if(stack_head==NULL)
        return ;
    if(*stack_head==NULL)
        return ;
    (*stack_head)->prev->end=false;
    (*stack_head)->prev->prev->end=true;
    *stack_head=(*stack_head)->prev;
}

//pa
t_node *push_swap_pop(t_node **stack_head)
{
    t_node *prev;
    t_node *next;
    t_node *current;

    if(stack_head==NULL)
        return ;
    if(*stack_head==NULL)
        return ;
    current = *stack_head;
    prev=current->prev;
    next=current->next;
    prev->next=next;
    next->prev=prev;
    if (current->end=false)
        *stack = next;
    else 
        *stack = NULL;
    current->end = false;
    return (current);
}