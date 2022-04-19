/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 20:31:02 by ilinhard          #+#    #+#             */
/*   Updated: 2022/03/27 21:03:39 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long long unsigned int	ft_sort_atoi(char *str);

void	ft_swap(char **s1, char **s2)
{
	char	*tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

void	ft_sort_tab(char **tab, int tab_size)
{
	int	i;
	int	j;

	i = 0;
	j = tab_size;
	while (i < tab_size)
	{
		while (j > i)
		{
			if (ft_sort_atoi(tab[i]) > ft_sort_atoi(tab[j]))
				ft_swap(&tab[i], &tab[j]);
			j--;
		}
		i++;
		j = tab_size;
	}
}
