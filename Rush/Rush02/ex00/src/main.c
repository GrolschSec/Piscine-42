/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 21:38:13 by ilinhard          #+#    #+#             */
/*   Updated: 2022/03/27 22:19:32 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include "ft.h"

int	ft_error(int error)
{
	if (error == 1)
	{
		write(1, "Error argc\n", 11);
		return (-1);
	}
	if (error == -1)
	{
		write(1, "Error\n", 6);
		return (-1);
	}
	else
		return (-1);
}

int	main(int argc, char **argv)
{
	long int	nb;
	long int	power;
	char		**tab;

	tab = NULL;
	if (ft_check_number_of_inputs(argc) != 1)
		return (ft_error(1));
	nb = ft_atoi(argv[1]);
	if (nb == -1)
		return (ft_error(-1));
	tab = ft_parsing("numbers.dict", tab);
	if (tab == NULL)
	{
		write(1, "Error Dict\n", 11);
		return (-1);
	}
	power = ft_power((unsigned int)nb);
	result((unsigned)nb, tab, power);
	free(tab);
	write(1, "\n", 1);
	return (0);
}
