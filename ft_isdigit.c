/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha-h <krocha-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 12:33:14 by krocha-h          #+#    #+#             */
/*   Updated: 2023/10/11 13:59:20 by krocha-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

// #include <stdio.h>
// #include <ctype.h>

// int	main() {
// 	int	a = '8';
// 	int	b = '6';
// 	int	c = '5';
// 	int	d = 'a';

// 	printf("%d, ", ft_isdigit(a));
// 	printf("%d\n", isdigit(a));
// 	printf("%d, ", ft_isdigit(b));
// 	printf("%d\n", isdigit(b));
// 	printf("%d, ", ft_isdigit(c));
// 	printf("%d\n", isdigit(c));
// 	printf("%d, ", ft_isdigit(d));
// 	printf("%d\n", isdigit(d));
// }
