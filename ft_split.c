/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:49:11 by aben-cha          #+#    #+#             */
/*   Updated: 2023/11/09 16:33:23 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int nbr_strings(char const *s, char c)
{
    int len,i;

    len  = 0;
    i  = 0;

    if(s[0] == '\0')
         return (0);
    if(s[0] != c)
        len++;
    i = 1;
    while(s[i] != '\0')
    {
        if(s[i - 1] == c && s[i] != c)
            len++;
        i++;
    }
    return (len);
}
int nbstr(const char *s, char c)
{
    int len;

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
char **ft_split(char const *s, char c)
{
    int i;
    int j;
    char **ptr;

    if (!s)
        return 0;
    int size = nbstr(s, c);
    ptr = (char**)malloc(sizeof(char*) * (size + 1));
    if(ptr == NULL)
        return (NULL);

    
    j = 0;
    while(j < size)
    {
        while(*s != '\0' && *s == c)
            s++;
        i = 0;
        while(s[i] != '\0' && s[i] != c)
            i++;
        ptr[j] = ft_substr(s, 0, i);
        if(!ptr[j])
        {
            while(j > 0)
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