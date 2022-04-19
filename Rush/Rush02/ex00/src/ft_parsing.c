/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 14:40:48 by ilinhard          #+#    #+#             */
/*   Updated: 2022/03/27 21:33:16 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#define BUFF_SIZE 4096

long long unsigned int	ft_sort_atoi(char *str)
{
	long long unsigned int	nb;
	int						i;

	i = 0;
	nb = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return (nb);
}

void	ft_add_to_tab(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\n')
	{
		dest[i] = src[i];
		i++;
	}
}

int	ft_fill_tab(char **tab, int ret, char *buff)
{
	int	i;
	int	j;
	int	line;

	i = 0;
	line = 0;
	while (i < ret)
	{
		j = 0;
		while (buff[i + j] != '\n')
			j++;
		if (buff[i + j] == '\n')
		{
			tab[line] = (char *)malloc(sizeof(char) * (j + 1));
			if (buff[i] >= '0' && buff[i] <= '9')
			{
				ft_add_to_tab(tab[line], &buff[i]);
				line++;
			}
		}
		i = i + j;
		i++;
	}
	return (line);
}

char	**ft_parsing(char *file_name, char **tab)
{
	int		file;
	int		ret;
	int		i;
	int		j;
	char	*buff;

	i = 0;
	j = 0;
	buff = (char *)malloc(sizeof(char) * BUFF_SIZE);
	file = open(file_name, O_RDONLY);
	if (file == -1)
		return (NULL);
	ret = read(file, buff, BUFF_SIZE);
	while (j <= ret)
	{
		if (buff[j] == '\n')
			i++;
		j++;
	}
	tab = (char **)malloc(sizeof(char *) * (i + 1));
	i = ft_fill_tab(tab, ret, buff);
	ft_sort_tab(tab, i - 1);
	free(buff);
	close(file);
	return (tab);
}
