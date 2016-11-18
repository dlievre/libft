/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlievre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 14:58:30 by dlievre           #+#    #+#             */
/*   Updated: 2016/11/18 15:11:10 by dlievre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** functions append a copy of the null-terminated string s2
 to the end of the null-terminated string s1, and then adds a terminating `\0'
 The string  s1 must have sufficient space to hold the result.*/

char	*ft_strcat(char *s1, const char *s2)
{
	char	*ps1s2;

	ps1s2 = s1;
	while (*s1)
	{
		s1++;
	}
	while (*s2)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
	return (ps1s2);
}
