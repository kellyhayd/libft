/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha-h <krocha-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:03:17 by krocha-h          #+#    #+#             */
/*   Updated: 2023/10/13 12:39:03 by krocha-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Reserves storage space for an array of num elements, each of size size,
and initializes the values of all elements to 0 */

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*dst;
	size_t	total_size;

	total_size = nmemb * size;
	dst = malloc(total_size);
	if (dst == NULL)
		return (NULL);
	ft_bzero(dst, total_size);
	return (dst);
}
