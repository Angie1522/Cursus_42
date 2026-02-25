/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angcasad <angcasad@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 11:36:12 by angcasad          #+#    #+#             */
/*   Updated: 2026/02/25 11:12:35 by angcasad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*clean_box(char *box)
{
	int		i;
	char	*new_box;

	i = 0;
	while (box[i] && box[i] != '\n')
		i++;
	if (!box[i])
	{
		free(box);
		return (NULL);
	}
	new_box = gnl_substr(box, i + 1, gnl_strlen(box) - i);
	free(box);
	return (new_box);
}

char	*extract_line(char *box)
{
	char	*line;
	int		i;

	i = 0;
	if (!box[i])
		return (NULL);
	while (box[i] && box[i] != '\n')
		i++;
	line = gnl_substr(box, 0, i + 1);
	return (line);
}

char	*read_fd(int fd, char *box)
{
	char	*temp_box;
	int		read_bytes;
	char	*tmp;

	temp_box = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!temp_box)
		return (NULL);
	read_bytes = 1;
	while (!gnl_strchr(box, '\n') && read_bytes != 0)
	{
		read_bytes = read(fd, temp_box, BUFFER_SIZE);
		if (read_bytes == -1)
		{
			free(temp_box);
			free(box);
			return (NULL);
		}
		temp_box[read_bytes] = '\0';
		tmp = box;
		box = gnl_strjoin(box, temp_box);
		free(tmp);
	}
	free(temp_box);
	return (box);
}

char	*get_next_line(int fd)
{
	static char	*box;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	box = read_fd(fd, box);
	if (!box)
		return (NULL);
	line = extract_line(box);
	box = clean_box(box);
	return (line);
}
