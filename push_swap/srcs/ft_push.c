/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahias <mmahias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 15:09:41 by mmahias           #+#    #+#             */
/*   Updated: 2021/08/20 15:09:43 by mmahias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_b(t_list **a, t_list **b, t_stack **stack)
{
	t_list	*tmp;
	t_list	*first;
	t_list	*new;

	if (!*a)
		return ;
	first = *a;
	new = ft_dlstnew(first->content);
	ft_dlstadd_front(b, new);
	tmp = *a;
	first->previous = NULL;
	*a = first->next;
	free(tmp);
	ft_stack("pb", stack);
}

void	ft_push_a(t_list **b, t_list **a, t_stack **stack)
{
	t_list	*tmp;
	t_list	*first;
	t_list	*new;

	if (!*b)
		return ;
	first = *b;
	new = ft_dlstnew(first->content);
	ft_dlstadd_front(a, new);
	tmp = *b;
	first->previous = NULL;
	*b = first->next;
	free(tmp);
	ft_stack("pa", stack);
}
