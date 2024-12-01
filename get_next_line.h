/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 15:21:15 by fbicane           #+#    #+#             */
/*   Updated: 2024/12/01 16:28:22 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <string.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 3
# endif

void	*ft_memcpy(void *dest, const void *src, size_t n);
char	*ft_strchr(const char *str, int ch);

# endif