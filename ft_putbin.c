/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlievre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 18:46:15 by dlievre           #+#    #+#             */
/*   Updated: 2016/12/14 19:12:25 by dlievre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** affiche en binaire la variable passee, sous 4 0xFFFF ou 8 0xFFFFFFFF octeds
*/

int		ft_putbin(unsigned bin, int octed, int nl)
{
	long mask;
	int n;

	if (!bin || (octed != 4 && octed != 8))
		return (1);
	if (octed == 4)
	{
		mask = 0x8000;
		n = 16;
	}
	if (octed == 8)
	{
		mask = 0x80000000;
		n = 32;
	}

	while (n-- > 0)
	{
		ft_putchar((mask & bin) == mask ? '1' : '0');
	bin = bin << 1;
	}
	if (nl == 1)
		ft_putchar('\n');

	return (0);
}
