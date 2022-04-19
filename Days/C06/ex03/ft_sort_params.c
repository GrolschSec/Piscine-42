/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:55:03 by rlouvrie          #+#    #+#             */
/*   Updated: 2022/03/23 14:45:59 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_str_swap(char **str1_ptr, char **str2_ptr)
{
	char	*temp;

	temp = *str1_ptr;
	*str1_ptr = *str2_ptr;
	*str2_ptr = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_params(char **str, int argc)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(str[i], str[j]) > 0)
			{
				ft_str_swap(&str[i], &str[j]);
				j++;
			}
			else
				j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	k;

	if (argc > 2)
		ft_sort_params(argv, argc);
	if (argc > 1)
	{
		k = 1;
		while (k <= argc -1)
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
