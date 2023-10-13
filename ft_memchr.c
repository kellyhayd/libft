/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha-h <krocha-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:30:09 by krocha-h          #+#    #+#             */
/*   Updated: 2023/10/13 12:38:39 by krocha-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Searches the first n bytes of s for the first occurrence
of c converted to an unsigned character */

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)s;
	while (n)
	{
		if (*tmp == (char)c)
			return (tmp);
		n--;
	}
	if (c == 0)
		return (NULL);
	return (NULL);
}
