/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 16:29:20 by rlouvrie          #+#    #+#             */
/*   Updated: 2022/03/29 20:01:26 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

int	ft_ultimate_range(int	**range, int min, int max)
{
	int	size;
	int	i;

	size = max - min;
	if (size <= 0)
	{
		range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(**range) * size);
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < size)
		range[0][i++] = min++;
	return (size);
}
/*
#include <stdio.h>
int	main(void)
{
	int	min;
	int	max;
	int	*tab[1];
	int	ret;
	int	i;

	min = -122;
	max = 12;
	ret = ft_ultimate_range(tab, min, max);
	i = 0;
	while (i < max - min)
		printf("%d ", tab[0][i++]);
}*/
