/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:28:45 by aben-cha          #+#    #+#             */
/*   Updated: 2023/11/06 13:05:07 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

// #include <stdlib.h>
// size_t  ft_strlen(const char *s)
// {
//     size_t len;

//     len = 0;
//     while (*s)
//     {
//         len++;
//         s++;
//     }
//     return (len);
// }
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *ptr;
    size_t i;
    size_t s_length;
   
    if(s == NULL)
     return NULL;
    s_length = ft_strlen(s);
    if(start >= s_length)
        return ft_strdup("");
    if (len > (s_length - start)) 
        len = s_length - start;
    ptr = (char *)malloc(sizeof(char) * (len + 1));
    if(ptr == NULL)
       return (NULL);
    i = 0;   
    while(i < len)
        ptr[i++] = s[start++];
    ptr[i] = '\0';
    return (ptr);   
}
// int main(void)
// {
//     char const s[]="ben chafai ayoub";
//     char *res = ft_substr(s,4,2);
//     printf("substring : %s\n",res);
//     printf("substring : %zu\n",ft_strlen(res));
// }

// int main() {
//     // Existing code...

//     // Test cases
//     test_ft_substr("Hello, World!", 7, 5);  // Expected: "World"
//     test_ft_substr("Hello, World!", 0, 5);  // Expected: "Hello"
//     test_ft_substr("Hello, World!", 7, 20); // Expected: "World!"

//     // Test edge cases
//     test_ft_substr("", 0, 5);           // Expected: ""
//     test_ft_substr("Hello", 10, 5);     // Expected: NULL (start beyond string length)
//     test_ft_substr("Hello, World!", 7, 0); // Expected: "" (empty substring)

//     return 0;
// }