/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:25:14 by fbicane           #+#    #+#             */
/*   Updated: 2024/12/10 18:25:30 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

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

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	char	*s1_s2;

	if (!s1 || !s2)
		return (0);
	s1_s2 = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s1_s2)
		return (0);
	i = 0;
	while (s1[i] != 0)
	{
		s1_s2[i] = s1[i];
		i++;
	}
	while (s2[i - ft_strlen(s1)])
	{
		s1_s2[i] = s2[i - ft_strlen(s1)];
		i++;
	}
	s1_s2[i] = 0;
	free(s1);
	return (s1_s2);
}

char	*ft_strdup(const char *s1)
{
	char	*s1_dup;

	s1_dup = (char *)malloc((ft_strlen(s1) + 1));
	if (!s1_dup)
		return (0);
	ft_memcpy(s1_dup, s1, (ft_strlen(s1) + 1));
	return (s1_dup);
}
