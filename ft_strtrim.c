/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim-s <mkarim-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:40:05 by mkarim-s          #+#    #+#             */
/*   Updated: 2023/10/22 14:50:37 by mkarim-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_char_in_set(char c, char const *set)
{
	size_t	index;

	index = 0;
	while (index < ft_strlen(set))
	{
		if (set[index] == c)
			return (1);
		index++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start_idx;
	int		end_idx;
	int		result_idx;
	int		s1_len;
	char	*trimmed_str;

	start_idx = 0;
	result_idx = 0;
	s1_len = ft_strlen(s1);
	if (s1_len == 0)
	{
		return (ft_strdup(""));
	}
	end_idx = s1_len;
	while (is_char_in_set(s1[start_idx], set) == 1)
		start_idx++;
	while (is_char_in_set(s1[end_idx - 1], set) == 1 && end_idx > start_idx)
		end_idx--;
	trimmed_str = ft_calloc(end_idx - start_idx + 1, sizeof(char));
	if (!trimmed_str)
		return (NULL);
	while (start_idx < end_idx)
		trimmed_str[result_idx++] = s1[start_idx++];
	trimmed_str[result_idx] = '\0';
	return (trimmed_str);
}
