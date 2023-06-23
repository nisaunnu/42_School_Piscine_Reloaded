/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nunnu <nunnu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 08:40:48 by nunnu             #+#    #+#             */
/*   Updated: 2023/06/21 16:10:46 by nunnu            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_display_file(char *file_name)
{
	char	buffer[2];
	int		read_byte;
	int		fd;

	read_byte = 1;
	fd = open(file_name, O_RDONLY);
	while (read_byte != 0)
	{
		read_byte = read(fd, buffer, 1);
		if (read_byte == -1)
		{
			write(1, "Cannot read file.\n", 18);
			return ;
		}
		buffer[read_byte] = '\0';
		write(1, buffer, read_byte);
	}
	close(fd);
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
		write(1, "File name missing.\n", 19);
	else if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	else
		ft_display_file(argv[1]);
	return (0);
}
