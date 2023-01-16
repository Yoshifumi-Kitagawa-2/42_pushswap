/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 23:28:10 by yokitaga          #+#    #+#             */
/*   Updated: 2023/01/17 00:40:22 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//単方向連結リストを作成
t_node *init_node(int data)
{
    t_node *node;

    node = (t_node *)malloc(sizeof(t_node));
    if (node == NULL)
    {
        ft_printf("init_node malloc error\n");
        return (NULL);
    }
    node->data = data;
    node->next = NULL;
    return (node);
}

t_list *init_list(int data)
{
    t_list *list;

    list = NULL;
    list = (t_list *)malloc(sizeof(t_list));
    if (list == NULL)
    {
        printf("init_list malloc error\n");
        return (NULL);
    }
    list->list_top_node = init_node(data);
    if (list->list_top_node == NULL)
    {
        printf("init_node malloc error\n");
        free(list);
        return (NULL);
    }
    return (list);
}



int main(int argc, char **argv)
{
    t_node *node;

    node = (t_node *)malloc(sizeof(t_node));
    node->data = 0;
    printf("%d\n", node->data);
    free(node);
    return(0);
}