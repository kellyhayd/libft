/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha-h <krocha-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:26:23 by krocha-h          #+#    #+#             */
/*   Updated: 2023/10/13 12:38:35 by krocha-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Copies n bytes of src to dest */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	while (n)
	{
		*(unsigned char *)dest++ = *(unsigned char *)src++;
		n--;
	}
	return (dest);
}
