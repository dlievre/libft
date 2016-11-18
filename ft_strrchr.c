/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlievre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 15:20:08 by dlievre           #+#    #+#             */
/*   Updated: 2016/11/18 17:15:01 by dlievre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/* ** La fonction strrchr() renvoie un pointeur sur  la derniere*/
/*        occurence du caractère c dans la chaîne s.*/
/* ************************************************************************** */

#include <string.h>

void	ft_putchar(char c);
size_t	ft_strlen(const char *s);
void	ft_putnbr(int n);

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (*(s + len) == c)
			return ((char *)(s + len));
		len--;
	}
	return (NULL);
}
