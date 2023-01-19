/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 23:30:31 by yokitaga          #+#    #+#             */
/*   Updated: 2023/01/19 18:00:00 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//printf 使う用
# include <stdio.h>
//malloc
#include <stdlib.h>

#include <stdbool.h>

//双方向循環連結リスト

typedef struct s_node{
    struct s_node  *prev;
    int             value;
    struct s_node  *next;
    bool           end;
      
}t_node;

typedef struct s_data{
    t_node *stack_a;
    t_node *stack_b;

    
    size_t stack_len;
}t_data;

t_node *create_node(int value);
t_node *create_stack(int data[],int n);
size_t ft_stack_size(t_node *stack);
void   ft_stack_last(t_node *stack);
void   push_swap_sa(t_node **stack);
void   push_swap_ra(t_node **stack);
void   push_swap_rra(t_node **stack);

#endif