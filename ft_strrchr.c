/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim-s <mkarim-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:40:04 by mkarim-s          #+#    #+#             */
/*   Updated: 2023/10/22 14:45:19 by mkarim-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*search_char_from_end(const char *s, int c, int len)
{
	while (0 <= len)
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s--;
		len--;
	}
	return (0);
}

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = 0;
	while (*s)
	{
		s++;
		len++;
	}
	if (c == '\0')
	{
		return ((char *)s);
	}
	return (search_char_from_end(s, c, len));
}
