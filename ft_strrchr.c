/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha-h <krocha-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:25:34 by krocha-h          #+#    #+#             */
/*   Updated: 2023/10/13 12:59:22 by krocha-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Locates the last occurrence of c in string s */

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s) - 1;
	while (len >= 0)
	{
		if (s[len] == (unsigned char)c)
			return ((char *)s);
		len--;
	}
	if (c == 0)
		return ((char *)s);
	return (NULL);
}
