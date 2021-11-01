/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahias <mmahias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 15:09:04 by mmahias           #+#    #+#             */
/*   Updated: 2021/08/20 17:32:40 by mj               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_data	init_data(void)
{
	t_data	data;

	data.min = 0;
	data.max = 0;
	data.c_min = 0;
	data.c_max = 0;
	data.chunk = 0;
	return (data);
}

void	ft_init_lst(t_list **a, char **str, int size)
{
	t_list	*new;
	int		i;

	i = 0;
	while (i < size)
	{
		new = ft_dlstnew(ft_atoi(str[i]));
		if (!new)
		{
			ft_dlstclear(a, NULL);
			return ;
		}
		ft_dlstadd_back(a, new);
		i++;
	}
}
