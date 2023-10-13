/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha-h <krocha-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 17:31:18 by krocha-h          #+#    #+#             */
/*   Updated: 2023/10/13 12:39:08 by krocha-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Converts string to an integer */

int	ft_atoi(const char *str)
{
	int	i;
	int	n;
	int	result;

	i = 0;
	n = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * n);
}

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
// 	char	*str1 = "1568";
// 	char	*str2 = "       -+4631";
// 	char	*str3 = "       -15356";
// 	char	*str4 = " 			+1234";
// 	char	*str5 = "	 /n --4397";

// 	printf("%d\n", ft_atoi(str1));
// 	printf("%d\n", atoi(str1));
// 	printf("%d\n", ft_atoi(str2));
// 	printf("%d\n", atoi(str2));
// 	printf("%d\n", ft_atoi(str3));
// 	printf("%d\n", atoi(str3));
// 	printf("%d\n", ft_atoi(str4));
// 	printf("%d\n", atoi(str4));
// 	printf("%d\n", ft_atoi(str5));
// 	printf("%d\n", atoi(str5));
// 	return 0;
// }
