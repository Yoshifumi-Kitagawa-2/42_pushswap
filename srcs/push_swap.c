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

//単方向連結リストを作成
/*
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
*/ß

/*
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
*/
/*
t_list *init_list(int argc, char **argv)
{
    t_list *list;
    size_t i;
    int    array[argc - 1];
    
    list = NULL;
    list = (t_list *)malloc(sizeof(t_list));
    if (list == NULL)
    {
        printf("init_list malloc error\n");
        return (NULL);
    }

    i = 0;
    while (argv[i + 1] != NULL)
    {
        array[i] = ft_atoi(argv[i + 1]);
        
        i++;
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
*/

/*
 ①番兵ノードを作る
 ②ノードを追加する
 ③ノードをもう一個追加する


*/

 //双方向循環リストを用意する関数
 t_stack *init_stack(char *argv[])
 {
     t_stack *stuck;
     size_t i;

     stuck = (t_stack *)malloc(sizeof(t_stack));
     i = 0;
     while(argv[i] != NULL)
     {
         
     }

     return (stuck);
 }

int main(int argc, char *argv[])
{
    t_stack *stack_a;


    //引数チェック
    //全部の引数を文字→数字にして数字を双方向循環リストに追加する
    stack_a = init_stack(argv[]);
    //stack_a を出力する

    return(0);
}