/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha-h <krocha-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:18:21 by krocha-h          #+#    #+#             */
/*   Updated: 2023/10/13 12:53:39 by krocha-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Copies up to size - 1 characters from the NUL-terminated string src to dst,
NUL-terminating the result. Return the total length of the string it tried to create*/

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (src == NULL)
		return (0);
	i = 0;
	while (src[i])
		i++;
	if (size == 0)
		return (i);
	i = 0;
	while (src[i] && i < size)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (i);
}
