/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 18:12:06 by rlouvrie          #+#    #+#             */
/*   Updated: 2022/03/14 22:55:00 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_c_is_alphanum(char c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (0);
	else if (c > 47 && c < 58)
		return (0);
	else
		return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_c_is_alphanum(str[i -1]) == 1)
		{
			if (str[i] > 96 && str[i] < 123)
				str[i] -= 32;
		}
		else if (str[i] > 64 && str[i] < 91)
			str[i] += 32;
		i++;
	}
	return (str);
}
