/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_global_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahias <mmahias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 15:08:57 by mmahias           #+#    #+#             */
/*   Updated: 2021/08/20 15:08:58 by mmahias          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_global_sort(t_list **a, t_list **b, t_stack **stack, t_data *data)
{
	int	lstsize;

	lstsize = ft_dlstsize(*a);
	if (lstsize > 1 && lstsize <= 3)
		ft_three(a, lstsize, stack);
	if (lstsize > 3 && lstsize <= 5)
		ft_five(a, b, stack, data);
	if (lstsize > 5 && lstsize <= 100)
		ft_hundred(a, b, stack, data);
	if (lstsize > 100)
		ft_fivehundred(a, b, stack, data);
}
