/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 00:21:32 by rlouvrie          #+#    #+#             */
/*   Updated: 2022/03/29 14:46:21 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_checkbase(char *str)
{
	int	i;
	int	c;

	if (ft_strlen(str) == 0 || ft_strlen(str) == 1)
		return (0);
	i = 0;
	while (str[i])
	{
		c = i + 1;
		if (str[i] == '+' || str[i] == '-' || str[i] == 32)
			return (0);
		while (str[c])
		{
			if (str[i] == str[c])
				return (0);
			c++;
		}
		i++;
	}
	return (1);
}

int	ft_returnnb(char *str, char *base, int count)
{
	int	i;
	int	j;
	int	nb;

	i = 0;
	j = 0;
	nb = 0;
	while (base[j])
	{
		if (str[i] == base[j])
		{
			nb = nb * ft_strlen(base) + j;
			j = 0;
			i++;
		}
		else
			j++;
	}
	if (count % 2 == 0)
		return (nb);
	else
		return (nb * -1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (ft_checkbase(base) == 1)
	{
		while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
			i++;
		while (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				count++;
			i++;
		}
		return (ft_returnnb(&str[i], base, count));
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*base;
	char	*str;

	base = "01234567 89ABCDEF";
	str = "--444";
	printf("%d", ft_atoi_base(str, base));
}*/
