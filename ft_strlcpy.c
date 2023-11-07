/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:29:02 by aben-cha          #+#    #+#             */
/*   Updated: 2023/11/07 14:58:16 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t i;
    size_t len_src;

    i =0;
    len_src = ft_strlen(src);
    if(size == 0)
      return (len_src);
    while(i < size -1 && src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(len_src);
}
// int main() {
//     char dest[45];
//     printf("%lu\n",strlcpy(dest, "lorem ipsum dolor sit amet", 0));
//     printf("dest = %s",dest);
//     printf("////");
//     return 0;
// }