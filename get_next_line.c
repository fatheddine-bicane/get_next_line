/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:26:17 by fbicane           #+#    #+#             */
/*   Updated: 2024/12/01 16:50:37 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		*buffer;
	size_t		bytes_read;
	static int	i = 1;
	
	//i = 1;
	printf("malloc#[%d]---", i++);
	buffer = malloc((size_t)BUFFER_SIZE + 1);
	if (!buffer)
		return (0);
	if (fd <= 0)
		return (0);
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	if (bytes_read <= 0)
		return (free(buffer), 0);
	buffer[BUFFER_SIZE] = 0;
	return (buffer);
}

int main()
{
	int		fd;
	char	*next_line;
	int		count;
	
	count = 0;
	fd = open("file.txt", O_RDONLY);
	if (fd == -1)
	{
		printf("Error opening the file");
		return (1);
	}
	while (1)
	{
		next_line = get_next_line(fd);
		if (!next_line)
			break;
		count++;
		printf("[%d]:%s\n", count, next_line);
		free(next_line);
		next_line = 0;
	}
	close(fd);
	//printf("no more lines to print");
}