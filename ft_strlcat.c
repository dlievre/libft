/* ************************************************************************** */
/*                                                                           */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlievre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 10:55:31 by dlievre           #+#    #+#             */
/*   Updated: 2016/11/18 15:09:12 by dlievre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ** functions append a copy of the null-terminated string s2*/
/*   to the end of the null-terminated string s1, then add a terminating `\0'*/
/*   The string  s1 must have sufficient space to hold the result.*/

#include <string.h>
#include <stdlib.h>

int		ft_strlen(char *str);
void	ft_putstr(char const *s);
void	ft_putnbr(int nb);
void	ft_putchar(char c);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
	/*size_t  ft_strlcat(char *dest, const char *src, size_t count)
	  {
	  unsigned int    i;
	  int             res;
	  unsigned int    dest_len;
	  i = 0;
	  while (dest[i] && i < count)
	  i++;
	  dest_len = i;
	  while (src[i - dest_len] && i < count - 1)
	  {
	  dest[i] = src[i - dest_len];
	  i++;
	  }
	  if (dest_len < count)
	  dest[i] = '\0';
	  res = ft_strlen((char *)src);
	  return (dest_len + ft_strlen((char *)src));
	  }
	  */
{
	size_t	pos;
	int debug = 0;

	if (!*src)
		return (0);
	if (size - ft_strlen(dst) > 0)
	{
		pos = 1;
		while (*dst)
		{
			if (debug == 1) ft_putchar(*dst);
			dst++;
			pos++;
		}
		while ( pos < size  && *src)
		{
			*dst = *src;
			if (debug == 1) ft_putchar(*dst);
			dst++;
			src++;
			pos++;
		}
		*dst = '\0';
		return (pos);
	}
	else
	{
		return (0);
	}
}


int		main(void)
{
	char	dst[7];
	const	char	*src;
	size_t	size;

	src = "";

	size = 7;

	dst[0] = 'a';
	dst[1] = 'b';
	dst[2] = '\0';

	ft_putnbr(ft_strlen(dst));
	ft_putchar('\n');
	ft_putnbr(ft_strlen((char *)src));
	ft_putstr("\ns1s2 ");
	ft_putnbr(ft_strlcat(dst, (const char *)src, size));

	return (0);
}
