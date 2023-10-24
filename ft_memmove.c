/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim-s <mkarim-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:40:04 by mkarim-s          #+#    #+#             */
/*   Updated: 2023/10/22 14:36:13 by mkarim-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*ptr_d;
	unsigned char	*ptr_s;
	size_t			i;

	ptr_d = (unsigned char *)dst;
	ptr_s = (unsigned char *)src;
	if (ptr_d == ptr_s || n == 0)
		return (dst);
	if (ptr_d < ptr_s || ptr_d >= ptr_s + n)
	{
		i = 0;
		while (i < n)
			ptr_d[i++] = *ptr_s++;
	}
	else
	{
		while (n--)
			ptr_d[n] = ptr_s[n];
	}
	return (dst);
}
