/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:44:13 by yokitaga          #+#    #+#             */
/*   Updated: 2023/01/19 19:09:44 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
//Ok
size_t ft_stack_size(t_node *stack)
{
    size_t size;
    t_node *head;

    size=1;
    head=stack;
    if (stack==NULL)
        return(0);
    while (stack->next!=head)
    {
        size++;
        stack=stack->next;
    }
    return(size);
}
//OK
void ft_stack_last(t_node *stack)
{
    t_node *head;
    t_node *current;

    if (stack == NULL)
        return ;
    head=stack;
    current=stack->next;
    while(current->next != head)
    {
        if (current->next == head->prev)
            current->next->end = true;
        else
            current->end = false;
        current = current->next;
    }
}

void ft_stack_add_front(t_node **stack, t_node *new)
{
    t_node *current;

    current = *stack;
    if(new == NULL)
        return ;
    if(current != NULL)
    {
        new->next=current->prev->next;
        new->prev=current->prev;
        current->prev->next=new
    }
}