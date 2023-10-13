/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha-h <krocha-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:58:11 by krocha-h          #+#    #+#             */
/*   Updated: 2023/10/10 13:58:43 by krocha-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strcount(const char *s, char c)
{
	int	count;

	while (*s)
	{
		if (*s == c)
			count++;
		s++;
	}
	return (count);
}

char	**ft_split(const char *s, char c)
{
	char *buffer;
	char **result;
	int		count;
	int		j;
	
	buffer = ft_strdup(s);
	if (!buffer)
		return (NULL);
	count = ft_strcount(s, c) + 1;
	result = malloc(count * sizeof(char *));
	if (!result)
		return (NULL);
	j = 1;
	result[0] = &buffer[0];
	while (*buffer)
	{
		if (*buffer == c)
			result[j++] = (buffer + 1);
		buffer++;
	}
	result[j] = NULL;
	return (result);
}
