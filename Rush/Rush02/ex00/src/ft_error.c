/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 20:39:53 by ilinhard          #+#    #+#             */
/*   Updated: 2022/03/26 22:43:24 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_check_number_of_inputs(int number_of_inputs)
{
	if (number_of_inputs == 2)
	{
		return (1);
	}
	else if (number_of_inputs == 3)
	{
		return (-1);
	}
	else
	{
		return (-1);
	}
}

long int	ft_atoi(char *inputs)
{
	int			i;
	long int	nb;

	i = 0;
	nb = 0;
	while (inputs[i] != '\0')
	{
		if (!(inputs[i] >= 48 && inputs[i] <= 57))
			return (-1);
		i++;
	}
	i = 0;
	while (inputs[i] != '\0')
	{
		nb = (nb * 10) + (inputs[i] - 48);
		i++;
	}
	if (nb < 4294967295)
		return (nb);
	else
		return (-1);
}
