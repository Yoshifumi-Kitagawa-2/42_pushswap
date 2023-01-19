/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_op1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:42:11 by yokitaga          #+#    #+#             */
/*   Updated: 2023/01/19 15:06:45 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//sa
//OK
//引数にhead->nextを渡すと
//memo:12345→13245

void test_push_swap_sa(t_node *stack)
{
    t_node *current;
    t_node *next;

    if(stack == NULL)
        return ;
    current = stack;
    next=current->next;
    if(ft_stack_size(stack) > 2)
    {
        next->prev=current->prev;
        current->next=next->next;
        current->prev->next=next;
        next->next->prev=current;
    }
    current->prev=next;
    next->next=current;
    stack=next;
}

//以下ra
/*
void push_swap_ra(t_node **stack)
{
    if(stack==NULL)
        return ;
    if(*stack==NULL)
        return ;
    (*stack)->prev->end=false;
    (*stack)->end=true;
    (*stack)=(*stack)->next;
}
*/

//pa
/*
void push_swap_pa(t_node **head)
{
    t_node *tail;
    int     temp;
    tail=(*head)->prev;
    temp=tail->value;
    tail->value=
}
*/