/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_set_array.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 20:34:53 by yokitaga          #+#    #+#             */
/*   Updated: 2023/01/26 19:47:41 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool  check_argv(char *argv)
{
    bool check_result;

    check_result = true;
    while (*argv != '\0')
    {
        if (ft_isdigit(*argv) == 0)
        {
            check_result = false;
            break;
        }
        argv++;
    }
    return (check_result);
}  

int *set_array(int argc, char *argv[])
{
    int *array;
    size_t  i;
    
    array = (int *)ft_calloc(argc, sizeof(int));
    if (array == NULL)
        return (NULL);
    i = 0;
    while (i < argc - 1)
    {
        if (check_argv(argv[i + 1]) == false)
            return (array);
        array[i] =  ft_atoi(argv[i + 1]);
        i++;
    }
    return (array);
}

