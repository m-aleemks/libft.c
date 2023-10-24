/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim-s <mkarim-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:40:05 by mkarim-s          #+#    #+#             */
/*   Updated: 2023/10/22 16:39:55 by mkarim-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_num_len(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	fill_result(char *result, int n, int negative, size_t len)
{
	if (n == 0)
		result[0] = '0';
	while (n)
	{
		result[--len] = (n % 10) + '0';
		n /= 10;
	}
	if (negative)
		result[0] = '-';
}

char	*ft_itoa(int n)
{
	char	*result;
	size_t	len;
	int		negative;

	negative = 0;
	if (n == -2147483648)
	{
		result = (char *)malloc(12);
		if (!result)
			return (NULL);
		ft_strlcpy(result, "-2147483648", 12);
		return (result);
	}
	len = get_num_len(n);
	result = (char *)malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (n < 0)
	{
		negative = 1;
		n = -n;
	}
	fill_result(result, n, negative, len);
	return (result);
}
