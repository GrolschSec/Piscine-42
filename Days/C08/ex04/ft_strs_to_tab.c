/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 01:43:10 by rlouvrie          #+#    #+#             */
/*   Updated: 2022/03/30 20:34:12 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*tab;
	int		l;
	int		i;

	i = 0;
	l = ft_strlen(src);
	tab = (char *) malloc((l + 1) * sizeof(*tab));
	if (tab == NULL)
		return (NULL);
	while (src[i])
	{
		tab[i] = src[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*str;
	int			i;

	str = malloc(sizeof(*str) * (ac + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		str[i].size = ft_strlen(av[i]);
		str[i].str = av[i];
		str[i].copy = ft_strdup(av[i]);
		i++;
	}
	str[i].size = 0;
	str[i].str = 0;
	str[i].copy = 0;
	return (str);
}
/*
int	main(int argc, char **argv)
{
	ft_strs_to_tab(argc, argv);
	return (0);
}*/
