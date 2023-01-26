/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_set_array.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitaga <yokitaga@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 20:34:53 by yokitaga          #+#    #+#             */
/*   Updated: 2023/01/26 16:27:08 by yokitaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
        array[i] =  ft_atoi(argv[i + 1]);
        i++;
    }
    
    return (array);
}