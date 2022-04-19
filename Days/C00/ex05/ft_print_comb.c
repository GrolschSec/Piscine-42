/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 22:51:16 by rlouvrie          #+#    #+#             */
/*   Updated: 2022/03/11 11:14:48 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_display(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (a != 55)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = 48;
	b = 49;
	c = 50;
	while (a < 56)
	{
		ft_display(a, b, c);
		if (c >= 57)
		{
			b++;
			c = b + 1;
		}
		else
			c++;
		if (b >= 57)
		{
			a++;
			b = a + 1;
			c = b + 1;
		}
	}
}
