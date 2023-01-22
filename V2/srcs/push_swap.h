/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 23:30:31 by yokitaga          #+#    #+#             */
/*   Updated: 2023/01/22 18:29:14 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//gcc -fsanitize=address -g srcs/*.c lib/*.c

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//libraryを使う用
# include "../lib/libft.h"
//printf 使う用
# include <stdio.h>
//malloc
#include <stdlib.h>

#include <stdbool.h>

//双方向循環連結リスト
typedef struct s_node{
    struct s_node  *prev;
    int            value;
    struct s_node  *next;
    bool           end;
    size_t         index; //座標圧縮用//最初は引数順。valueに合わせて入れ替える。
}t_node;

typedef struct s_data{
    t_node *stack_a;
    t_node *stack_b;

    size_t stack_len;
}t_data;

int     *set_array(int argc, char *argv[]); 

t_data  *init_data(int *array);
t_node  *create_node(int value, size_t index);
t_node  *create_stack(int array[]);
void    swap_index(t_data *data);

size_t  ft_stack_size(t_node *stack);
void    ft_stack_last(t_node *stack);
void    ft_stack_add_front(t_node **stack, t_node *new);

void    sa_or_sb(t_node **stack_head);
void    operation_sa(t_data *data);
void    operation_sb(t_data *data);

void    ra_or_rb(t_node **stack_head);
void    operation_ra(t_data *data);
void    operation_rb(t_data *data);

void    rra_or_rrb(t_node **stack_head);
void    operation_rra(t_data *data);
void    operation_rrb(t_data *data);

t_node  *pop(t_node **stack_head);
void    operation_pa(t_data *data);
void    operation_pb(t_data *data);

bool    confirm_sorted(t_node **stack);

void    sort_3_or_less(t_data *data, t_node *stack);
void    sort_4(t_data *data);
void    sort_5(t_data *data);

void    free_data(t_data *data);

#endif