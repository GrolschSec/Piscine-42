/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 03:07:39 by rlouvrie          #+#    #+#             */
/*   Updated: 2022/03/29 20:05:42 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	size;
	int	i;

	size = max - min;
	if (size <= 0)
		return (NULL);
	tab = (int *)malloc(sizeof(*tab) * size);
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
/*
int	main(void)
{
	int	*tab;
	int	size;
	int	i;
	int	min;
	int	max;

	max = -100;
	min = -100;
	tab = ft_range(min, max);
	printf("%p", ft_range(min, max));
	size = max - min;
	i = 0;
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}*/
