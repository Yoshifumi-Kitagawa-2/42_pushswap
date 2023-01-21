/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0_push_swap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:10:10 by yokitaga          #+#    #+#             */
/*   Updated: 2023/01/21 18:46:37 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//malloc or callocしたものメモ(後でfreeしないといけない)
//
//
int main(int argc, char *argv[])
{
    t_data *data;
    int    *array;
    
    if (argc - 1 <= 0)
        return (0);
    
    array = set_array(argc, argv);
    data = init_data(array);
    free(array);

    t_node *current_node;
    
    current_node=data->stack_a;
    do{
        printf("value:%d/", current_node->value);
        printf("end:%d\n", current_node->end);
        current_node=current_node->next;
    }while(current_node != data->stack_a);
    
    if (confirm_sorted(data) == true)
        return (0);
    if (data->stack_len < 4)
        sort_3_or_less(data);
    /*
    else if (4 <= data->stack_len && data->stack_len <= 6)
        sort_between_4_and_6(data);
    else
        sort_7_or_mora(data);
    */
    //t_node *current_node;
    /*
    current_node=data->stack_a;
    do{
        printf("value:%d/", current_node->value);
        printf("end:%d\n", current_node->end);
        current_node=current_node->next;
    }while(current_node != data->stack_a);
    */
    //free_data(data);
    return (0);
}

/*
int main()
{
    t_data *data;
    t_node *current_node;

    int array[]={1,2,3,4,5};

    data=(t_data *)malloc(sizeof(t_data));
    data->stack_a=create_stack(array, 5);
    data->stack_b=NULL;
    data->stack_len=ft_stack_size(data->stack_a);
    ft_stack_last(data->stack_a);
    printf("stack size:%d\n", (int)data->stack_len);
    current_node=data->stack_a;
    
    printf("<implement pb→pa>\n");
    printf("---before swap---\n");
    printf("[result of stack_a]\n");
    do{
        printf("value:%d/", current_node->value);
        printf("end:%d\n", current_node->end);
        current_node=current_node->next;
    }while(current_node != data->stack_a);
    printf("[result of stack_b]\n");
    printf("%p\n", data->stack_b);
    
    operation_pb(data);
    operation_pb(data);
    operation_pb(data);
    operation_rrb(data);
    
    printf("---after swap---\n");
    printf("[result of stack_a]\n");
    current_node=data->stack_a;
    do{
        printf("value:%d/", current_node->value);
        printf("end:%d\n", current_node->end);
        current_node=current_node->next;
    }while(current_node != data->stack_a);
    printf("[result of stack_b]\n");
    printf("value:%d/", data->stack_b->value);
    printf("end:%d\n", data->stack_b->end);
    printf("value:%d/", data->stack_b->next->value);
    printf("end:%d\n", data->stack_b->next->end);
    printf("value:%d/", data->stack_b->next->next->value);
    printf("end:%d\n", data->stack_b->next->next->end);
    return(0);
}
*/