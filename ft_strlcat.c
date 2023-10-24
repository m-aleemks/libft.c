/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim-s <mkarim-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:40:04 by mkarim-s          #+#    #+#             */
/*   Updated: 2023/10/22 14:43:37 by mkarim-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_s;
	size_t	len_d;
	size_t	to_copy;

	len_s = ft_strlen(src);
	len_d = ft_strlen(dst);
	if (dstsize <= len_d)
		return (dstsize + len_s);
	if (len_s < dstsize - len_d - 1)
		to_copy = len_s;
	else
		to_copy = dstsize - len_d - 1;
	ft_memcpy(dst + len_d, src, to_copy);
	dst[len_d + to_copy] = '\0';
	return (len_d + len_s);
}
