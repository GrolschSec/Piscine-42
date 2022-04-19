/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 18:45:45 by rlouvrie          #+#    #+#             */
/*   Updated: 2022/03/11 11:50:17 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	nombre;

	nombre = nb;
	if (nombre >= 0 && nombre < 10)
	{
		ft_putchar(nombre + 48);
	}
	else if (nombre < 0)
	{
		ft_putchar('-');
		ft_putnbr(nombre * (-1));
	}
	else
	{
		ft_putnbr(nombre / 10);
		ft_putnbr(nombre % 10);
	}
}

void	ft_display(char a, char b)
{
	if (a >= 0 && a < 10)
	{
		ft_putchar('0');
		ft_putnbr(a);
	}
	else
		ft_putnbr(a);
	ft_putchar(' ');
	if (b >= 0 && b < 10)
	{
		ft_putchar('0');
		ft_putnbr(b);
	}
	else
		ft_putnbr(b);
	if (a != 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a < 99)
	{
		ft_display(a, b);
		if (b == 99)
		{
			a++;
			b = a + 1;
		}
		else
			b++;
	}
}
