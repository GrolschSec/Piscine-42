/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolution.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 20:22:59 by ilinhard          #+#    #+#             */
/*   Updated: 2022/03/27 21:54:01 by ilinhard         ###   ########.fr       */
/*   Updated: 2022/03/26 23:09:42 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_power(unsigned int nb)
{
	int	power;

	power = 0;
	while (nb > 999)
	{
		nb = nb / 1000;
		power++;
	}
	return (power);
}

unsigned int	ft_get_number(unsigned int nb, int power)
{
	unsigned int	res;

	res = 1;
	while (power > 0)
	{
		res = res * nb;
		power--;
	}
	return (res);
}

void	ft_print(char *str)
{
	int	i;

	i = 0;
	while (!(str[i] >= 'a' && str[i] <= 'z'))
		i++;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			write(1, &str[i], 1);
		if (str[i] == ' ' && str[i + 1] != ' ')
			write(1, " ", 1);
		i++;
	}
	write(1, " ", 1);
}

void	result(unsigned int nb, char **tab, int power)
{
	unsigned int	nb_res;

	if (power < 0)
		return ;
	if (nb == 0 && power != 0)
		ft_print(tab[0]);
	nb_res = nb / ft_get_number(1000, power);
	if (nb_res == 0)
		return (result(nb % ft_get_number(1000, power), tab, power - 1));
	if (nb_res / 100 > 0)
	{
		ft_print(tab[nb_res / 100]);
		ft_print(tab[28]);
		nb_res = nb_res % 100;
	}
	if (nb_res < 20 && nb_res != 0)
		ft_print(tab[nb_res]);
	if (nb_res >= 20)
	{
		ft_print(tab[18 + nb_res / 10]);
		ft_print(tab[nb_res % 10]);
	}
	if (power > 0)
		ft_print(tab[28 + power]);
	return (result(nb % ft_get_number(1000, power), tab, power - 1));
}
