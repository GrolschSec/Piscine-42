/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:37:36 by rlouvrie          #+#    #+#             */
/*   Updated: 2022/03/16 02:11:11 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		i;
	char	s;

	i = 0;
	while (str[i] != '\0')
	{
		s = str[i];
		if (!((s > 64 && s < 91) || (s > 96 && s < 123)))
			return (0);
		i++;
	}
	return (1);
}