/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim-s <mkarim-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:40:05 by mkarim-s          #+#    #+#             */
/*   Updated: 2023/10/22 14:51:42 by mkarim-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_substrs(char const *s1, char c)
{
	int	substr_count;

	substr_count = 0;
	while (*s1 != '\0')
	{
		if (*s1 != c)
		{
			substr_count++;
			while (*s1 != c && *s1 != '\0')
				s1++;
		}
		else
			s1++;
	}
	return (substr_count);
}

static char	**free_alloc_strs(char **dst, int j)
{
	while (j > 0)
	{
		j--;
		free((void *)dst[j]);
	}
	free((void *)dst);
	return (NULL);
}

static char	**split_and_alloc(char const *s, char **dst, char c,
		int total_substrs)
{
	int	i;
	int	j;
	int	start;
	int	len;

	i = 0;
	j = 0;
	while (s[i] != '\0' && j < total_substrs)
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != '\0' && s[i] != c)
			i++;
		len = i - start;
		dst[j] = (char *)malloc(len + 1);
		if (dst[j] == NULL)
			return (free_alloc_strs(dst, j));
		ft_strlcpy(dst[j], &s[start], len + 1);
		j++;
	}
	dst[j] = NULL;
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	char	**dst;
	int		total_substrs;

	if (s == NULL)
		return (NULL);
	total_substrs = count_substrs(s, c);
	dst = (char **)malloc(sizeof(char *) * (total_substrs + 1));
	if (dst == NULL)
		return (NULL);
	if (split_and_alloc(s, dst, c, total_substrs) == NULL)
	{
		return (NULL);
	}
	return (dst);
}
