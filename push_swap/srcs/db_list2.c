/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   db_list2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahias <mmahias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 15:08:39 by mmahias           #+#    #+#             */
/*   Updated: 2021/08/20 17:29:55 by mj               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_dlstdelone(t_list *dlst, void (*del)(int))
{
	if (dlst != NULL)
	{
		if (del && dlst->content)
			(del)(dlst->content);
		free(dlst);
		dlst = NULL;
	}
}

void	ft_dlstclear(t_list **dlst, void (*del)(int))
{
	t_list	*current;
	t_list	*next;

	if (*dlst)
	{
		current = *dlst;
		while (current != NULL)
		{
			next = current->next;
			ft_dlstdelone(current, (del));
			current = next;
		}
		*dlst = NULL;
	}
}

void	ft_dlstprintf(t_list *dlst)
{
	if (!dlst)
		printf("liste vide\n");
	while (dlst)
	{
		if (!dlst->content)
			printf("[NULL] ");
		else
			printf("[%d] ", dlst->content);
		dlst = dlst->next;
	}
	printf("\n");
	return ;
}

int	ft_is_sort(t_list *dlst)
{
	t_list	*last;

	last = ft_dlstlast(dlst);
	while (dlst != last)
	{
		if (dlst->content < dlst->next->content)
			dlst = dlst->next;
		else
			return (0);
	}
	return (1);
}
