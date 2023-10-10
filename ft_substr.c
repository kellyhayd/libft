/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha-h <krocha-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:10:21 by krocha-h          #+#    #+#             */
/*   Updated: 2023/10/10 10:55:01 by krocha-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;
	size_t	s_len;

	s_len =  ft_strlen(s);
	if (s_len < start)
		len = 0;
	if ((s_len - start) < len)
		len = s_len - start;
	new = malloc (len * sizeof(char));
	if (!new)
		return (NULL);
	i = 0;
	while (i < len - 1)
	{
		new[i] = s[start + i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
