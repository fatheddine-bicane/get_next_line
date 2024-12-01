/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 15:20:53 by fbicane           #+#    #+#             */
/*   Updated: 2024/12/01 16:39:14 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdint.h>

char	*ft_strchr(const char *str, int ch)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == (char)ch)
			return ((char *)(&str[i]));
		i++;
	}
	if (str[i] == (char)ch)
		return ((char *)(&str[i]));
	return (0);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest_tc;
	unsigned char	*src_tc;

	i = 0;
	dest_tc = ((unsigned char *)(dest));
	src_tc = ((unsigned char *)(src));
	while (i < n)
	{
		dest_tc[i] = src_tc[i];
		i++;
	}
	return (dest);
}

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*row_mm;
	size_t			i;

	if (!count && !size && (count > SIZE_MAX / size))
		return (0);
	i = 0;
	row_mm = (unsigned char *)malloc(count * size);
	if (!row_mm)
		return (0);
	while (i < (count * size))
	{
		row_mm[i] = 0;
		i++;
	}
	return (row_mm);
}

