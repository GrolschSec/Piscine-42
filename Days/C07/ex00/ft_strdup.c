/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 01:43:10 by rlouvrie          #+#    #+#             */
/*   Updated: 2022/03/29 18:07:05 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*tab;
	int		l;
	int		i;

	i = 0;
	l = ft_strlen(src);
	tab = (char *) malloc((l + 1) * sizeof(*tab));
	if (tab == NULL)
		return (NULL);
	while (src[i])
	{
		tab[i] = src[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str;
	char	*dest;

	str = "Hello world";
	dest = ft_strdup(str);
	printf("%p\n", dest);
	printf("%s\n", dest);
	free(dest);
	dest = NULL;
	printf("%p\n", dest);
}*/
