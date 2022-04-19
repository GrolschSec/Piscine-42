/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:19:56 by rlouvrie          #+#    #+#             */
/*   Updated: 2022/03/29 18:05:51 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_checksize(int size, char **strs, char *sep)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
		j += ft_strlen(strs[i++]);
	j += (size - 1) * ft_strlen(sep);
	return (j);
}

char	*ft_fillstr(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	str = (char *)malloc(sizeof(*str) * (ft_checksize(size, strs, sep) + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			str[k++] = strs[i][j++];
		if (i != size -1)
		{
			j = 0;
			while (sep[j])
				str[k++] = sep[j++];
		}
		i++;
	}
	str[k] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;

	if (size == 0)
	{
		str = (char *)malloc(sizeof(*str));
		*str = '\0';
		return (str);
	}
	else
	{
		str = ft_fillstr(size, strs, sep);
		return (str);
	}
}
/*
#include <stdio.h>

int	main(void)
{
	char	*strs[3];
	char	*sep;

	strs[0] = "Hi ";
	strs[1] = "My name is Romain. ";
	strs[2] = "It's a pleasure to meet you !";
	sep = ":";
	printf("%s\n", ft_strjoin(3, strs, sep));
	//printf("%p", ft_fillstr(0, strs, sep));
}*/
