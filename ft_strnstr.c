/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 21:47:04 by aben-cha          #+#    #+#             */
/*   Updated: 2023/11/05 15:20:39 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



// if needle is empty return haystack;
// if haystack is empty return NULL
// if(len < str_len(haystack)) return NULL

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    int i = 0;
    int max = 0;
    
    if(haystack == NULL || len < ft_strlen(haystack))
       return (NULL);

    if(needle == NULL)
      return ((char*)haystack); 
    
    max = ft_strlen(haystack) - ft_strlen(needle);
    if(len > max)
    {
        len = max;
    }
    while(haystack[i] && i <= len)
    {
        if(ft_strncmp(haystack + i , needle, ft_strlen(needle)) == 0)
           return ((char *)(haystack + i));
        i++;   
    }
    return NULL;
}
// int main() {
//     const char *haystack = "ayoub";
//     const char *needle = "you";
//     size_t len = 4; // Maximum number of characters to search

//     char *result = ft_strnstr(haystack, needle, len);

//         printf("Substring found: %s\n", result);

//     return 0;
// }