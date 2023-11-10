/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:05:41 by aben-cha          #+#    #+#             */
/*   Updated: 2023/11/10 21:29:25 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int    nbr_strings(const char *s, char c)
{
    int    len;

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

static void free_memory(char **ptr, int j)
{
    while (j > 0)
        free(ptr[--j]);
    free(ptr);
}

static char **loading(char const *s, char c, int size, int j)
{
    int i;
    char **ptr;
    
    ptr = (char **)malloc(sizeof(char *) * (size + 1));
    if (!ptr)
        return (0);
    while (j < size) {
        while (*s != '\0' && *s == c)
            s++;
        i = 0;
        while (s[i] != '\0' && s[i] != c)
            i++;
        ptr[j] = ft_substr(s, 0, i);
        if (!ptr[j])
        {
            free_memory(ptr, j);
            return (0);
        }
        s += i;
        j++;
    }
    ptr[j] = (0);
    return ptr;
}

char **ft_split(char const *s, char c)
{
    int j;
    int size;
    if (!s)
        return NULL;
    j = 0;
    size = nbr_strings(s, c);
    char **ptr = loading(s, c, size, j);
    
    return ptr;
}
