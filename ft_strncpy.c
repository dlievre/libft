/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlievre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 16:02:30 by dlievre           #+#    #+#             */
/*   Updated: 2016/11/16 17:45:39 by dlievre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;
	char	*ptdst;

	i = 0;
	ptdst = dst;
	while (*src && i < len)
	{
		*dst = *src;
		src++;
		dst++;
		i++;
	}
	while (i < len)
	{
		*dst = '\0';
		dst++;
		i++;
	}
	return (ptdst);
}
