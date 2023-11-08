/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 22:02:21 by aben-cha          #+#    #+#             */
/*   Updated: 2023/11/08 11:45:57 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
size_t ft_strlcat(char *dest, const char *src, size_t dstsize)
{
    size_t len_dest;
    size_t len_src;
    size_t i;
    size_t d;

    i = 0;
    len_dest = ft_strlen(dest);
    len_src = ft_strlen(src);
    d = len_dest;

    if(dstsize <= len_dest)
         return (dstsize + len_src);
    while(src[i] && (d < dstsize - 1))
    {
        dest[d++] = src[i];
        i++;
    }
    dest[d] = '\0';
    return (len_dest + len_src);
}

// int main() {
//     char dest[20] = "bencha";
//     const char *src = "11";

//     size_t result = strlcat(dest, src, 10);

//     printf("Concatenated string: %s\n", dest);
//     printf("Total length: %zu\n", result);

//     return 0;
// }
