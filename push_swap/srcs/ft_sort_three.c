/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahias <mmahias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 15:10:58 by mmahias           #+#    #+#             */
/*   Updated: 2021/08/20 17:39:25 by mj               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_sthree(t_list **a, t_stack **stack)
{
	if ((*a)->content > (*a)->next->content
		&& (*a)->content < (*a)->next->next->content)
		ft_swap_a(*a, stack);
	if ((*a)->content > (*a)->next->content
		&& (*a)->next->content > (*a)->next->next->content)
	{
		ft_swap_a(*a, stack);
		ft_reverse_rra(a, stack);
	}
	if ((*a)->content > (*a)->next->next->content
		&& (*a)->next->content < (*a)->next->next->content)
		ft_rotate_a(*a, stack);
	if ((*a)->content < (*a)->next->content
		&& (*a)->next->content > (*a)->next->next->content
		&& (*a)->next->next->content > (*a)->content)
	{
		ft_swap_a(*a, stack);
		ft_rotate_a(*a, stack);
	}
	if ((*a)->content < (*a)->next->content
		&& (*a)->content > (*a)->next->next->content)
		ft_reverse_rra(a, stack);
}

void	ft_threeb(t_list **b, t_stack **stack)
{
	if ((*b)->content > (*b)->next->content)
		ft_swap_b(*b, stack);
}

void	ft_three(t_list **a, int size, t_stack **stack)
{
	if (size <= 2 && (*a)->content > (*a)->next->content)
		ft_swap_a(*a, stack);
	else if (size > 2)
		ft_sthree(a, stack);
}
