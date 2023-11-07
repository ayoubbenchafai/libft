/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:49:11 by aben-cha          #+#    #+#             */
/*   Updated: 2023/11/07 12:59:13 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int len_char(char const *s, char c)
{
    int len;

    len = 0;
    while(*s != '\0' && *s != c)
       len++;
    return (len);   
}

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

char **ft_split(char const *s, char c)
{
    int i;
    int j;
    char **ptr;
    int size = nbr_strings(s, c);
    ptr = (char**)malloc(sizeof(char*) * (size + 1));
    if(ptr == NULL)
        return (NULL);

    // int i = 0;
    // while(*s != '\0' && *s == c)
    //     s++;
    
    j = 0;
    while(j < size)
    {
        while(*s != '\0' && *s == c)
            s++;
        i = 0;
        while(s[i] != '\0' && s[i] != c)
            i++;
        ptr[j] = ft_substr(s, 0, i);
        if(ptr[j] == NULL)
        {
             free(ptr[j]);
           free(ptr);
        }
        s = s + i;
        j++;
    }
    ptr[j] = '\0';
    return (ptr);
    
}




// char **malloc2d(int i,int j)
// {
//     char **ptr;

//     ptr = (char**)malloc(sizeof(char*) * i);

//     int c =0;
//     while(c < j)
//         {
//             ptr[c] = (char*)malloc(sizeof(char) * j);
//             c++;
//         }
//     return (ptr);
// }
// int the main it must free the ptr  free(ptr);