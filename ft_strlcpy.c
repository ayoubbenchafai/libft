/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:29:02 by aben-cha          #+#    #+#             */
/*   Updated: 2023/11/04 18:20:26 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

// size_t ft_strlcpy(char *dest, const char *src, size_t size)
// {
//     size_t i;
//     size_t j;
    
//     i = 0;
//     j = 0;
//     while(src[i])
//     {
//         if(i < size - 1)
//         {
//             dest[j] = src[i];
//             j++;
//         }
//         i++;
//     }
//     dest[j] = '\0';
//     return (i);
// }

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t i;
    size_t j;
    

    i = 0;
    j = 0;
    while(*src)
    {
        if(j < size -1)
        {
            dest[i] = *src;
            i++;
        }
        src++;
        j++;
    }
    dest[i] = '\0'; 
    return (j);
}
// int main() {
//     char dest[45];
//     printf("%lu\n",strlcpy(dest, "lorem ipsum dolor sit amet", 0));
//     printf("dest = %s",dest);
//     printf("////");
//     return 0;
// }