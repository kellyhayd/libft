/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha-h <krocha-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:58:40 by krocha-h          #+#    #+#             */
/*   Updated: 2023/10/11 15:04:24 by krocha-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (*s && *f)
	{
		while (*s)
			f(i++, s++);
	}
}

// #include <ctype.h>
// #include <stdio.h>

// void uppercase(unsigned int index, char *ch)
// {
//     *ch = toupper(*ch);
// }

//  int main () {
// 	char str[] = "hello";
// 	ft_striteri(str, uppercase);
// 	printf("%s\n", str);
// 	return 0;
// }
