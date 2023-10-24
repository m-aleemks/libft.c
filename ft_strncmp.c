/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim-s <mkarim-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:40:04 by mkarim-s          #+#    #+#             */
/*   Updated: 2023/10/22 14:45:44 by mkarim-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	len;

	len = 0;
	while (*s1 && *s2 && len < n)
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		len++;
		s1++;
		s2++;
	}
	if (len != n && (*s1 || *s2))
		return ((unsigned char)*s1 - (unsigned char)*s2);
	if (len == n)
		return (0);
	return (0);
}
