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
#include <stdio.h>

static int	ft_strcount(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s == c)
			count++;
		s++;
	}
	return (count);
}

// char	**ft_split(const char *s, char c)
// {
// 	char *buffer;
// 	char **result;
// 	int		count;
// 	int		j;
	
// 	// if (s == 0 || s[0] == 0)
// 	// 	return (NULL);
// 	buffer = ft_strdup(s);
// 	if (!buffer)
// 		return (NULL);
// 	count = ft_strcount(s, c);
// 	result = malloc(( count + 1) * sizeof(char *));
// 	if (!result)
// 		return (NULL);
// 	j = 1;
// 	result[0] = &buffer[0];
// 	while (*buffer)
// 	{
// 		if (*buffer == c)
// 		{
// 			*buffer = '\0';
// 			result[j++] = (buffer + 1);
// 		}
// 		buffer++;
// 	}
// 	result[j] = NULL;
// 	return (result);
// }

char	**ft_split(const char *s, char c)
{
	char **result;
	char	*cast;
	int		count;
	int		j;
	
	// if (s == 0 || s[0] == 0)
	// 	return (NULL);
	cast = (char *)s;
	result = ft_strdup(s);
	count = ft_strcount(s, c);
	result = malloc(( count + 1) * sizeof(char *));
	if (!s || !result)
		return (NULL);
	j = 1;
	result[0] = &cast[0];
	while (*cast)
	{
		if (*cast == c)
		{
			*cast = '\0';
			result[j++] = (cast + 1);
		}
		cast++;
	}
	result[j] = NULL;
	return (result);
}

char	*ft_strdup(const char *s)
{
	int		i;
	int		size;
	char	*dest;

	size = ft_strlen(s) + 1;
	dest = malloc(size * sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

size_t	ft_strlen(const char *s)
{
	int	size;

	size = 0;
	while (s[size] != '\0')
		size++;
	return (size);
}

int main(){
	const char *str1 = "Hello,World,Split,Me";
	char **split_array1 = ft_split(str1, ',');
	printf("%s\n", &split_array1);

	const char *str2 = "Lorem ipsum dolor sit amet";
	char **split_array2 = ft_split(str2, ' ');

	const char *str3 = "apple,banana,cherry,orange";
	char **split_array3 = ft_split(str3, ',');

	const char *str4 = "123-456-789-0";
	char **split_array4 = ft_split(str4, '-');
}