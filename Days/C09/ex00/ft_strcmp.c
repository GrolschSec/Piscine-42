/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 18:24:13 by rlouvrie          #+#    #+#             */
/*   Updated: 2022/03/19 21:13:30 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/*int	main(void)
{
	char	*str1;
	char	*str2;
	int		ret;

	str1 = "Hello";
	str2 = "HelloWorld";
	printf("%d", ft_strcmp(str1, str2));
}*/
