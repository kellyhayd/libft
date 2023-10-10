/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha-h <krocha-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:22:23 by krocha-h          #+#    #+#             */
/*   Updated: 2023/10/10 16:00:50 by krocha-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	int		i;
	char	*nbr;

	nbr = malloc (ft_len(n) * sizeof(char));
	if (!nbr)
		return (0);
	i = 0;
	if (n < 0)
	{
		nbr[i] = '-';
		n = -n;
		i++;
	}
	if (n < 10)
	{
		nbr[i] = 48 + (n);
	}
	if (n > 9)
	{
		ft_itoa(n / 10);
		ft_itoa(n % 10);
	}
	return (nbr);
}

#include <stdio.h>

int main() {
	// printf("%s\n", ft_itoa(42));
	printf("%s\n", ft_itoa(-42));
	printf("%s\n", ft_itoa(2568));
	return (0);
}
