/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:05:41 by aben-cha          #+#    #+#             */
/*   Updated: 2023/11/09 21:42:32 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbr_strings(const char *s, char c)
{
	int	len;

	len = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			len++;
		while (*s && *s != c)
			s++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**ptr;
	int		size;

	if (s == NULL)
		return (0);
	size = nbr_strings(s, c);
	ptr = (char **)malloc(sizeof(char *) * (size + 1));
	if (ptr == NULL)
		return (0);
	j = 0;
	while (j < size)
	{
		while (*s != '\0' && *s == c)
			s++;
		i = 0;
		while (s[i] != '\0' && s[i] != c)
			i++;
		ptr[j] = ft_substr(s, 0, i);
		if (!ptr[j])
		{
			while (j > 0)
			{
				j--;
				free(ptr[j]);
			}
			free(ptr);
			return (0);
		}
		s = s + i;
		j++;
	}
	ptr[j] = 0;
	return (ptr);
}
