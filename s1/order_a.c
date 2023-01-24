/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: terabu <terabu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 15:54:04 by terabu            #+#    #+#             */
/*   Updated: 2023/01/11 14:12:01 by terabu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *a_list)
{
	if (a_list != NULL && a_list->head != NULL && a_list->head->next != NULL)
	{
		swap(a_list);
		ft_printf("sa\n");
	}
}

void	pa(t_stack *a_list, t_stack *b_list)
{
	if (b_list != NULL && b_list->head)
	{
		push(b_list, a_list);
		ft_printf("pa\n");
	}
}

void	ra(t_stack *a_list)
{
	if (a_list != NULL && a_list->head->next != NULL)
	{
		rotate(a_list);
		ft_printf("ra\n");
	}
}

void	rra(t_stack *a_list)
{
	if (a_list != NULL && a_list->head->next != NULL)
	{
		reverse(a_list);
		ft_printf("rra\n");
	}
}
