/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 19:51:14 by rlouvrie          #+#    #+#             */
/*   Updated: 2022/03/29 14:45:40 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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
		if (str[i] == '+' || str[i] == '-')
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

void	ft_putnbr_base(int nbr, char *base)
{
	long int	nb;

	nb = nbr;
	if (ft_checkbase(base) == 1)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb >= 0 && nb < ft_strlen(base))
			ft_putchar(base[nb]);
		if (nb >= ft_strlen(base))
		{
			ft_putnbr_base(nb / ft_strlen(base), base);
			ft_putnbr_base(nb % ft_strlen(base), base);
		}
	}
}
/*
int	main(void)
{
	char	*base;

	base = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	ft_putnbr_base(-21, base);
}*/
