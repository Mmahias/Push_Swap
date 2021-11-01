/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahias <mmahias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 15:08:49 by mmahias           #+#    #+#             */
/*   Updated: 2021/08/20 17:31:05 by mj               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_all(t_list **a, t_list **b, t_stack **stack, char **str)
{
	free(str);
	ft_dlstclear(a, NULL);
	ft_dlstclear(b, NULL);
	stack_clear(stack);
}

int	print_err(char *str)
{
	ft_putstr_fd(str, 2);
	return (0);
}

int	ft_errors(char **strs, t_list **a, t_list **b, t_stack **stack)
{
	print_err("Error\n");
	ft_free_all(a, b, stack, strs);
	return (0);
}
