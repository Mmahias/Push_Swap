/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahias <mmahias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 15:11:11 by mmahias           #+#    #+#             */
/*   Updated: 2021/08/20 15:11:12 by mmahias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	smallest(t_list *dlst)
{
	int	small;

	small = dlst->content;
	while (dlst != NULL)
	{
		if (dlst->content < small)
			small = dlst->content;
		dlst = dlst->next;
	}
	return (small);
}

int	biggest(t_list *dlst)
{
	int	big;

	big = dlst->content;
	while (dlst != NULL)
	{
		if (dlst->content > big)
			big = dlst->content;
		dlst = dlst->next;
	}
	return (big);
}
