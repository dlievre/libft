/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlievre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 18:46:15 by dlievre           #+#    #+#             */
/*   Updated: 2016/12/15 13:39:31 by dlievre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** affiche en binaire la variable passee, sous 2, 4 ou 8 octeds
** 2 octeds = 0xFF, 4 = 0xFFFF ou 8 0xFFFFFFFF octeds
** 2 = 8 bits 0b00000000, 4 = 16 bits 0b0000000000000000, 8 = 32bits
*/

int		ft_putbin(unsigned bin, int octed, int nl)
{
	long mask;
	int nbit;

	if (!bin || (octed != 2 && octed != 4 && octed != 8))
		return (1);
	if (octed == 2)
	{
		mask = 0x8000;
		nbit = 8;
	}
	if (octed == 4)
	{
		mask = 0x80000000;
		nbit = 16;
	}
	if (octed == 8)
	{
		mask = 0x8000000000000000;
		nbit = 32;
	}

	while (nbit-- > 0)
	{
		ft_putchar((mask & bin) == mask ? '1' : '0');
	bin = bin << 1;
	}
	if (nl == 1)
		ft_putchar('\n');

	return (0);
}
