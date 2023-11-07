/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-cha <aben-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:13:38 by aben-cha          #+#    #+#             */
/*   Updated: 2023/11/06 15:15:32 by aben-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned    int i;
    char    *ptr;
    
    i = 0;
    ptr = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
    if(ptr == NULL)
       return (NULL);
    while(s[i])
    {
        ptr[i] = f(i, s[i]);
        i++;
    }
    ptr[i] = '\0';
    return (ptr);   
}