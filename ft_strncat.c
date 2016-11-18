/* ************************************************************************** */
/*t                                                                           */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlievre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 10:55:31 by dlievre           #+#    #+#             */
/*   Updated: 2016/11/18 15:08:05 by dlievre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*ps1;
	size_t	i;

	ps1 = s1;
	while (*s1)
	{
		s1++;
	}
	i = 0;
	while (*s2 && i < n)
	{
		*s1 = *s2;
		s1++;
		s2++;
		i++;
	}
	*s1 = '\0';
	return (ps1);
}
/* ** functions append a copy of the null-terminated string s2
 to the end of the null-terminated string s1, function appends not more than
 characters from s2, and then adds a terminating `\0'
 The string  s1 must have sufficient space to hold the result.*/
