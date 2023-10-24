/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim-s <mkarim-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:40:04 by mkarim-s          #+#    #+#             */
/*   Updated: 2023/10/22 14:43:51 by mkarim-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	copy_str(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && *src)
	{
		*dst++ = *src++;
		i++;
	}
	*dst = '\0';
}

size_t	ft_strlcpy(char *dst, const char *src, size_t len)
{
	size_t		len_s;
	const char	*src_start;
	size_t		copy_len;

	len_s = 0;
	src_start = src;
	while (*src_start++)
	{
		len_s++;
	}
	if (len == 0)
		return (len_s);
	if (len_s < len)
		copy_len = len_s;
	else
		copy_len = len - 1;
	copy_str(dst, src, copy_len);
	return (len_s);
}
