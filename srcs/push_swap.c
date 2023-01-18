/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 23:28:10 by yokitaga          #+#    #+#             */
/*   Updated: 2023/01/17 11:38:30 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//nodeを作成する関数
t_node *create_node(int value)
{
    t_node *new_node;

    new_node=(t_node *)malloc(sizeof(t_node));
    new_node->value=value;
    //printf("%d\n", new_node->value);
    new_node->prev=NULL;
    new_node->next=NULL;
    return(new_node);
}
//双方向循環リスト作成
t_node *create_list(int data[],int n)
{
    t_node *head;
    t_node *tail;
    int i;

    i=1;
    head=create_node(data[0]);
    tail=head;
    while(i < n)
    {
        t_node *new_node;
        new_node=create_node(data[i]);
        tail->next=new_node;
        new_node->prev=tail;
        tail=new_node;
        i++;
    }
    head->prev=tail;
    tail->next=head;
    return(head);
}

//sa
void push_swap_sa(t_node **stack)
{
    t_node *current;
    t_node *next;

    if(stack = NULL)
        return ;
    if(*stack = NULL)
        return ;
    current = *stack;
    next=current->next;
    if(stackken(*stack) > 2)
    {
        next->prev=current->prev;
        current->next=next->next;
        current->prev->next=next;
        next->next->prev=current;
    }
    current->prev=next;
    next->next=current;
    *stack=next;
}


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

//pa
void push_swap_pa(t_node **head)
{
    t_node *tail;
    int     temp;
    tail=(*head)->prev;
    temp=tail->value;
    tail->value=
}




int main()
{
    t_node *head;
    t_node *current_node;

    int data[]={1,2,3,4,5};

    head=create_list(data, 5);
    current_node=head;
    do{
        printf("%d\n", current_node->value);
        current_node=current_node->next;
    }while(current_node != head);
    return(0);
}