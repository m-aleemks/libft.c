/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim-s <mkarim-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:40:05 by mkarim-s          #+#    #+#             */
/*   Updated: 2023/10/22 14:46:45 by mkarim-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ch;
	size_t			len;

	str = (unsigned char *)s;
	ch = (unsigned char)c;
	len = 0;
	while (len < n)
	{
		if (*str == ch)
		{
			return ((unsigned char *)str);
		}
		str++;
		len++;
	}
	return (0);
}
