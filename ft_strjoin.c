/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:21:00 by aben-cha          #+#    #+#             */
/*   Updated: 2023/11/03 22:39:37 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t i;
    size_t size;
    char *ptr;

    i = 0;
    size = ft_strlen(s1) + ft_strlen(s2);
    ptr = (char *)malloc(sizeof(char) * (size + 1));
    if (ptr == NULL)
      return (NULL);
    while(i < ft_strlen(s1))
    {
        ptr[i] = s1[i];
        i++;
    }
    int j = 0;
    while(i < size)
    {
        ptr[i] = s2[j++];
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}
