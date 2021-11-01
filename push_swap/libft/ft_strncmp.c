/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahias <mmahias@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 15:07:12 by mmahias           #+#    #+#             */
/*   Updated: 2021/08/20 17:26:30 by mj               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*uc_s1;
	unsigned char	*uc_s2;

	i = 0;
	uc_s1 = (unsigned char *)s1;
	uc_s2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	n = (n - 1);
	while (uc_s1[i] && uc_s2[i] && (uc_s1[i] == uc_s2[i]) && (i < n))
		i++;
	return (uc_s1[i] - uc_s2[i]);
}
