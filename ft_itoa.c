/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha-h <krocha-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:22:23 by krocha-h          #+#    #+#             */
/*   Updated: 2023/11/08 20:22:55 by krocha-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The itoa() function coverts the integer n into a character string */

static size_t	ft_len(int n)
{
	size_t	count;

	count = 0;
	if (n <= 0)
	{
		count = 1;
		n = -n;
	}
	while (n > 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	size_t	size;
	char	*nbr;
	long int	num;

	num = n;
	size = ft_len(n);
	nbr = malloc((size + 1) * sizeof(char));
	ft_bzero(nbr, (size * sizeof(char)));
	if (!nbr)
		return (0);
	nbr[size] = '\0';
	if (num < 0)
	{
		num = -num;
		nbr[0] = '-';
	}
	while (size--)
	{
		nbr[size] = (num % 10) + '0';
		num = num / 10;
	}
	return (nbr);
}
