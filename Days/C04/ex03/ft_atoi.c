/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 22:40:13 by rlouvrie          #+#    #+#             */
/*   Updated: 2022/03/22 16:01:30 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_paire(int count, int nb)
{
	if (count % 2 == 0)
		return (nb);
	else
		return (nb * -1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	int	count;

	i = 0;
	nb = 0;
	count = 0;
	while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			count++;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		nb = nb * 10 + str[i] - 48;
		i++;
	}
	return (ft_paire(count, nb));
}
/*
int	main(void)
{
	char	*str;
	int		nb;

	str = "    ---+--+-dd1pwod333";
	nb = ft_atoi(str);
	printf("%d", nb);
}*/
