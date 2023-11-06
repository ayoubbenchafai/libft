/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:49:11 by aben-cha          #+#    #+#             */
/*   Updated: 2023/11/05 17:20:17 by aben-cha         ###   ########.fr       */
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
    int i = 0;
    
    char **ptr;

    ptr = (char**)malloc(sizeof(char*) * nbr_strings(s,c));
    if(ptr == NULL)
       return (NULL);

    // while(i < len_char(s, c) )
    // {
    //     ptr[i] = (char*)malloc(sizeof(char) * nbr_strings(s, c));
    //     i++;
    // }
    
    i = 0;
    int j = 0;
    int k;
    while(i < nbr_strings(s,c) && s[i] != '\0')
    {
        if(s[i] == c)
          j = k;
        ptr[i] = ft_substr(s, j + 1, nbr_strings(s + i,c));
        i++;
        j++; 
    }   
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