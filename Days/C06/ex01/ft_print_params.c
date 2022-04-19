/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 14:56:24 by rlouvrie          #+#    #+#             */
/*   Updated: 2022/03/17 18:55:41 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	k;

	if (argc > 1)
	{
		k = 1;
		while (k <= argc - 1)
		{
			i = 0;
			while (argv[k][i])
			{
				write(1, &argv[k][i], 1);
				i++;
			}
			k++;
			write(1, "\n", 1);
		}
	}
	return (0);
}
