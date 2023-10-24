/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim-s <mkarim-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:40:05 by mkarim-s          #+#    #+#             */
/*   Updated: 2023/10/11 16:40:05 by mkarim-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*joined_str;

	len_s1 = 0;
	len_s2 = 0;
	if (!s1 || !s2)
		return (NULL);
	while (s1[len_s1])
		len_s1++;
	while (s2[len_s2])
		len_s2++;
	joined_str = malloc(len_s1 + len_s2 + 1);
	if (!joined_str)
		return (NULL);
	ft_strlcpy(joined_str, s1, len_s1 + 1);
	ft_strlcpy(joined_str + len_s1, s2, len_s2 + 1);
	return (joined_str);
}
