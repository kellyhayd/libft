/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha-h <krocha-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:22:23 by krocha-h          #+#    #+#             */
/*   Updated: 2023/10/13 12:38:47 by krocha-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The itoa() function coverts the integer n into a character string */

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*cast;

	cast = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		cast[i] = 0;
		i++;
	}
	s = (void *)cast;
}

int	ft_len(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*nbr;
	int		i;

	i = n;
	size = ft_len(n);
	nbr = malloc(size * sizeof(char));
	if (!nbr)
		return (0);
	ft_bzero(nbr, (ft_len(n) * sizeof(char)));
	nbr[size] = '\0';
	while (size-- > 0)
	{
		if (n < 0)
			n = -n;
		nbr[size] = (n % 10) + '0';
		n = n / 10;
	}
	if (i < 0)
	{
		nbr[0] = '-';
	}
	return (nbr);
}

// #include <stdio.h>

// int main() {
// 	printf("%s\n", ft_itoa(-42));
// 	printf("%s\n", ft_itoa(2568));
// 	return (0);
// }
