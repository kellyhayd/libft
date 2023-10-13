/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha-h <krocha-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:53:30 by krocha-h          #+#    #+#             */
/*   Updated: 2023/10/13 12:54:17 by krocha-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Appends the NUL-terminated string src to the end of dst. It will append 1 byte
at most size strlen(dst), NUL-terminating the result. Return the total
length of the string it tried to create*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d;
	size_t	i;

	d = ft_strlen(dst);
	if (d >= size)
		return (size + ft_strlen(src));
	i = 0;
	while (d < size - 1 && src[i])
	{
		dst[d + i] = src[i];
		i++;
	}
	dst[d + i] = '\0';
	return (d + ft_strlen(src));
}
