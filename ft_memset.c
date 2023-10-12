/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha-h <krocha-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:15:41 by krocha-h          #+#    #+#             */
/*   Updated: 2023/10/11 13:59:35 by krocha-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*cast;

	cast = (unsigned char *)s;
	while (n--)
	{
		cast[n] = (unsigned char)c;
	}
	return (s);
}

// int main(void)
// {
// 	char *s = "aaaaa";
// 	s = malloc (sizeof(char) * 5);
// 	teste(s, '0', 5);
// 	printf("%s\n", s);
// }
