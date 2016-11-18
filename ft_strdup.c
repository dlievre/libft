/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlievre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 09:32:04 by dlievre           #+#    #+#             */
/*   Updated: 2016/11/15 16:51:20 by dlievre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);

char	*ft_strdup(char *src)
{
	char	*s1bis;
	int		i;

	s1bis = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (s1bis == NULL)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (*src != '\0')
		{
			s1bis[i++] = *src;
			src++;
		}
		s1bis[i] = '\0';
		return (s1bis);
	}
}
